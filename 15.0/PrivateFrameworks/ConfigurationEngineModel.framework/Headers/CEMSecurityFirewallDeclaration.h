// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSECURITYFIREWALLDECLARATION_H
#define CEMSECURITYFIREWALLDECLARATION_H

@class NSString, NSArray, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSecurityFirewallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *payloadApplications; // ivar: _payloadApplications
@property (copy, nonatomic) NSNumber *payloadBlockAllIncoming; // ivar: _payloadBlockAllIncoming
@property (copy, nonatomic) NSNumber *payloadEnableFirewall; // ivar: _payloadEnableFirewall
@property (copy, nonatomic) NSNumber *payloadEnableStealthMode; // ivar: _payloadEnableStealthMode
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withEnableFirewall:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withEnableFirewall:(id)arg1 withBlockAllIncoming:(id)arg2 withEnableStealthMode:(id)arg3 withApplications:(id)arg4 ;
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