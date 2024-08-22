// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELMANAGEMENTTESTCOMMANDCOMMAND_H
#define RMMODELMANAGEMENTTESTCOMMANDCOMMAND_H

@class NSString;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelCommandBase.h"

@interface RMModelManagementTestCommandCommand : RMModelCommandBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadEcho; // ivar: _payloadEcho
@property (copy, nonatomic) NSString *payloadReturnStatus; // ivar: _payloadReturnStatus
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 echo:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 echo:(id)arg1 returnStatus:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif