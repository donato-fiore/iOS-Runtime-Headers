// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPNOWPLAYINGINFOLYRICSEVENT_H
#define MPNOWPLAYINGINFOLYRICSEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "MPNowPlayingInfoLyricsItemToken.h"

@interface MPNowPlayingInfoLyricsEvent : NSObject

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) *void mediaRemoteLyricsEvent; // ivar: _mediaRemoteLyricsEvent
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;


-(id)initWithMediaRemoteLyricsEvent:(*void)arg0 ;
-(void)dealloc;


@end


#endif