// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TINUMERICVALUEDESCRIPTOR_H
#define TINUMERICVALUEDESCRIPTOR_H

@class NSArray, NSNumber, NSString;


#import "TIMetricDescriptor.h"

@interface TINumericValueDescriptor : TIMetricDescriptor

@property (readonly, nonatomic) NSArray *bucketThresholds; // ivar: _bucketThresholds
@property (readonly, nonatomic) NSArray *bucketValues; // ivar: _bucketValues
@property (readonly, nonatomic) NSNumber *calculationDefaultValue; // ivar: _calculationDefaultValue
@property (readonly, nonatomic) NSArray *calculationDependencies; // ivar: _calculationDependencies
@property (readonly, nonatomic) NSString *calculationExpression; // ivar: _calculationExpression
@property (readonly, nonatomic) NSString *calculationPrecondition; // ivar: _calculationPrecondition


+(id)numericValueDescriptorWithMetricName:(id)arg0 calculationExpression:(id)arg1 calculationPrecondition:(id)arg2 calculationDefaultValue:(id)arg3 calculationDependencies:(id)arg4 bucketThresholds:(id)arg5 bucketValues:(id)arg6 ;
-(id)initWithMetricName:(id)arg0 calculationExpression:(id)arg1 calculationPrecondition:(id)arg2 calculationDefaultValue:(id)arg3 calculationDependencies:(id)arg4 bucketThresholds:(id)arg5 bucketValues:(id)arg6 ;


@end


#endif