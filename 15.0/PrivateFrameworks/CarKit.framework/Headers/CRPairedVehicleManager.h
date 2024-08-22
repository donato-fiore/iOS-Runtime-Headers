// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRPAIREDVEHICLEMANAGER_H
#define CRPAIREDVEHICLEMANAGER_H


#import <Foundation/Foundation.h>

#import "CRCarKitServiceClient.h"

@interface CRPairedVehicleManager : NSObject

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient; // ivar: _serviceClient


-(BOOL)removeVehicle:(id)arg0 ;
-(id)_firstVehicleMatchingTest:(id)arg0 ;
-(id)allVehicles;
-(id)init;
-(id)pairedVehicles;
-(id)saveVehicle:(id)arg0 ;
-(id)vehicleForBluetoothAddress:(id)arg0 ;
-(id)vehicleForCertificateSerial:(id)arg0 ;
-(id)vehicleNameForWiFiUUID:(id)arg0 ;
-(void)fetchAllVehiclesWithCompletion:(id)arg0 ;
-(void)fetchPairedVehiclesWithCompletion:(id)arg0 ;
-(void)removeVehicle:(id)arg0 completion:(id)arg1 ;
-(void)saveVehicle:(id)arg0 completion:(id)arg1 ;
-(void)syncFetchAllVehiclesWithCompletion:(id)arg0 ;


@end


#endif