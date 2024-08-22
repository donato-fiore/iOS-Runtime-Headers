// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMAPPLICATIONSETTINGSMANAGEDDECLARATION_H
#define CEMAPPLICATIONSETTINGSMANAGEDDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowManagedAppsCloudSync; // ivar: _payloadAllowManagedAppsCloudSync
@property (copy, nonatomic) NSNumber *payloadAllowManagedToWriteUnmanagedContacts; // ivar: _payloadAllowManagedToWriteUnmanagedContacts
@property (copy, nonatomic) NSNumber *payloadAllowOpenFromManagedToUnmanaged; // ivar: _payloadAllowOpenFromManagedToUnmanaged
@property (copy, nonatomic) NSNumber *payloadAllowOpenFromUnmanagedToManaged; // ivar: _payloadAllowOpenFromUnmanagedToManaged
@property (copy, nonatomic) NSNumber *payloadAllowUnmanagedToReadManagedContacts; // ivar: _payloadAllowUnmanagedToReadManagedContacts
@property (copy, nonatomic) NSNumber *payloadForceAirDropUnmanaged; // ivar: _payloadForceAirDropUnmanaged
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withAllowOpenFromManagedToUnmanaged:(id)arg1 withAllowOpenFromUnmanagedToManaged:(id)arg2 withForceAirDropUnmanaged:(id)arg3 withAllowManagedAppsCloudSync:(id)arg4 withAllowManagedToWriteUnmanagedContacts:(id)arg5 withAllowUnmanagedToReadManagedContacts:(id)arg6 ;
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