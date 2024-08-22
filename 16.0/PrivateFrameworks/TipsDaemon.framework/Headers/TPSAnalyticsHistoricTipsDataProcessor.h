// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSHISTORICTIPSDATAPROCESSOR_H
#define TPSANALYTICSHISTORICTIPSDATAPROCESSOR_H

@class NSDate;


#import "TPSAnalyticsProcessor.h"

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}




-(BOOL)_shouldProceedWithCrunching;
-(NSUInteger)_daysBetweenDate:(id)arg0 andOtherDate:(id)arg1 ;
-(id)_furthestLookbackDate;
-(id)init;
-(void)processAnalytics:(id)arg0 ;
-(void)resetAnalytics;
-(void)updateDisplayedCount:(*NSInteger)arg0 andFrequencyControlCount:(*NSInteger)arg1 forTipStatus:(id)arg2 andLookbackDate:(id)arg3 ;


@end


#endif