// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMEDIAPLAYBACKSTATESNAPSHOT_H
#define AFMEDIAPLAYBACKSTATESNAPSHOT_H

@class NSString, NSDate;
@protocol AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isProxyGroupPlayer; // ivar: _isProxyGroupPlayer
@property (readonly, copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (readonly, copy, nonatomic) NSDate *nowPlayingTimestamp; // ivar: _nowPlayingTimestamp
@property (readonly, nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)ad_shortDescription;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithPlaybackState:(NSInteger)arg0 nowPlayingTimestamp:(id)arg1 mediaType:(id)arg2 groupIdentifier:(id)arg3 isProxyGroupPlayer:(BOOL)arg4 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif