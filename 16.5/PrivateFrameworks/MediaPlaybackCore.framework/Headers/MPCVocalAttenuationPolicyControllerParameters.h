// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONPOLICYCONTROLLERPARAMETERS_H
#define MPCVOCALATTENUATIONPOLICYCONTROLLERPARAMETERS_H

@class NSProcessInfo, ICEnvironmentMonitor;

#import <Foundation/Foundation.h>


@interface MPCVocalAttenuationPolicyControllerParameters : NSObject

@property (retain, nonatomic) NSProcessInfo *lowPowerModeMonitor; // ivar: _lowPowerModeMonitor
@property (nonatomic) CGFloat renderingTimeLimit; // ivar: _renderingTimeLimit
@property (retain, nonatomic) ICEnvironmentMonitor *thermalMonitor; // ivar: _thermalMonitor




@end


#endif