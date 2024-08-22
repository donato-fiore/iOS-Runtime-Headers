// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELACCOUNTMAILDECLARATION_OUTGOINGSERVER_H
#define RMMODELACCOUNTMAILDECLARATION_OUTGOINGSERVER_H

@class NSString, NSNumber;


#import "RMModelPayloadBase.h"

@interface RMModelAccountMailDeclaration_OutgoingServer : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // ivar: _payloadAuthenticationCredentialsAssetReference
@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // ivar: _payloadAuthenticationMethod
@property (copy, nonatomic) NSString *payloadHostName; // ivar: _payloadHostName
@property (copy, nonatomic) NSNumber *payloadPort; // ivar: _payloadPort


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithHostName:(id)arg0 authenticationMethod:(id)arg1 ;
+(id)buildWithHostName:(id)arg0 port:(id)arg1 authenticationMethod:(id)arg2 authenticationCredentialsAssetReference:(id)arg3 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif