// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSANNOUNCERECORDINGEVENT_H
#define HFANALYTICSANNOUNCERECORDINGEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsAnnounceRecordingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *announceRecordingIsForHome; // ivar: _announceRecordingIsForHome
@property (copy, nonatomic) NSString *announceRecordingIsForRoom; // ivar: _announceRecordingIsForRoom
@property (nonatomic) BOOL isAReply; // ivar: _isAReply
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSString *recipientAnnouncementID; // ivar: _recipientAnnouncementID
@property (retain, nonatomic) NSNumber *recordingDuration; // ivar: _recordingDuration
@property (retain, nonatomic) NSNumber *recordingFailed; // ivar: _recordingFailed
@property (nonatomic) BOOL recordingInterruptedByRouteChange; // ivar: _recordingInterruptedByRouteChange
@property (nonatomic) BOOL recordingInterruptedBySystem; // ivar: _recordingInterruptedBySystem
@property (nonatomic) BOOL recordingInterruptedByUser; // ivar: _recordingInterruptedByUser
@property (retain, nonatomic) NSNumber *routeChangeInterruptionReason; // ivar: _routeChangeInterruptionReason


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif