// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPOWERSOURCE_H
#define SFPOWERSOURCE_H

@class NSArray, NSString, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFPowerSource : NSObject <NSSecureCoding>

 {
    *OpaqueIOPSPowerSourceID _psID;
    int _lowPowerMonitoringToken;
}


@property (copy, nonatomic) NSArray *LEDs; // ivar: _LEDs
@property (copy, nonatomic) NSString *accessoryCategory; // ivar: _accessoryCategory
@property (copy, nonatomic) NSString *accessoryID; // ivar: _accessoryID
@property (nonatomic) NSInteger adapterErrorFlags; // ivar: _adapterErrorFlags
@property (nonatomic) NSInteger adapterFamilyCode; // ivar: _adapterFamilyCode
@property (copy, nonatomic) NSString *adapterName; // ivar: _adapterName
@property (nonatomic) BOOL adapterSharedSource; // ivar: _adapterSharedSource
@property (nonatomic) NSInteger adapterSourceID; // ivar: _adapterSourceID
@property (nonatomic) BOOL added; // ivar: _added
@property (copy, nonatomic) NSData *batteryCaseAddress; // ivar: _batteryCaseAddress
@property (nonatomic) unsigned int changes; // ivar: _changes
@property (nonatomic) CGFloat chargeLevel; // ivar: _chargeLevel
@property (nonatomic) BOOL charging; // ivar: _charging
@property (nonatomic) NSInteger color; // ivar: _color
@property (nonatomic) NSInteger familyCode; // ivar: _familyCode
@property (copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription; // ivar: _ioKitAdapterDescription
@property (copy, nonatomic) NSDictionary *ioKitDescription; // ivar: _ioKitDescription
@property (readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (nonatomic) CGFloat lowWarnLevel; // ivar: _lowWarnLevel
@property (readonly, nonatomic) NSInteger matID;
@property (nonatomic) CGFloat maxCapacity; // ivar: _maxCapacity
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *partID; // ivar: _partID
@property (copy, nonatomic) NSString *partName; // ivar: _partName
@property (nonatomic) int powerState; // ivar: _powerState
@property (nonatomic) BOOL present; // ivar: _present
@property (nonatomic) NSInteger productID; // ivar: _productID
@property (nonatomic) int role; // ivar: _role
@property (nonatomic) BOOL showChargingUI; // ivar: _showChargingUI
@property (nonatomic) NSInteger sourceID; // ivar: _sourceID
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (nonatomic) NSInteger temperature; // ivar: _temperature
@property (copy, nonatomic) NSString *transportType; // ivar: _transportType
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) NSInteger vendorID; // ivar: _vendorID
@property (readonly, nonatomic) BOOL wirelessCharging;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)detailedDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)publish;
-(unsigned int)updateWithPowerAdapterDetails:(id)arg0 ;
-(unsigned int)updateWithPowerSourceDescription:(id)arg0 ;
-(void)_updateWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)lowPowerModeChanged:(int)arg0 ;
-(void)startLowPowerMonitoringIfAppropriate;
-(void)updateWithPowerSource:(id)arg0 ;


@end


#endif