// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKQUANTITYSAMPLECOMPARISONFILTER_H
#define _HKQUANTITYSAMPLECOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKQuantitySampleComparisonFilter : HKComparisonFilter



+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(NSInteger)acceptsDataObjectWithStartTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 valueInCanonicalUnit:(CGFloat)arg2 ;


@end


#endif