// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPERSONAFEATUREVALIDATOR_H
#define PGPERSONAFEATUREVALIDATOR_H



#import "PGFeatureAggregationValidator.h"

@interface PGPersonaFeatureValidator : PGFeatureAggregationValidator



-(NSInteger)featureValidatorType;
-(NSInteger)isValidEntity:(id)arg0 graph:(id)arg1 assetFetchOptionPropertySet:(id)arg2 error:(*id)arg3 ;


@end


#endif