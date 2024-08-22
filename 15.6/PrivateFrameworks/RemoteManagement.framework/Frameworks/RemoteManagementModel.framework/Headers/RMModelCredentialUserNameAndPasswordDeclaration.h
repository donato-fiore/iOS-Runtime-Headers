// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELCREDENTIALUSERNAMEANDPASSWORDDECLARATION_H
#define RMMODELCREDENTIALUSERNAMEANDPASSWORDDECLARATION_H

@class NSString;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelAssetBase.h"
#import "RMModelAssetBaseReference.h"

@interface RMModelCredentialUserNameAndPasswordDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) RMModelAssetBaseReference *payloadReference; // ivar: _payloadReference
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 reference:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 reference:(id)arg1 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif