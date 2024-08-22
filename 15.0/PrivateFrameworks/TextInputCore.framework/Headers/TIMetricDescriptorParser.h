// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMETRICDESCRIPTORPARSER_H
#define TIMETRICDESCRIPTORPARSER_H



#import "TIDescriptorParser.h"

@interface TIMetricDescriptorParser : TIDescriptorParser



-(id)descriptionFromDependencyChain:(id)arg0 andDependencyName:(id)arg1 ;
-(id)init;
-(id)parseBucketThresholdsFromConfig:(id)arg0 isFeatureUsageDescriptor:(BOOL)arg1 errors:(id)arg2 ;
-(id)parseBucketValuesFromConfig:(id)arg0 forBucketThresholds:(id)arg1 isFeatureUsageDescriptor:(BOOL)arg2 errors:(id)arg3 ;
-(id)parseCalculationDefaultValueFromConfig:(id)arg0 forExpression:(id)arg1 andPrecondition:(id)arg2 errors:(id)arg3 ;
-(id)parseCalculationDependenciesFromConfig:(id)arg0 forExpression:(id)arg1 errors:(id)arg2 ;
-(id)parseCalculationPreconditionFromConfig:(id)arg0 forExpression:(id)arg1 errors:(id)arg2 ;
-(id)parseContextValueDescriptorWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(id)parseFeatureUsageDescriptorWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(id)parseMetricDescriptorWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(id)parseNumericValueDescriptorWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(id)parseSettingValueDescriptorWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(void)findInvalidDependencyChain:(id)arg0 forMetricDescriptor:(id)arg1 fromMetricDescriptors:(id)arg2 andInvalidMetricNames:(id)arg3 invalidMetricDescriptors:(id)arg4 errors:(id)arg5 ;
-(void)parseMetricDescriptors:(id)arg0 andInvalidMetricNames:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;


@end


#endif