// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVEHICLE_H
#define MSVEHICLE_H

@class TtC8MapsSync14MapsSyncObject, NSString, NSData, NSDate, NSNumber;



@interface MSVehicle : TtC8MapsSync14MapsSyncObject {
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
    ? _positionIndex;
    ? _powerByConnector;
    ? _siriIntentsIdentifier;
    ? _supportedConnectors;
    ? _vehicleIdentifier;
    ? _vehicleType;
    ? _year;
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
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSData *powerByConnector;
@property (nonatomic, copy) NSString *siriIntentsIdentifier;
@property (nonatomic, retain) NSNumber *supportedConnectors;
@property (nonatomic, copy) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSNumber *vehicleType;
@property (nonatomic, retain) NSNumber *year;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 colorHex:(id)arg1 currentVehicleState:(id)arg2 dateOfVehicleIngestion:(id)arg3 displayName:(id)arg4 headUnitBluetoothIdentifier:(id)arg5 headUnitMacAddress:(id)arg6 iapIdentifier:(id)arg7 lastStateUpdateDate:(id)arg8 licensePlate:(id)arg9 lprPowerType:(id)arg10 lprVehicleType:(id)arg11 manufacturer:(id)arg12 model:(id)arg13 pairedAppIdentifier:(id)arg14 positionIndex:(NSInteger)arg15 powerByConnector:(id)arg16 siriIntentsIdentifier:(id)arg17 supportedConnectors:(id)arg18 vehicleIdentifier:(id)arg19 vehicleType:(id)arg20 year:(id)arg21 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif