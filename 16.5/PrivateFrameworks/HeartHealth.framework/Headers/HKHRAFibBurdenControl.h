// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENCONTROL_H
#define HKHRAFIBBURDENCONTROL_H

@class HKTaskServerProxyProvider, NSString;
@protocol _HKXPCExportable, HKHRAFibBurdenControlClient;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenControl : NSObject <_HKXPCExportable, HKHRAFibBurdenControlClient>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)determineIfAnalysisCanRunWithFeatureStatus:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)performAnalysisForWeekContainingDayIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(id)remoteInterface;
-(void)addTachogramClassificationForSampleUUID:(id)arg0 hasAFib:(BOOL)arg1 completion:(id)arg2 ;
-(void)addTachogramsForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 chanceOfAFib:(id)arg2 chanceOfWrite:(id)arg3 minutesBetweenSamples:(id)arg4 startingHour:(id)arg5 endingHour:(id)arg6 completion:(id)arg7 ;
-(void)connectionInvalidated;
-(void)deleteAllTachogramClassificationsWithCompletion:(id)arg0 ;
-(void)deleteTachogramClassificationForSampleUUID:(id)arg0 completion:(id)arg1 ;
-(void)determineMajorityTimeZoneForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)queryAllTachogramClassificationsWithCompletion:(id)arg0 ;
-(void)queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(NSInteger)arg0 completion:(id)arg1 ;
-(void)queryEligibleTachogramsForPreviousSixWeeksForWeekday:(NSInteger)arg0 completion:(id)arg1 ;
-(void)queryEligibleTachogramsForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)queryTachogramClassificationForSampleUUID:(id)arg0 completion:(id)arg1 ;
-(void)triggerAnalysis;


@end


#endif