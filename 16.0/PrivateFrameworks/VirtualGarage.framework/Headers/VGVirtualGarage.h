// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGVIRTUALGARAGE_H
#define VGVIRTUALGARAGE_H

@class NSMutableArray, NSString, NSArray;
@protocol NSCopying, VGDataCoordinatorDelegate, VGVirtualGaragePersistingDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions, NSSecureCoding, VGVirtualGaragePersisting, VGVirtualGarageDelegate;

#import <Foundation/Foundation.h>

#import "VGDataCoordinator.h"
#import "VGVehicle.h"

@interface VGVirtualGarage : NSObject <NSCopying, VGDataCoordinatorDelegate, VGVirtualGaragePersistingDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions, NSSecureCoding>

 {
    NSMutableArray *_vehicles;
    NSString *_selectedVehicleIdentifier;
    BOOL _isDataCoordinatorRunning;
    VGDataCoordinator *_dataCoordinator;
    id<VGVirtualGaragePersisting> *_persister;
    BOOL _finishedLoadingVehicles;
    NSMutableArray *_queuedGetGarageCompletionHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VGVirtualGarageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VGVehicle *selectedVehicle;
@property (nonatomic) BOOL shouldAssumeFullCharge; // ivar: _shouldAssumeFullCharge
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *vehicles;


+(BOOL)supportsSecureCoding;
-(BOOL)_persisterHasStaleStateForVehicle:(id)arg0 ;
-(id)_garageCopy;
-(id)_vehicleWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGaragePersister:(id)arg0 ;
-(void)_addVehicle:(id)arg0 ;
-(void)_endContinuousUpdates;
-(void)_executeQueuedCompletionHandlersIfNeeded;
-(void)_forceUpdateWithVehicles:(id)arg0 ;
-(void)_notifyObserversGarageDidUpdateVehicles;
-(void)_onboardVehicle:(id)arg0 ;
-(void)_removeVehicleWithIdentifier:(id)arg0 ;
-(void)_removeVehiclesWithUninstalledAppsIfNeeded;
-(void)_saveVehicle:(id)arg0 syncAcrossDevices:(BOOL)arg1 ;
-(void)_selectVehicleWithIdentifier:(id)arg0 ;
-(void)_setDataCoordintorRunning:(BOOL)arg0 ;
-(void)_startContinuousUpdatesIfNeeded;
-(void)_unpairVehicle:(id)arg0 ;
-(void)_updateDataCoordinatorAvailability;
-(void)dataCoordinator:(id)arg0 didUpdateUnpairedVehicles:(id)arg1 ;
-(void)dataCoordinator:(id)arg0 wantsToUpdateVehicle:(id)arg1 syncAcrossDevices:(BOOL)arg2 ;
-(void)dataCoordinatorDidUpdateInstalledApps:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)garagePersister:(id)arg0 wantsToUpdateVehicles:(id)arg1 ;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;
-(void)virtualGarageAddVehicle:(id)arg0 ;
-(void)virtualGarageEndContinuousUpdates;
-(void)virtualGarageGetGarageWithReply:(id)arg0 ;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg0 syncAcrossDevices:(BOOL)arg1 withReply:(id)arg2 ;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id)arg0 ;
-(void)virtualGarageOnboardVehicle:(id)arg0 ;
-(void)virtualGarageRemoveVehicle:(id)arg0 ;
-(void)virtualGarageSaveVehicle:(id)arg0 ;
-(void)virtualGarageSelectVehicle:(id)arg0 ;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg0 ;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;


@end


#endif