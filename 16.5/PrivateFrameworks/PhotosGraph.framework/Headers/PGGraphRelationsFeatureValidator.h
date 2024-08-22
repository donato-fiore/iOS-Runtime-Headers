// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHRELATIONSFEATUREVALIDATOR_H
#define PGGRAPHRELATIONSFEATUREVALIDATOR_H



#import "PGFeatureValidator.h"

@interface PGGraphRelationsFeatureValidator : PGFeatureValidator



-(NSInteger)featureValidatorType;
-(NSInteger)isValidEntity:(id)arg0 error:(*id)arg1 ;
-(NSInteger)isValidEntity:(id)arg0 graph:(id)arg1 error:(*id)arg2 ;


@end


#endif