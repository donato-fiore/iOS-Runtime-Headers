// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSLEEPQUERYRESULTBUILDER_H
#define _HKSLEEPQUERYRESULTBUILDER_H

@class NSDateInterval, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _HKSleepQueryResultBuilder : NSObject {
    NSDateInterval *_resultInterval;
    NSArray *_sourceOrder;
    NSMutableDictionary *_samplesByCategoryValue;
    NSMutableDictionary *_samplesBySource;
}




-(id)_categorySampleBufferForCategoryValue:(NSInteger)arg0 ;
-(id)_categorySampleBufferForSource:(id)arg0 ;
-(id)_createDateIntervalsFromSamples:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)_organizeSamplesBySource:(id)arg0 ;
-(id)calculateResult;
-(id)initWithResultInterval:(id)arg0 sourceOrder:(id)arg1 ;
-(void)addSleepSamples:(id)arg0 ;


@end


#endif