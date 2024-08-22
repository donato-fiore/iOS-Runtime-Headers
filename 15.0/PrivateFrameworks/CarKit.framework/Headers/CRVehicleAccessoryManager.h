// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRVEHICLEACCESSORYMANAGER_H
#define CRVEHICLEACCESSORYMANAGER_H

@class EAAccessoryManager, NSMutableDictionary;
@protocol CRVehicleAccessoryManagerDelegate;

#import <Foundation/Foundation.h>

#import "CARObserverHashTable.h"

@interface CRVehicleAccessoryManager : NSObject

@property (retain, nonatomic) EAAccessoryManager *accessoryManager; // ivar: _accessoryManager
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (weak, nonatomic) NSObject<CRVehicleAccessoryManagerDelegate> *vehicleAccessoryDelegate; // ivar: _vehicleAccessoryDelegate
@property (retain, nonatomic) NSMutableDictionary *vehiclesBySerialNumber; // ivar: _vehiclesBySerialNumber


+(BOOL)_isValidAccessoryMacAddress:(id)arg0 ;
+(BOOL)_isVehicleAccessory:(id)arg0 ;
+(id)_certificateSerialNumberForAccessory:(id)arg0 ;
+(id)managerInfoDataCache;
+(id)sharedInstance;
+(id)vehicleAccessQueue;
-(id)_vehicleForAccessory:(id)arg0 ;
-(id)_vehicleInfoDataForAccessory:(id)arg0 ;
-(id)connectedAccessories;
-(id)connectedVehicleAccessories;
-(id)init;
-(id)vehicleAccessoryForCertificateSerial:(id)arg0 ;
-(id)vehicleAccessoryForiAPConnectionIdentifier:(NSUInteger)arg0 ;
-(void)_primeConnectedVehicleAccessories;
-(void)_updateVehicle:(id)arg0 usingAccessory:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)handleAccessoryConnect:(id)arg0 ;
-(void)handleAccessoryDisconnect:(id)arg0 ;
-(void)handleAccessoryInformationUpdate:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif