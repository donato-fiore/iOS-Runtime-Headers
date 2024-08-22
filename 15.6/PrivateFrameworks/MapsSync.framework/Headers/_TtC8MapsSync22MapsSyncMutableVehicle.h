// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC22MAPSSYNCMUTABLEVEHICLE_H
#define _TTC8MAPSSYNC22MAPSSYNCMUTABLEVEHICLE_H

@class TtC8MapsSync23MapsSyncMutableBaseItem, NSString, NSData, NSDate, NSNumber;



@interface _TtC8MapsSync22MapsSyncMutableVehicle : TtC8MapsSync23MapsSyncMutableBaseItem {
    ? _proxy;
}


@property (nonatomic, copy) NSString *colorHex;
@property (nonatomic, copy) NSData *currentVehicleState;
@property (nonatomic, copy) NSDate *dateOfVehicleIngestion;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, copy) NSString *headUnitMacAddress;
@property (nonatomic, copy) NSString *iapIdentifier;
@property (nonatomic, copy) NSDate *lastStateUpdateDate;
@property (nonatomic, copy) NSString *licensePlate;
@property (nonatomic, copy) NSString *lprPowerType;
@property (nonatomic, copy) NSString *lprVehicleType;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *pairedAppIdentifier;
@property (nonatomic, copy) NSData *powerByConnector;
@property (nonatomic, copy) NSString *siriIntentsIdentifier;
@property (nonatomic, retain) NSNumber *supportedConnectors;
@property (nonatomic, copy) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSNumber *vehicleType;
@property (nonatomic, retain) NSNumber *year;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif