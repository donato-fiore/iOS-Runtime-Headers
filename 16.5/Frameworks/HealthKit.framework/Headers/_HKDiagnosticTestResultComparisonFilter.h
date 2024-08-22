// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKDIAGNOSTICTESTRESULTCOMPARISONFILTER_H
#define _HKDIAGNOSTICTESTRESULTCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKDiagnosticTestResultComparisonFilter : HKComparisonFilter



+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsDiagnosticTestResultWithCategory:(id)arg0 ;
-(BOOL)_acceptsDiagnosticTestResultWithReferenceRangeStatus:(NSInteger)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif