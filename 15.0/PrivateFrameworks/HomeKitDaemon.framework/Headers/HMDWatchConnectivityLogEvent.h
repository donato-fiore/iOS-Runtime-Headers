// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWATCHCONNECTIVITYLOGEVENT_H
#define HMDWATCHCONNECTIVITYLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDWatchConnectivityLogEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isReportComplete) BOOL reportComplete; // ivar: _reportComplete
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger watchAddedNotificationCount; // ivar: _watchAddedNotificationCount
@property (nonatomic) NSUInteger watchRemovedNotificationCount; // ivar: _watchRemovedNotificationCount


-(id)init;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif