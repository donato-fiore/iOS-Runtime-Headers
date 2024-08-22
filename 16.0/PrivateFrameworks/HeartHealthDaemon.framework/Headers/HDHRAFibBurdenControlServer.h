// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRAFIBBURDENCONTROLSERVER_H
#define HDHRAFIBBURDENCONTROLSERVER_H

@class HDStandardTaskServer, NSString;
@protocol HKHRAFibBurdenControlServer;


#import "HKHRAFibBurdenSevenDayAnalysisScheduler.h"

@interface HDHRAFibBurdenControlServer : HDStandardTaskServer <HKHRAFibBurdenControlServer>

 {
    HKHRAFibBurdenSevenDayAnalysisScheduler *_scheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)taskIdentifier;
-(id)_clientRemoteObjectProxy;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 scheduler:(id)arg4 ;
-(id)remoteInterface;
-(void)_addTachogramsForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 chanceOfAFib:(CGFloat)arg2 chanceOfWrite:(CGFloat)arg3 minutesBetweenSamples:(NSInteger)arg4 startingHour:(NSInteger)arg5 endingHour:(NSInteger)arg6 completion:(id)arg7 ;
-(void)remote_addTachogramClassificationForSampleUUID:(id)arg0 hasAFib:(BOOL)arg1 completion:(id)arg2 ;
-(void)remote_addTachogramsForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 chanceOfAFib:(id)arg2 chanceOfWrite:(id)arg3 minutesBetweenSamples:(id)arg4 startingHour:(id)arg5 endingHour:(id)arg6 completion:(id)arg7 ;
-(void)remote_deleteAllTachogramClassificationsWithCompletion:(id)arg0 ;
-(void)remote_deleteTachogramClassificationForSampleUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_determineIfAnalysisCanRunWithFeatureStatus:(id)arg0 completion:(id)arg1 ;
-(void)remote_determineMajorityTimeZoneForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)remote_performAnalysisForWeekContainingDayIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_queryAllTachogramClassificationsWithCompletion:(id)arg0 ;
-(void)remote_queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_queryEligibleTachogramsForPreviousSixWeeksForWeekday:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_queryEligibleTachogramsForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)remote_queryTachogramClassificationForSampleUUID:(id)arg0 completion:(id)arg1 ;
-(void)remote_triggerAnalysis;


@end


#endif