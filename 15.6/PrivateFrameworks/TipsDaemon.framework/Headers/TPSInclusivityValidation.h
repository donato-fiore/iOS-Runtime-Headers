// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSINCLUSIVITYVALIDATION_H
#define TPSINCLUSIVITYVALIDATION_H

@class NSArray;


#import "TPSTargetingValidation.h"

@interface TPSInclusivityValidation : TPSTargetingValidation

@property (copy, nonatomic) NSArray *excludeValues; // ivar: _excludeValues
@property (copy, nonatomic) NSArray *targetValues; // ivar: _targetValues


-(id)description;
-(id)initWithTargetValues:(id)arg0 excludeValues:(id)arg1 ;


@end


#endif