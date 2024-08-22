// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMAPPLICATIONENTERPRISEDECLARATION_H
#define CEMAPPLICATIONENTERPRISEDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMAssetBase.h"
#import "CEMApplicationEnterpriseDeclaration_AppPackage.h"
#import "CEMAssetBaseDescriptor.h"

@interface CEMApplicationEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMApplicationEnterpriseDeclaration_AppPackage *payloadAppPackage; // ivar: _payloadAppPackage
@property (copy, nonatomic) NSString *payloadAppPackageHashMD5; // ivar: _payloadAppPackageHashMD5
@property (copy, nonatomic) NSString *payloadBundleIdentifier; // ivar: _payloadBundleIdentifier
@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // ivar: _payloadDescriptor
@property (copy, nonatomic) NSString *payloadDisplayImage; // ivar: _payloadDisplayImage
@property (copy, nonatomic) NSString *payloadDisplayImageHashMD5; // ivar: _payloadDisplayImageHashMD5
@property (copy, nonatomic) NSString *payloadFullSizeImage; // ivar: _payloadFullSizeImage
@property (copy, nonatomic) NSString *payloadFullSizeImageHashMD5; // ivar: _payloadFullSizeImageHashMD5
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withBundleIdentifier:(id)arg2 withAppPackage:(id)arg3 withAppPackageHashMD5:(id)arg4 ;
+(id)buildWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withBundleIdentifier:(id)arg2 withAppPackage:(id)arg3 withAppPackageHashMD5:(id)arg4 withDisplayImage:(id)arg5 withDisplayImageHashMD5:(id)arg6 withFullSizeImage:(id)arg7 withFullSizeImageHashMD5:(id)arg8 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif