// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSINCLUSIVITYCONDITION_H
#define TPSINCLUSIVITYCONDITION_H

@class NSArray;


#import "TPSCondition.h"

@interface TPSInclusivityCondition : TPSCondition

@property (copy, nonatomic) NSArray *values;


-(id)_valuesFromValueTypeArray:(id)arg0 ;
-(id)_valuesFromValuesArray:(id)arg0 ;


@end


#endif