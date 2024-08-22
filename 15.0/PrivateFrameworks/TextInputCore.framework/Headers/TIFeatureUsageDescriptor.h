// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIFEATUREUSAGEDESCRIPTOR_H
#define TIFEATUREUSAGEDESCRIPTOR_H

@class NSString;


#import "TINumericValueDescriptor.h"

@interface TIFeatureUsageDescriptor : TINumericValueDescriptor

@property (readonly, nonatomic) NSString *configString; // ivar: _configString
@property (readonly, nonatomic) NSString *discoveryCounter; // ivar: _discoveryCounter
@property (readonly, nonatomic) NSInteger discoveryThreshold; // ivar: _discoveryThreshold


+(id)featureUsageDescriptorWithMetricName:(id)arg0 discoveryCounter:(id)arg1 discoveryThreshold:(NSInteger)arg2 configString:(id)arg3 calculationExpression:(id)arg4 calculationPrecondition:(id)arg5 calculationDefaultValue:(id)arg6 calculationDependencies:(id)arg7 bucketThresholds:(id)arg8 ;
-(id)initWithMetricName:(id)arg0 discoveryCounter:(id)arg1 discoveryThreshold:(NSInteger)arg2 configString:(id)arg3 calculationExpression:(id)arg4 calculationPrecondition:(id)arg5 calculationDefaultValue:(id)arg6 calculationDependencies:(id)arg7 bucketThresholds:(id)arg8 ;


@end


#endif