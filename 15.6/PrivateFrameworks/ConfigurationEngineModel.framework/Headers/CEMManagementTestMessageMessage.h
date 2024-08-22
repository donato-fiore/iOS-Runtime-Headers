// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMMANAGEMENTTESTMESSAGEMESSAGE_H
#define CEMMANAGEMENTTESTMESSAGEMESSAGE_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMMessageBase.h"

@interface CEMManagementTestMessageMessage : CEMMessageBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadEcho; // ivar: _payloadEcho
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithEcho:(id)arg0 ;
+(id)buildWithEcho:(id)arg0 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif