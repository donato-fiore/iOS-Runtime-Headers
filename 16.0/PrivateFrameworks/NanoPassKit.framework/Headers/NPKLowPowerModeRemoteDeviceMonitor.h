// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKLOWPOWERMODEREMOTEDEVICEMONITOR_H
#define NPKLOWPOWERMODEREMOTEDEVICEMONITOR_H

@class NSString;
@protocol NPKLowPowerModeMonitor;

#import <Foundation/Foundation.h>

#import "NPKObserverManager.h"

@interface NPKLowPowerModeRemoteDeviceMonitor : NSObject <NPKLowPowerModeMonitor>

 {
    NPKObserverManager *_observersManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_currentDeviceDomainAccessor;
-(id)init;
-(void)_sendLowPowerModeEnabled:(BOOL)arg0 toObserver:(id)arg1 ;
-(void)_sendLowPowerModeEnabledStateToObservers;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif