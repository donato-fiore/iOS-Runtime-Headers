// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUPOWERSOURCE_H
#define CUPOWERSOURCE_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CUPowerSource.h"

@interface CUPowerSource : NSObject <NSSecureCoding>

 {
    *OpaqueIOPSPowerSourceID _psID;
}


@property (copy, nonatomic) NSArray *LEDs; // ivar: _LEDs
@property (copy, nonatomic) NSString *accessoryCategory; // ivar: _accessoryCategory
@property (copy, nonatomic) NSString *accessoryID; // ivar: _accessoryID
@property (nonatomic) NSInteger adapterErrorFlags; // ivar: _adapterErrorFlags
@property (nonatomic) NSInteger adapterFamilyCode; // ivar: _adapterFamilyCode
@property (copy, nonatomic) NSString *adapterName; // ivar: _adapterName
@property (nonatomic) BOOL adapterSharedSource; // ivar: _adapterSharedSource
@property (nonatomic) NSInteger adapterSourceID; // ivar: _adapterSourceID
@property (nonatomic) BOOL aggregate; // ivar: _aggregate
@property (nonatomic) CGFloat chargeLevel; // ivar: _chargeLevel
@property (nonatomic) BOOL charging; // ivar: _charging
@property (nonatomic) unsigned int expectedComponents; // ivar: _expectedComponents
@property (nonatomic) NSInteger familyCode; // ivar: _familyCode
@property (copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription; // ivar: _ioKitAdapterDescription
@property (copy, nonatomic) NSDictionary *ioKitDescription; // ivar: _ioKitDescription
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
@property (retain, nonatomic) CUPowerSource *subCase; // ivar: _subCase
@property (retain, nonatomic) CUPowerSource *subLeft; // ivar: _subLeft
@property (retain, nonatomic) CUPowerSource *subMain; // ivar: _subMain
@property (retain, nonatomic) CUPowerSource *subRight; // ivar: _subRight
@property (nonatomic) NSInteger temperature; // ivar: _temperature
@property (copy, nonatomic) NSString *transportType; // ivar: _transportType
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) NSInteger vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
-(BOOL)hasAllComponents;
-(BOOL)isAggregateComponent;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)detailedDescription;
-(id)initWithCoder:(id)arg0 ;
-(int)publish;
-(unsigned int)updateWithPowerAdapterDetails:(id)arg0 ;
-(unsigned int)updateWithPowerSourceDescription:(id)arg0 ;
-(void)_updateWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleSubComponentsUpdated;
-(void)handleSubComponentsUpdatedWithBaseSource:(id)arg0 ;
-(void)invalidate;
-(void)updateWithPowerSource:(id)arg0 ;


@end


#endif