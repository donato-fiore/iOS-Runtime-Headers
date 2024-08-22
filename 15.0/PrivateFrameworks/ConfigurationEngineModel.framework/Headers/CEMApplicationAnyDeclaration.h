// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMAPPLICATIONANYDECLARATION_H
#define CEMAPPLICATIONANYDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMAssetBase.h"
#import "CEMAssetBaseDescriptor.h"

@interface CEMApplicationAnyDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadBundleIdentifier; // ivar: _payloadBundleIdentifier
@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // ivar: _payloadDescriptor
@property (copy, nonatomic) NSString *payloadDesignatedRequirement; // ivar: _payloadDesignatedRequirement
@property (copy, nonatomic) NSString *payloadSigningIdentifier; // ivar: _payloadSigningIdentifier
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withBundleIdentifier:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withDescriptor:(id)arg1 withBundleIdentifier:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif