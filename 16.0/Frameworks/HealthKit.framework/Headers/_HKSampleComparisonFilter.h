// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSAMPLECOMPARISONFILTER_H
#define _HKSAMPLECOMPARISONFILTER_H

@class HKComparisonFilter;


#import "HKSampleType.h"

@interface _HKSampleComparisonFilter : HKComparisonFilter {
    CGFloat _comparisonTime;
    HKSampleType *_anySampleType;
}




+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg0 ;
+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
+(id)endDateFilterWithOperatorType:(NSUInteger)arg0 date:(id)arg1 dataTypes:(id)arg2 ;
+(id)startDateFilterWithOperatorType:(NSUInteger)arg0 date:(id)arg1 dataTypes:(id)arg2 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(NSInteger)acceptsDataObjectWithStartTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 valueInCanonicalUnit:(CGFloat)arg2 ;
-(void)configureInMemoryFilter;


@end


#endif