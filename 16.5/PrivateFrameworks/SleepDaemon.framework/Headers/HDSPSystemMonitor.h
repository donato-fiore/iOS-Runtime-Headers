// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSYSTEMMONITOR_H
#define HDSPSYSTEMMONITOR_H

@class NSString;
@protocol HDSPSystemReadyDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSystemReadyProvider;

#import <Foundation/Foundation.h>

#import "HDSPApplicationWorkspaceMonitor.h"
#import "HDSPDevicePowerMonitor.h"
#import "HDSPDeviceUnlockMonitor.h"
#import "HDSPEnvironment.h"
#import "HDSPWatchOnWristMonitor.h"

@interface HDSPSystemMonitor : NSObject <HDSPSystemReadyDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>



@property (readonly, nonatomic) HDSPApplicationWorkspaceMonitor *applicationWorkspaceMonitor; // ivar: _applicationWorkspaceMonitor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSystemReadyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPDevicePowerMonitor *devicePowerMonitor; // ivar: _devicePowerMonitor
@property (readonly, nonatomic) HDSPDeviceUnlockMonitor *deviceUnlockMonitor; // ivar: _deviceUnlockMonitor
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (readonly) Class superclass;
@property (readonly, nonatomic) os_unfair_lock_s systemMonitorLock; // ivar: _systemMonitorLock
@property (readonly, nonatomic) BOOL systemReady; // ivar: _systemReady
@property (readonly, nonatomic) NSObject<HDSPSystemReadyProvider> *systemReadyProvider; // ivar: _systemReadyProvider
@property (readonly, nonatomic) HDSPWatchOnWristMonitor *watchOnWristMonitor; // ivar: _watchOnWristMonitor


+(id)_platformSpecificReadyProviderForEnvironment:(id)arg0 ;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 watchOnWristMonitor:(id)arg1 devicePowerMonitor:(id)arg2 deviceUnlockMonitor:(id)arg3 ;
-(id)initWithEnvironment:(id)arg0 watchOnWristMonitor:(id)arg1 devicePowerMonitor:(id)arg2 deviceUnlockMonitor:(id)arg3 systemReadyProvider:(id)arg4 applicationWorkspaceMonitor:(id)arg5 ;
-(void)_withLock:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)systemDidBecomeReady;


@end


#endif