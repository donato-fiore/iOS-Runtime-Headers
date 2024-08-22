// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMNETWORKVPNDECLARATION_PPP_H
#define CEMNETWORKVPNDECLARATION_PPP_H

@class NSArray, NSString, NSNumber;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_PPP : CEMPayloadBase

@property (copy, nonatomic) NSArray *payloadAuthEAPPlugins; // ivar: _payloadAuthEAPPlugins
@property (copy, nonatomic) NSString *payloadAuthName; // ivar: _payloadAuthName
@property (copy, nonatomic) NSString *payloadAuthPassword; // ivar: _payloadAuthPassword
@property (copy, nonatomic) NSArray *payloadAuthProtocol; // ivar: _payloadAuthProtocol
@property (copy, nonatomic) NSNumber *payloadCCPEnabled; // ivar: _payloadCCPEnabled
@property (copy, nonatomic) NSNumber *payloadCCPMPPE128Enabled; // ivar: _payloadCCPMPPE128Enabled
@property (copy, nonatomic) NSNumber *payloadCCPMPPE40Enabled; // ivar: _payloadCCPMPPE40Enabled
@property (copy, nonatomic) NSString *payloadCommRemoteAddress; // ivar: _payloadCommRemoteAddress
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle; // ivar: _payloadDisconnectOnIdle
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer; // ivar: _payloadDisconnectOnIdleTimer
@property (copy, nonatomic) NSNumber *payloadTokenCard; // ivar: _payloadTokenCard


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAuthName:(id)arg0 withAuthPassword:(id)arg1 withTokenCard:(id)arg2 withCommRemoteAddress:(id)arg3 withAuthEAPPlugins:(id)arg4 withAuthProtocol:(id)arg5 withCCPMPPE40Enabled:(id)arg6 withCCPMPPE128Enabled:(id)arg7 withCCPEnabled:(id)arg8 withDisconnectOnIdle:(id)arg9 withDisconnectOnIdleTimer:(id)arg10 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif