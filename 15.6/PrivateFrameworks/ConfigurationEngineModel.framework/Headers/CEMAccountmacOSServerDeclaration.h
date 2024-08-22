// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMACCOUNTMACOSSERVERDECLARATION_H
#define CEMACCOUNTMACOSSERVERDECLARATION_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMAccountmacOSServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadAccountDescription; // ivar: _payloadAccountDescription
@property (copy, nonatomic) NSArray *payloadConfiguredAccounts; // ivar: _payloadConfiguredAccounts
@property (copy, nonatomic) NSString *payloadCredentials; // ivar: _payloadCredentials
@property (copy, nonatomic) NSString *payloadHostName; // ivar: _payloadHostName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withHostName:(id)arg1 withConfiguredAccounts:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withHostName:(id)arg1 withAccountDescription:(id)arg2 withConfiguredAccounts:(id)arg3 withCredentials:(id)arg4 ;
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