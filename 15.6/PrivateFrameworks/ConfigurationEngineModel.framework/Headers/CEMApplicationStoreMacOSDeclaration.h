// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMAPPLICATIONSTOREMACOSDECLARATION_H
#define CEMAPPLICATIONSTOREMACOSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMApplicationStoreMacOSDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadDisableSoftwareUpdateNotifications; // ivar: _payloadDisableSoftwareUpdateNotifications
@property (copy, nonatomic) NSNumber *payloadRestrictStoreDisableAppAdoption; // ivar: _payloadRestrictStoreDisableAppAdoption
@property (copy, nonatomic) NSNumber *payloadRestrictStoreMdmInstallSoftwareupdateOnly; // ivar: _payloadRestrictStoreMdmInstallSoftwareupdateOnly
@property (copy, nonatomic) NSNumber *payloadRestrictStoreRequireAdminToInstall; // ivar: _payloadRestrictStoreRequireAdminToInstall
@property (copy, nonatomic) NSNumber *payloadRestrictStoreSoftwareupdateOnly; // ivar: _payloadRestrictStoreSoftwareupdateOnly
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withRestrictStoreRequireAdminToInstall:(id)arg1 withRestrictStoreSoftwareupdateOnly:(id)arg2 withRestrictStoreDisableAppAdoption:(id)arg3 withDisableSoftwareUpdateNotifications:(id)arg4 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg5 ;
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