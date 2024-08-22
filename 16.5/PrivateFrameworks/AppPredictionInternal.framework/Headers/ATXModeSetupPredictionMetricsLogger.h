// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODESETUPPREDICTIONMETRICSLOGGER_H
#define ATXMODESETUPPREDICTIONMETRICSLOGGER_H


#import <Foundation/Foundation.h>


@interface ATXModeSetupPredictionMetricsLogger : NSObject



-(id)appSessionInterruptionsCalculatorSinceDate:(id)arg0 andForModeSemanticTypes:(id)arg1 ;
-(id)fetchAllRelevantModeSemanticTypesInLastSevenDays:(id)arg0 ;
-(id)getRecommendedAndCandidateAppsInAllowListForSemanticTypes:(id)arg0 ;
-(id)getRecommendedAndCandidateAppsInDenyListForSemanticTypes:(id)arg0 ;
-(id)globalAppSessionInterruptionsCalculatorSinceDate:(id)arg0 ;
-(id)init;
-(void)logMetrics;


@end


#endif