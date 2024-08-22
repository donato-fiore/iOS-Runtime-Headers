// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMMODELMANAGEMENTSERVERCAPABILITIESDECLARATION_H
#define RMMODELMANAGEMENTSERVERCAPABILITIESDECLARATION_H

@class NSString;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelManagementBase.h"
#import "RMModelAnyPayload.h"

@interface RMModelManagementServerCapabilitiesDeclaration : RMModelManagementBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) RMModelAnyPayload *payloadSupportedFeatures; // ivar: _payloadSupportedFeatures
@property (copy, nonatomic) NSString *payloadVersion; // ivar: _payloadVersion
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 version:(id)arg1 supportedFeatures:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 version:(id)arg1 supportedFeatures:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif