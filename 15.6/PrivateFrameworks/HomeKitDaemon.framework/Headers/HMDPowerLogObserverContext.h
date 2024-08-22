// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPOWERLOGOBSERVERCONTEXT_H
#define HMDPOWERLOGOBSERVERCONTEXT_H

@class HMFPowerLogger;

#import <Foundation/Foundation.h>

#import "HMDIntervalMapper.h"
#import "HMDLogEventDispatcher.h"

@interface HMDPowerLogObserverContext : NSObject

@property (readonly, nonatomic) HMDIntervalMapper *cameraConfigurationEventHistogram; // ivar: _cameraConfigurationEventHistogram
@property (readonly, nonatomic) HMDIntervalMapper *homeConfigurationEventHistogram; // ivar: _homeConfigurationEventHistogram
@property (readonly, weak, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly, weak, nonatomic) HMFPowerLogger *powerLogger; // ivar: _powerLogger


-(id)initWithLogEventDispatcher:(id)arg0 powerLogger:(id)arg1 ;


@end


#endif