// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCBATTERYDEVICE_H
#define BCBATTERYDEVICE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCBatteryDevice : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger accessoryCategory; // ivar: _accessoryCategory
@property (copy, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (nonatomic) BOOL approximatesPercentCharge; // ivar: _approximatesPercentCharge
@property (nonatomic, getter=isCharging) BOOL charging; // ivar: _charging
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (nonatomic, getter=isFake) BOOL fake; // ivar: _fake
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isInternal) BOOL internal; // ivar: _internal
@property (nonatomic, getter=isLowBattery) BOOL lowBattery; // ivar: _lowBattery
@property (nonatomic, getter=isLowPowerModeActive) BOOL lowPowerModeActive; // ivar: _lowPowerModeActive
@property (readonly, copy, nonatomic) NSString *matchIdentifier; // ivar: _matchIdentifier
@property (copy, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger parts; // ivar: _parts
@property (nonatomic) NSInteger percentCharge; // ivar: _percentCharge
@property (nonatomic, getter=isPowerSource) BOOL powerSource; // ivar: _powerSource
@property (nonatomic) NSInteger powerSourceState; // ivar: _powerSourceState
@property (readonly, nonatomic) NSInteger productIdentifier; // ivar: _productIdentifier
@property (nonatomic) NSInteger transportType; // ivar: _transportType
@property (readonly, nonatomic) NSInteger vendor; // ivar: _vendor
@property (nonatomic, getter=isWirelesslyCharging) BOOL wirelesslyCharging; // ivar: _wirelesslyCharging


+(BOOL)supportsSecureCoding;
+(id)batteryDeviceWithIdentifier:(id)arg0 vendor:(NSInteger)arg1 productIdentifier:(NSInteger)arg2 parts:(NSUInteger)arg3 matchIdentifier:(id)arg4 ;
-(BOOL)isBatterySaverModeActive;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 vendor:(NSInteger)arg1 productIdentifier:(NSInteger)arg2 parts:(NSUInteger)arg3 matchIdentifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif