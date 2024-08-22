// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMAPPLICATIONCONTROLDECLARATION_H
#define CEMAPPLICATIONCONTROLDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMApplicationControlDeclaration_InstallSchedule.h"
#import "CEMApplicationControlDeclaration_UpdateSchedule.h"

@interface CEMApplicationControlDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMApplicationControlDeclaration_InstallSchedule *payloadInstallSchedule; // ivar: _payloadInstallSchedule
@property (copy, nonatomic) NSString *payloadUpdatePolicy; // ivar: _payloadUpdatePolicy
@property (copy, nonatomic) CEMApplicationControlDeclaration_UpdateSchedule *payloadUpdateSchedule; // ivar: _payloadUpdateSchedule
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withInstallSchedule:(id)arg1 withUpdatePolicy:(id)arg2 withUpdateSchedule:(id)arg3 ;
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