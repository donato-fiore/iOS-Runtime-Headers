// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCLOUDKITSYNCPROGRESSRUNTIMETEST_H
#define IMCLOUDKITSYNCPROGRESSRUNTIMETEST_H



#import "IMCloudKitEventNotificationManagerRuntimeTest.h"

@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest

@property NSUInteger maxProgressCount; // ivar: _maxProgressCount
@property NSUInteger progressCount; // ivar: _progressCount
@property CGFloat progressRescheduleDelay; // ivar: _progressRescheduleDelay


-(id)createSyncStatisticsForMockSyncState:(id)arg0 ;
-(void)cloudKitEventNotificationManager:(id)arg0 syncProgressDidUpdate:(id)arg1 ;
-(void)setUp;
-(void)startTest;


@end


#endif