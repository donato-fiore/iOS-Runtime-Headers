// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMACCOUNTCALDAVDECLARATION_H
#define CEMACCOUNTCALDAVDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMAccountCalDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadCalDAVAccountDescription; // ivar: _payloadCalDAVAccountDescription
@property (copy, nonatomic) NSString *payloadCalDAVCredentials; // ivar: _payloadCalDAVCredentials
@property (copy, nonatomic) NSString *payloadCalDAVHostName; // ivar: _payloadCalDAVHostName
@property (copy, nonatomic) NSNumber *payloadCalDAVPort; // ivar: _payloadCalDAVPort
@property (copy, nonatomic) NSString *payloadCalDAVPrincipalURL; // ivar: _payloadCalDAVPrincipalURL
@property (copy, nonatomic) NSNumber *payloadCalDAVUseSSL; // ivar: _payloadCalDAVUseSSL
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withCalDAVHostName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withCalDAVAccountDescription:(id)arg1 withCalDAVHostName:(id)arg2 withCalDAVPrincipalURL:(id)arg3 withCalDAVUseSSL:(id)arg4 withCalDAVPort:(id)arg5 withCalDAVCredentials:(id)arg6 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif