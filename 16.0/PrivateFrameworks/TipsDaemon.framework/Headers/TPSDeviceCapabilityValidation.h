// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSDEVICECAPABILITYVALIDATION_H
#define TPSDEVICECAPABILITYVALIDATION_H

@class NSDictionary;


#import "TPSTargetingValidation.h"

@interface TPSDeviceCapabilityValidation : TPSTargetingValidation

@property (readonly, copy, nonatomic) NSDictionary *queries;


-(id)initWithQueries:(id)arg0 ;


@end


#endif