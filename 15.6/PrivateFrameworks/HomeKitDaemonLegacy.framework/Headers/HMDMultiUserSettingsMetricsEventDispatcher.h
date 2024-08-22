// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMULTIUSERSETTINGSMETRICSEVENTDISPATCHER_H
#define HMDMULTIUSERSETTINGSMETRICSEVENTDISPATCHER_H

@class HMFObject, NSString, NSUUID, NSArray;
@protocol HMFLogging, HMDLogEventDailyProvider, HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMMLogEventSubmitting;


#import "HMDLogEventDailyScheduler.h"

@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>



@property (weak) NSObject<HMDMultiUserSettingsMetricsEventDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler; // ivar: _logEventDailyScheduler
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 logEventDailyScheduler:(id)arg2 ;
-(id)logIdentifier;
-(void)registerForDailyMultiUserSettingsEvents;
-(void)submitMultiUserSettingsDailyEvent;
-(void)triggerLogEventProviderDailySubmissionBlocks;


@end


#endif