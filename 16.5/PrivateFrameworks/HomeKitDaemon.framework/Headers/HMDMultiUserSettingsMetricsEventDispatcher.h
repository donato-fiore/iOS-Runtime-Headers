// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMULTIUSERSETTINGSMETRICSEVENTDISPATCHER_H
#define HMDMULTIUSERSETTINGSMETRICSEVENTDISPATCHER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMDLogEventDailyTaskRunner, HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMMLogEventSubmitting;


#import "HMDLogEventDailyScheduler.h"

@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner>



@property (readonly) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (weak) NSObject<HMDMultiUserSettingsMetricsEventDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 ;
-(id)logIdentifier;
-(void)registerForDailyMultiUserSettingsEvents;
-(void)runDailyTask;
-(void)submitMultiUserSettingsDailyEvent;


@end


#endif