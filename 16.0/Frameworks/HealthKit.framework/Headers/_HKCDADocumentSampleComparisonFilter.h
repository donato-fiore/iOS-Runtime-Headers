// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKCDADOCUMENTSAMPLECOMPARISONFILTER_H
#define _HKCDADOCUMENTSAMPLECOMPARISONFILTER_H

@class HKComparisonFilter, NSRegularExpression;



@interface _HKCDADocumentSampleComparisonFilter : HKComparisonFilter {
    NSRegularExpression *_comparisonExpression;
}




+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(void)configureInMemoryFilter;


@end


#endif