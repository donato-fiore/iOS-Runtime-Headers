// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKVPNDECLARATION_ALWAYSONSERVICEEXCEPTION_H
#define CEMNETWORKVPNDECLARATION_ALWAYSONSERVICEEXCEPTION_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAction; // ivar: _payloadAction
@property (copy, nonatomic) NSString *payloadServiceName; // ivar: _payloadServiceName


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithServiceName:(id)arg0 withAction:(id)arg1 ;
+(id)buildWithServiceName:(id)arg0 withAction:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif