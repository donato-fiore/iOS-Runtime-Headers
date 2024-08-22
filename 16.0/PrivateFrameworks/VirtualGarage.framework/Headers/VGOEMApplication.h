// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGOEMAPPLICATION_H
#define VGOEMAPPLICATION_H

@class INCExtensionConnection, NSArray, LSApplicationRecord, NSString;
@protocol INIntentResponseObserver, VGOEMApplication, OS_dispatch_queue, VGOEMAppSOCStreaming;

#import <Foundation/Foundation.h>


@interface VGOEMApplication : NSObject <INIntentResponseObserver, VGOEMApplication>

 {
    NSObject<OS_dispatch_queue> *_queue;
    INCExtensionConnection *_chargeStreamingConnection;
}


@property (retain, nonatomic) NSArray *allowedFormulaIDs; // ivar: _allowedFormulaIDs
@property (readonly, nonatomic) LSApplicationRecord *applicationRecord; // ivar: _applicationRecord
@property (weak, nonatomic) NSObject<VGOEMAppSOCStreaming> *chargeStreamingDelegate; // ivar: _chargeStreamingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)_isValidConsumptionModelForResponse:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_VGChargingConnectorTypeOptionFromINCarChargingConnectorType:(id)arg0 ;
-(NSUInteger)_VGChargingConnectorTypeOptionsFromINCarChargingConnectorTypes:(id)arg0 ;
-(id)_connectionWithIntent:(id)arg0 ;
-(id)_powerByConnectorDictionaryFromCar:(id)arg0 ;
-(id)_vehicleStateFromResponse:(id)arg0 error:(*id)arg1 ;
-(id)_vehiclesFromListCarsIntentResponse:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 applicationRecord:(id)arg1 ;
-(void)_createChargeStreamingConnectionIfNeededForVehicle:(id)arg0 ;
-(void)getStateOfChargeForVehicle:(id)arg0 completion:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg0 withSerializedCacheItems:(id)arg1 ;
-(void)listCarsWithCompletion:(id)arg0 ;
-(void)startSendingChargeUpdatesForVehicle:(id)arg0 ;
-(void)stopSendingChargeUpdatesForVehicle:(id)arg0 ;


@end


#endif