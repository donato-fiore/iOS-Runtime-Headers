// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKAVAILABILITYCACHEDSPANRANGE_H
#define EKAVAILABILITYCACHEDSPANRANGE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface EKAvailabilityCachedSpanRange : NSObject {
    NSMutableArray *_cachedSpans;
}




+(id)_clampDateRangeForSpans:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(NSInteger)_currentMaxSpanTypeIn:(id)arg0 ;
-(id)_eliminateOverlapsInResults:(id)arg0 ;
-(id)cachedSpansFromSpans:(id)arg0 ;
-(id)deDupSpans:(id)arg0 ;
-(id)description;
-(id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)init;
-(id)spans;
-(void)insertSpans:(id)arg0 ;
-(void)sanitizeAndInsertResults:(id)arg0 inRange:(id)arg1 ;


@end


#endif