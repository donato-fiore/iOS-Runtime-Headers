// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCATEGORYSAMPLECOMPARISONFILTER_H
#define _HKCATEGORYSAMPLECOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKCategorySampleComparisonFilter : HKComparisonFilter



+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif