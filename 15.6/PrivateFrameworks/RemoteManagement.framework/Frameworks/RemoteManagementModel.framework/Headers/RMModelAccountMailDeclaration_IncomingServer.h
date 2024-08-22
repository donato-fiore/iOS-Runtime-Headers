// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELACCOUNTMAILDECLARATION_INCOMINGSERVER_H
#define RMMODELACCOUNTMAILDECLARATION_INCOMINGSERVER_H

@class NSString, NSNumber;


#import "RMModelPayloadBase.h"

@interface RMModelAccountMailDeclaration_IncomingServer : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // ivar: _payloadAuthenticationCredentialsAssetReference
@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // ivar: _payloadAuthenticationMethod
@property (copy, nonatomic) NSString *payloadHostName; // ivar: _payloadHostName
@property (copy, nonatomic) NSString *payloadIMAPPathPrefix; // ivar: _payloadIMAPPathPrefix
@property (copy, nonatomic) NSNumber *payloadPort; // ivar: _payloadPort
@property (copy, nonatomic) NSString *payloadServerType; // ivar: _payloadServerType


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithServerType:(id)arg0 hostName:(id)arg1 authenticationMethod:(id)arg2 ;
+(id)buildWithServerType:(id)arg0 hostName:(id)arg1 port:(id)arg2 authenticationMethod:(id)arg3 authenticationCredentialsAssetReference:(id)arg4 imapPathPrefix:(id)arg5 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif