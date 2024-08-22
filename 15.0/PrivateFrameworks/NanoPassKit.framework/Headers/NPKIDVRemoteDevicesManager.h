// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKIDVREMOTEDEVICESMANAGER_H
#define NPKIDVREMOTEDEVICESMANAGER_H

@class NSString;
@protocol NPKIDVRemoteDeviceConnectionCoordinatorObserver, NPKBiometricPassPreflightManagerDataSource, NPKIDVRemoteDevicesManagerDataSource;

#import <Foundation/Foundation.h>

#import "NPKIDVRemoteDeviceServiceEventsCoordinator.h"
#import "NPKIDVRemoteDeviceSessionService.h"
#import "NPKIDVRemoteDeviceConnectionCoordinator.h"
#import "NPKBiometricPassPreflightManager.h"

@interface NPKIDVRemoteDevicesManager : NSObject <NPKIDVRemoteDeviceConnectionCoordinatorObserver, NPKBiometricPassPreflightManagerDataSource>

 {
    NPKIDVRemoteDeviceServiceEventsCoordinator *_eventsCoordinator;
    NPKIDVRemoteDeviceSessionService *_remoteDeviceService;
    NPKIDVRemoteDeviceConnectionCoordinator *_connectionCoordinator;
    NPKBiometricPassPreflightManager *_preflightManager;
}


@property (readonly, weak, nonatomic) NSObject<NPKIDVRemoteDevicesManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 ;
-(void)_handleDeviceDidUnpair:(id)arg0 ;
-(void)_registerForDeviceEvents;
-(void)biometricPassPreflightManager:(id)arg0 provisionedCredentialCountsForType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)deviceDidBecomeActive:(id)arg0 ;
-(void)deviceDidBecomeInactive;
-(void)remoteDeviceConnectionCoordinator:(id)arg0 didReceivePrearmStatusUpdate:(NSInteger)arg1 ;


@end


#endif