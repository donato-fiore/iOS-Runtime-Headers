// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSREGISTEREDDEVICE_H
#define IDSREGISTEREDDEVICE_H

@class NSArray, NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSRegisteredDevice : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *URIs; // ivar: _URIs
@property (readonly, nonatomic) NSString *hardwareVersion; // ivar: _hardwareVersion
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSData *publicDeviceIdentity; // ivar: _publicDeviceIdentity
@property (readonly, nonatomic) NSData *pushToken; // ivar: _pushToken


+(BOOL)supportsSecureCoding;
+(id)registeredDeviceFromDependentRegistrationDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRegisteredDevice:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 hardwareVersion:(id)arg1 pushToken:(id)arg2 URIs:(id)arg3 publicDeviceIdentity:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif