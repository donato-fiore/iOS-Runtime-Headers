// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC15MAPSSYNCVEHICLE_H
#define _TTC8MAPSSYNC15MAPSSYNCVEHICLE_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString, NSData, NSDate, NSNumber;



@interface _TtC8MapsSync15MapsSyncVehicle : TtC8MapsSync16MapsSyncBaseItem {
    ? _colorHex;
    ? _currentVehicleState;
    ? _dateOfVehicleIngestion;
    ? _displayName;
    ? _headUnitBluetoothIdentifier;
    ? _headUnitMacAddress;
    ? _iapIdentifier;
    ? _lastStateUpdateDate;
    ? _licensePlate;
    ? _lprPowerType;
    ? _lprVehicleType;
    ? _manufacturer;
    ? _model;
    ? _pairedAppIdentifier;
    ? _powerByConnector;
    ? _siriIntentsIdentifier;
    ? _supportedConnectors;
    ? _vehicleIdentifier;
    ? _vehicleType;
    ? _year;
}


@property (nonatomic, readonly) NSString *colorHex;
@property (nonatomic, readonly) NSData *currentVehicleState;
@property (nonatomic, readonly) NSDate *dateOfVehicleIngestion;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, readonly) NSString *headUnitMacAddress;
@property (nonatomic, readonly) NSString *iapIdentifier;
@property (nonatomic, readonly) NSDate *lastStateUpdateDate;
@property (nonatomic, readonly) NSString *licensePlate;
@property (nonatomic, readonly) NSString *lprPowerType;
@property (nonatomic, readonly) NSString *lprVehicleType;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *pairedAppIdentifier;
@property (nonatomic, readonly) NSData *powerByConnector;
@property (nonatomic, readonly) NSString *siriIntentsIdentifier;
@property (nonatomic, readonly) NSNumber *supportedConnectors;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, readonly) NSNumber *vehicleType;
@property (nonatomic, readonly) NSNumber *year;


+(void)fetch:(NSInteger)arg0 sort:(NSInteger)arg3 ascending:(BOOL)arg4 completion:(id)arg5 ;
+(void)fetchForIdentifier:(id)arg0 completion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif