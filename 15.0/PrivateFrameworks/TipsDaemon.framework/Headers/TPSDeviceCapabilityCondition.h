// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSDEVICECAPABILITYCONDITION_H
#define TPSDEVICECAPABILITYCONDITION_H

@class NSArray;


#import "TPSCondition.h"

@interface TPSDeviceCapabilityCondition : TPSCondition

@property (copy, nonatomic) NSArray *values;


-(id)_valuesFromValuesArray:(id)arg0 ;
-(id)init;
-(id)targetingValidations;


@end


#endif