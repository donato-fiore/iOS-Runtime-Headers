// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVRCRMSNOWPLAYINGSTATE_H
#define _TVRCRMSNOWPLAYINGSTATE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _TVRCRMSNowPlayingState : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat lastReportedPlaybackPosition; // ivar: _lastReportedPlaybackPosition
@property (retain, nonatomic) NSDate *lastReportedTimestamp; // ivar: _lastReportedTimestamp
@property (nonatomic) CGFloat playbackRate; // ivar: _playbackRate


+(id)nowPlayingStateFromInfo:(id)arg0 ;


@end


#endif