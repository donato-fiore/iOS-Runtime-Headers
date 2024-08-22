// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFWOWLANINFO_H
#define HMFWOWLANINFO_H

@class HMFObject, NSArray, NSData, NSString;
@protocol NSSecureCoding;



@interface HMFWoWLANInfo : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *additionalMACAddresses; // ivar: _additionalMACAddresses
@property (readonly, nonatomic) NSData *primaryMACAddress; // ivar: _primaryMACAddress
@property (readonly, nonatomic) BOOL supportsSleepConfig; // ivar: _supportsSleepConfig
@property (readonly, nonatomic) unsigned char version; // ivar: _version
@property (retain, nonatomic) NSData *wakeAddress; // ivar: _wakeAddress
@property (readonly, nonatomic) NSString *wakeAddressString;
@property (readonly, nonatomic) NSInteger wakePacketType; // ivar: _wakePacketType
@property (retain, nonatomic) NSData *wakePattern; // ivar: _wakePattern
@property (readonly, nonatomic) unsigned short wakePort; // ivar: _wakePort
@property (readonly, nonatomic) NSInteger wakeType; // ivar: _wakeType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryIdentifier:(id)arg0 wifiIdentifiers:(id)arg1 ;
-(id)initWithWakeVersion:(unsigned char)arg0 wakePort:(unsigned short)arg1 wakeAddress:(id)arg2 wakeType:(NSInteger)arg3 wakePacketType:(NSInteger)arg4 wakePattern:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif