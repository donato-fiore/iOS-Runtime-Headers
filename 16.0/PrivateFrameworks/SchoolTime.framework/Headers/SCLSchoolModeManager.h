// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSCHOOLMODEMANAGER_H
#define SCLSCHOOLMODEMANAGER_H

@class NSMutableSet, NSMapTable, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, SCLSchoolModeClientProxyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SCLSchoolModeManagerConfiguration.h"
#import "SCLInterruptBehaviorResolver.h"
#import "SCLSuppressSchoolModeAssertionManager.h"
#import "SCLTransportService.h"

@interface SCLSchoolModeManager : NSObject <NSXPCListenerDelegate, SCLSchoolModeClientProxyDelegate>



@property (readonly, nonatomic) NSMutableSet *clients; // ivar: _clients
@property (readonly, nonatomic) SCLSchoolModeManagerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSMapTable *coordinatorMap; // ivar: _coordinatorMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SCLInterruptBehaviorResolver *interruptBehaviorResolver; // ivar: _interruptBehaviorResolver
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;
@property (readonly, nonatomic) SCLSuppressSchoolModeAssertionManager *supppressionManager; // ivar: _supppressionManager
@property (readonly, nonatomic) SCLTransportService *transportService; // ivar: _transportService


-(BOOL)isEligibleDevice:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)activityCriteria;
-(id)descriptionBuilderForNRDevice:(id)arg0 ;
-(id)eligiblePairedDevices;
-(id)initWithConfiguration:(id)arg0 ;
-(struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)_handleActivityStarted:(id)arg0 ;
-(void)_updateActivityRegistration;
-(void)clientProxy:(id)arg0 didConnectWithPairingID:(id)arg1 ;
-(void)clientProxyDidInvalidate:(id)arg0 ;
-(void)createControllerForDevice:(id)arg0 ;
-(void)dealloc;
-(void)handleDevicePairedNotification:(id)arg0 ;
-(void)handleDeviceUnpairedNotification:(id)arg0 ;
-(void)loadPairedDevices;
-(void)removeCoordinator:(id)arg0 ;
-(void)start;


@end


#endif