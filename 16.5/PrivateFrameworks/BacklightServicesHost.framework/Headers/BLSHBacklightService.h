// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTSERVICE_H
#define BLSHBACKLIGHTSERVICE_H


#import <Foundation/Foundation.h>

#import "BLSHBacklightStateMachine.h"
#import "BLSHBacklightTransitionStateMachine.h"
#import "BLSHXPCBacklightProxyHostServer.h"
#import "BLSHDiagnosticsServer.h"
#import "BLSHWatchdogTester.h"
#import "BLSHCriticalAssertTester.h"

@interface BLSHBacklightService : NSObject {
    BLSHBacklightStateMachine *_stateMachine;
    BLSHBacklightTransitionStateMachine *_transitionStateMachine;
    BLSHXPCBacklightProxyHostServer *_backlightXPCServer;
    BLSHDiagnosticsServer *_diagnosticsServer;
    BLSHWatchdogTester *_watchdogTester;
    BLSHCriticalAssertTester *_criticalAssertTester;
}




+(id)serviceForService:(id)arg0 withPlatformProvider:(id)arg1 osInterfaceProvider:(id)arg2 inactiveBudgetPolicy:(id)arg3 ;
-(id)initForService:(id)arg0 withPlatformProvider:(id)arg1 osInterfaceProvider:(id)arg2 inactiveBudgetPolicy:(id)arg3 ;


@end


#endif