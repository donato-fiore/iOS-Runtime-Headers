// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMMEDIASETTINGSDECLARATION_H
#define CEMMEDIASETTINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMMediaSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowBookstore; // ivar: _payloadAllowBookstore
@property (copy, nonatomic) NSNumber *payloadAllowBookstoreErotica; // ivar: _payloadAllowBookstoreErotica
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookBackup; // ivar: _payloadAllowEnterpriseBookBackup
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookMetadataSync; // ivar: _payloadAllowEnterpriseBookMetadataSync
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowBookstore:(id)arg1 withAllowBookstoreErotica:(id)arg2 withAllowEnterpriseBookBackup:(id)arg3 withAllowEnterpriseBookMetadataSync:(id)arg4 ;
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