// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDSYNCLOGEVENTSANALYZER_H
#define HMDCLOUDSYNCLOGEVENTSANALYZER_H

@protocol HMDAggregationAnalysisEventContributing, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"

@interface HMDCloudSyncLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>



@property NSUInteger dataSyncState; // ivar: _dataSyncState
@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter


+(id)managedEventCounterRequestGroups;
-(id)cloudSyncAnalysisResult;
-(id)initWithEventCountersManager:(id)arg0 logEventSubmitter:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)handleDataSyncStateEvent:(id)arg0 ;
-(void)handleDecryptionCompletedEvent:(id)arg0 ;
-(void)handleFetchLogEvent:(id)arg0 ;
-(void)handleIncomingCloudPushLogEvent:(id)arg0 ;
-(void)handleMaximumDelayLogEvent:(id)arg0 ;
-(void)handleRecordOperationLogEvent:(id)arg0 ;
-(void)handleUploadLogEvent:(id)arg0 ;
-(void)handleUploadReasonLogEvent:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;
-(void)resetDataSource;


@end


#endif