// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMMEDIAINSTALLDECLARATION_H
#define CEMMEDIAINSTALLDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMMediaInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadInstallWhenActivated; // ivar: _payloadInstallWhenActivated
@property (copy, nonatomic) NSNumber *payloadMandatory; // ivar: _payloadMandatory
@property (copy, nonatomic) NSString *payloadMedia; // ivar: _payloadMedia
@property (copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated; // ivar: _payloadRemoveWhenDeactivated
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withMedia:(id)arg1 withMandatory:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withMedia:(id)arg1 withMandatory:(id)arg2 withInstallWhenActivated:(id)arg3 withRemoveWhenDeactivated:(id)arg4 ;
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