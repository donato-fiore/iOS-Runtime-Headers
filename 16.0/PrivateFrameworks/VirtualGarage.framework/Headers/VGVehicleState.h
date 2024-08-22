// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGVEHICLESTATE_H
#define VGVEHICLESTATE_H

@class NSNumber, NSString, NSMeasurement, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGVehicleState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger activeConnector; // ivar: _activeConnector
@property (readonly, nonatomic) NSNumber *batteryPercentage; // ivar: _batteryPercentage
@property (readonly, nonatomic) NSString *chargingArguments; // ivar: _chargingArguments
@property (readonly, nonatomic) NSString *consumptionArguments; // ivar: _consumptionArguments
@property (readonly, nonatomic) NSMeasurement *currentBatteryCapacity; // ivar: _currentBatteryCapacity
@property (readonly, nonatomic) NSMeasurement *currentEVRange; // ivar: _currentEVRange
@property (readonly, nonatomic) NSDate *dateOfUpdate; // ivar: _dateOfUpdate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCharging; // ivar: _isCharging
@property (readonly, nonatomic) NSMeasurement *maxBatteryCapacity; // ivar: _maxBatteryCapacity
@property (readonly, nonatomic) NSMeasurement *maxEVRange; // ivar: _maxEVRange
@property (readonly, nonatomic) NSMeasurement *minBatteryCapacity; // ivar: _minBatteryCapacity
@property (readonly, nonatomic) NSInteger origin; // ivar: _origin


+(BOOL)supportsSecureCoding;
+(id)_vehicleStateFromStorage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSignificantlyDifferentFromVehicleState:(id)arg0 ;
-(id)_storage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateOfUpdate:(id)arg1 origin:(NSInteger)arg2 batteryPercentage:(id)arg3 currentEVRange:(id)arg4 maxEVRange:(id)arg5 minBatteryCapacity:(id)arg6 currentBatteryCapacity:(id)arg7 maxBatteryCapacity:(id)arg8 consumptionArguments:(id)arg9 chargingArguments:(id)arg10 isCharging:(BOOL)arg11 activeConnector:(NSUInteger)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif