// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLBEACONREGION_H
#define CLBEACONREGION_H

@class NSUUID, NSNumber;


#import "CLRegion.h"
#import "CLBeaconIdentityConstraint.h"

@interface CLBeaconRegion : CLRegion

@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) CLBeaconIdentityConstraint *beaconIdentityConstraint;
@property (readonly, nonatomic) int definitionMask; // ivar: _definitionMask
@property (readonly, copy, nonatomic) NSNumber *major; // ivar: _major
@property (readonly, copy, nonatomic) NSNumber *minor; // ivar: _minor
@property BOOL notifyEntryStateOnDisplay; // ivar: _notifyEntryStateOnDisplay
@property (readonly, copy, nonatomic) NSUUID *proximityUUID;


+(BOOL)supportsSecureCoding;
+(id)any;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(char)_measuredPowerForDevice;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBeaconIdentityConstraint:(id)arg0 identifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithProximityUUID:(id)arg0 identifier:(id)arg1 ;
-(id)initWithProximityUUID:(id)arg0 major:(unsigned short)arg1 identifier:(id)arg2 ;
-(id)initWithProximityUUID:(id)arg0 major:(unsigned short)arg1 minor:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithUUID:(id)arg0 identifier:(id)arg1 ;
-(id)initWithUUID:(id)arg0 major:(unsigned short)arg1 identifier:(id)arg2 ;
-(id)initWithUUID:(id)arg0 major:(unsigned short)arg1 minor:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithUUID:(id)arg0 major:(unsigned short)arg1 minor:(unsigned short)arg2 identifier:(id)arg3 notifyEntryStateOnDisplay:(BOOL)arg4 ;
-(id)peripheralDataWithMeasuredPower:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setGutsWithProximityUUID:(id)arg0 major:(id)arg1 minor:(id)arg2 notifyOnDisplay:(BOOL)arg3 ;


@end


#endif