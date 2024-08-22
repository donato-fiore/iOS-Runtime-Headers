// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCLOUDKITEVENTNOTIFICATIONMANAGERRUNTIMETEST_H
#define IMCLOUDKITEVENTNOTIFICATIONMANAGERRUNTIMETEST_H

@class IMRuntimeTestCase, NSString;
@protocol IMCloudKitEventHandler;


#import "IMCloudKitHookTestSingleton.h"

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler>

 {
    CGFloat _previousInterval;
}


@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks; // ivar: _cloudKitHooks
@property (readonly, copy) NSString *debugDescription;
@property CGFloat defaultTestDuration; // ivar: _defaultTestDuration
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createSyncStatisticsForMockSyncState:(id)arg0 ;
-(void)cloudKitEventNotificationManager:(id)arg0 syncProgressDidUpdate:(id)arg1 ;
-(void)cloudKitEventNotificationManager:(id)arg0 syncStateDidChange:(id)arg1 ;
-(void)sendSyncStateChangedEvent;
-(void)setUp;
-(void)startTest;
-(void)tearDown;
-(void)updateMockSyncState;
-(void)willSendSyncState:(id)arg0 withSyncStatistics:(id)arg1 ;
-(void)willUpdateSyncState:(id)arg0 ;


@end


#endif