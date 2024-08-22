// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPPAIRINGIDENTITY_H
#define HAPPAIRINGIDENTITY_H

@class HMFPairingIdentity, NSString;



@interface HAPPairingIdentity : HMFPairingIdentity

@property (readonly, copy, nonatomic) NSString *controllerKeyIdentifier; // ivar: _controllerKeyIdentifier
@property (readonly, nonatomic) NSUInteger permissions; // ivar: _permissions


+(BOOL)supportsSecureCoding;
-(BOOL)isStrictlyEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 controllerKeyIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(NSUInteger)arg4 ;
-(id)initWithIdentifier:(id)arg0 publicKey:(id)arg1 privateKey:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 publicKey:(id)arg1 privateKey:(id)arg2 permissions:(NSUInteger)arg3 ;
-(id)initWithKeychainItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif