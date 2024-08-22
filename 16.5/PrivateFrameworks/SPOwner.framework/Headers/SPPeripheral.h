// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPPERIPHERAL_H
#define SPPERIPHERAL_H

@class NSArray, NSUUID, NSDictionary, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPPeripheral : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *allowedSessions; // ivar: _allowedSessions
@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly, copy, nonatomic) NSUUID *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *keyAddressPairs;
@property (copy, nonatomic) NSData *lastConnectedLEMAC; // ivar: _lastConnectedLEMAC
@property (copy, nonatomic) NSDictionary *longTermKeyMap; // ivar: _longTermKeyMap
@property (copy, nonatomic) NSDictionary *ltkIndexMap; // ivar: _ltkIndexMap
@property (nonatomic) BOOL managedByFindMy; // ivar: _managedByFindMy
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned char partIdentifier; // ivar: _partIdentifier
@property (nonatomic) NSUInteger primaryIndex; // ivar: _primaryIndex
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSUUID *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionForLEMAC:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserIdentifier:(id)arg0 beaconIdentifier:(id)arg1 groupIdentifier:(id)arg2 name:(id)arg3 partIdentifier:(unsigned char)arg4 serialNumber:(id)arg5 managedByFindMy:(BOOL)arg6 primaryIndex:(NSUInteger)arg7 ltkIndexMap:(id)arg8 lastConnectedLEMAC:(id)arg9 allowedSessions:(id)arg10 keyAddressPairs:(id)arg11 ;
-(id)initWithUserIdentifier:(id)arg0 beaconIdentifier:(id)arg1 groupIdentifier:(id)arg2 name:(id)arg3 partIdentifier:(unsigned char)arg4 serialNumber:(id)arg5 managedByFindMy:(BOOL)arg6 primaryIndex:(NSUInteger)arg7 ltkIndexMap:(id)arg8 lastConnectedLEMAC:(id)arg9 allowedSessions:(id)arg10 longTermKeyMap:(id)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif