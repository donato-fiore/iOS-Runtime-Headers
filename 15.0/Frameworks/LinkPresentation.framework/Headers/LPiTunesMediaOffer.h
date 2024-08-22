// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPITUNESMEDIAOFFER_H
#define LPITUNESMEDIAOFFER_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface LPiTunesMediaOffer : NSObject

@property (readonly, nonatomic) BOOL hasAudio; // ivar: _hasAudio
@property (readonly, nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (readonly, copy, nonatomic) NSURL *previewURL; // ivar: _previewURL
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)hasAudioForOffer:(id)arg0 ;
+(BOOL)hasVideoForOffer:(id)arg0 ;
+(id)previewURLForOffer:(id)arg0 ;
+(id)typeForOffer:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif