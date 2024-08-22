// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDQUANTITYSAMPLEVALUEENUMERATOR_H
#define HDQUANTITYSAMPLEVALUEENUMERATOR_H


#import <Foundation/Foundation.h>


@interface HDQuantitySampleValueEnumerator : NSObject



+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg0 profile:(id)arg1 options:(NSInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;
+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg0 transaction:(id)arg1 options:(NSInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg0 profile:(id)arg1 options:(NSInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg0 transaction:(id)arg1 options:(NSInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;


@end


#endif