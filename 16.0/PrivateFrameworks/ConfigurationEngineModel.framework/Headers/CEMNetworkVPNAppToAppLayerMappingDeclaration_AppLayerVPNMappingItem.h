// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKVPNAPPTOAPPLAYERMAPPINGDECLARATION_APPLAYERVPNMAPPINGITEM_H
#define CEMNETWORKVPNAPPTOAPPLAYERMAPPINGDECLARATION_APPLAYERVPNMAPPINGITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadDesignatedRequirement; // ivar: _payloadDesignatedRequirement
@property (copy, nonatomic) NSString *payloadIdentifier; // ivar: _payloadIdentifier
@property (copy, nonatomic) NSString *payloadSigningIdentifier; // ivar: _payloadSigningIdentifier
@property (copy, nonatomic) NSString *payloadVPNUUID; // ivar: _payloadVPNUUID


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withVPNUUID:(id)arg1 withDesignatedRequirement:(id)arg2 withSigningIdentifier:(id)arg3 ;
+(id)buildWithIdentifier:(id)arg0 withVPNUUID:(id)arg1 withDesignatedRequirement:(id)arg2 withSigningIdentifier:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif