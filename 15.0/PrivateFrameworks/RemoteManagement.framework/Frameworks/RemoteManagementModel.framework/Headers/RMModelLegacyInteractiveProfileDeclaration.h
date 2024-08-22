// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMMODELLEGACYINTERACTIVEPROFILEDECLARATION_H
#define RMMODELLEGACYINTERACTIVEPROFILEDECLARATION_H

@class NSString;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelConfigurationBase.h"

@interface RMModelLegacyInteractiveProfileDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadProfileURL; // ivar: _payloadProfileURL
@property (copy, nonatomic) NSString *payloadVisibleName; // ivar: _payloadVisibleName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 profileURL:(id)arg1 visibleName:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 profileURL:(id)arg1 visibleName:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif