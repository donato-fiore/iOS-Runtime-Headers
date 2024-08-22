// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEWALLETKEYSECUREELEMENTINFO_H
#define HMDHOMEWALLETKEYSECUREELEMENTINFO_H

@class HMFObject, NSString, NSData;



@interface HMDHomeWalletKeySecureElementInfo : HMFObject

@property (readonly, copy) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy) NSData *deviceCredentialKey; // ivar: _deviceCredentialKey
@property (readonly, copy) NSString *pairedReaderIdentifier; // ivar: _pairedReaderIdentifier
@property (readonly, copy) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier
@property (readonly, copy) NSString *subCredentialIdentifier; // ivar: _subCredentialIdentifier


+(id)createForEasyProvisioning;
+(id)createForExpressConflictCheckWithSecureElementIdentifier:(id)arg0 ;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDeviceCredentialKey:(id)arg0 applicationIdentifier:(id)arg1 subCredentialIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 pairedReaderIdentifier:(id)arg4 ;
-(id)initWithPKPass:(id)arg0 ;
-(id)privateDescription;
-(id)shortDescription;


@end


#endif