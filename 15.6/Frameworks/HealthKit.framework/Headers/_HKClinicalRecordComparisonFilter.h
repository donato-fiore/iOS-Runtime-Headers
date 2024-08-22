// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCLINICALRECORDCOMPARISONFILTER_H
#define _HKCLINICALRECORDCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKClinicalRecordComparisonFilter : HKComparisonFilter



+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif