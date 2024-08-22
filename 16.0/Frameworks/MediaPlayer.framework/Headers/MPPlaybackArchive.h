// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPPLAYBACKARCHIVE_H
#define MPPLAYBACKARCHIVE_H

@class NSString, NSData, NSMutableDictionary;
@protocol MPMutablePlaybackArchive, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPPlaybackArchiveDisplayProperties.h"

@interface MPPlaybackArchive : NSObject <MPMutablePlaybackArchive, NSCopying, NSSecureCoding>

 {
    BOOL _final;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSUInteger copyOptions; // ivar: _copyOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPPlaybackArchiveDisplayProperties *displayProperties; // ivar: _displayProperties
@property (readonly, copy, nonatomic) NSString *fallbackStoreIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *playbackSessionData; // ivar: _playbackSessionData
@property (readonly, copy, nonatomic) NSString *playbackSessionIdentifier; // ivar: _playbackSessionIdentifier
@property (readonly, copy, nonatomic) NSString *playbackSessionType; // ivar: _playbackSessionType
@property (nonatomic) NSUInteger queueControlOptions; // ivar: _queueControlOptions
@property (retain, nonatomic) NSMutableDictionary *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedOptions; // ivar: _supportedOptions
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)boolValueForOption:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithOptions:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 sessionIdentifier:(id)arg1 data:(id)arg2 dataType:(id)arg3 bundleIdentifier:(id)arg4 supportedOptions:(NSUInteger)arg5 displayProperties:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBOOLValue:(BOOL)arg0 forOption:(NSInteger)arg1 ;
-(void)setSessionIdentifier:(id)arg0 type:(id)arg1 data:(id)arg2 ;


@end


#endif