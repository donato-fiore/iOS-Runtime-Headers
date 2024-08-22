// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPOWERLOGOBSERVERCONTEXT_H
#define HMDPOWERLOGOBSERVERCONTEXT_H

@class HMMIntervalMapper, HMFPowerLogger;
@protocol HMMLogEventDispatching;

#import <Foundation/Foundation.h>


@interface HMDPowerLogObserverContext : NSObject

@property (readonly, nonatomic) HMMIntervalMapper *cameraConfigurationEventHistogram; // ivar: _cameraConfigurationEventHistogram
@property (readonly, nonatomic) HMMIntervalMapper *homeConfigurationEventHistogram; // ivar: _homeConfigurationEventHistogram
@property (readonly, weak, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly, weak, nonatomic) HMFPowerLogger *powerLogger; // ivar: _powerLogger


-(id)initWithLogEventDispatcher:(id)arg0 powerLogger:(id)arg1 ;


@end


#endif