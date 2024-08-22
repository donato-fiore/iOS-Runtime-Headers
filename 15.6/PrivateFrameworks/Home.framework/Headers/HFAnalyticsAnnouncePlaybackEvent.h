// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSANNOUNCEPLAYBACKEVENT_H
#define HFANALYTICSANNOUNCEPLAYBACKEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsAnnouncePlaybackEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *audioTranscriptionsAreEnabled; // ivar: _audioTranscriptionsAreEnabled
@property (retain, nonatomic) NSString *playbackAnnouncementID; // ivar: _playbackAnnouncementID
@property (retain, nonatomic) NSNumber *playbackDuration; // ivar: _playbackDuration
@property (retain, nonatomic) NSNumber *playbackFailed; // ivar: _playbackFailed
@property (nonatomic) BOOL playbackInterruptedByRouteChange; // ivar: _playbackInterruptedByRouteChange
@property (nonatomic) BOOL playbackInterruptedBySystem; // ivar: _playbackInterruptedBySystem
@property (nonatomic) BOOL playbackInterruptedByUser; // ivar: _playbackInterruptedByUser
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSNumber *routeChangeInterruptionReason; // ivar: _routeChangeInterruptionReason


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif