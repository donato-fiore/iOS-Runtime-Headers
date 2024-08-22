// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELACTIVATIONSIMPLEDECLARATION_H
#define RMMODELACTIVATIONSIMPLEDECLARATION_H

@class NSString, NSArray;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelActivationBase.h"

@interface RMModelActivationSimpleDeclaration : RMModelActivationBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadPredicate; // ivar: _payloadPredicate
@property (copy, nonatomic) NSArray *payloadStandardConfigurations; // ivar: _payloadStandardConfigurations
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 standardConfigurations:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 standardConfigurations:(id)arg1 predicate:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif