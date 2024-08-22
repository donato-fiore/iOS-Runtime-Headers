// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPKPERFRESULTANALYZER_H
#define LPKPERFRESULTANALYZER_H


#import <Foundation/Foundation.h>


@interface LPKPerfResultAnalyzer : NSObject



+(CGFloat)_durationFromString:(id)arg0 ;
+(id)_abstractUserSwitchsFromTheEnd:(NSInteger)arg0 userSwitches:(id)arg1 ;
+(id)_perfResultsFromUserSwitches:(id)arg0 ;
+(id)analyzePerformanceTestResult:(id)arg0 type:(NSUInteger)arg1 count:(NSInteger)arg2 ;
+(void)_populateMigratorsData:(id)arg0 ;


@end


#endif