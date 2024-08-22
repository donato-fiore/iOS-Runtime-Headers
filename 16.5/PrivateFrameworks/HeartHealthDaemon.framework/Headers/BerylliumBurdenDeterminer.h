// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BERYLLIUMBURDENDETERMINER_H
#define BERYLLIUMBURDENDETERMINER_H

@class ABAfibBurdenAnalyzer, HKAnalyticsEventSubmissionManager;
@protocol HKHRAFibBurdenDeterminer;

#import <Foundation/Foundation.h>


@interface BerylliumBurdenDeterminer : NSObject <HKHRAFibBurdenDeterminer>

 {
    ABAfibBurdenAnalyzer *_analyzer;
    HKAnalyticsEventSubmissionManager *_analyticsEventSubmissionManager;
}




-(id)burdenForTachogramClassifications:(id)arg0 calculationType:(NSInteger)arg1 calculationTypeContext:(id)arg2 error:(*id)arg3 ;
-(id)initWithAnalyticsEventSubmissionManager:(id)arg0 ;


@end


#endif