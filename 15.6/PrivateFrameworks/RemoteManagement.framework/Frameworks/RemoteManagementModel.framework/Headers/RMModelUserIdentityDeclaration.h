// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELUSERIDENTITYDECLARATION_H
#define RMMODELUSERIDENTITYDECLARATION_H

@class NSString;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelAssetBase.h"

@interface RMModelUserIdentityDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadEmailAddress; // ivar: _payloadEmailAddress
@property (copy, nonatomic) NSString *payloadFullName; // ivar: _payloadFullName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 fullName:(id)arg1 emailAddress:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif