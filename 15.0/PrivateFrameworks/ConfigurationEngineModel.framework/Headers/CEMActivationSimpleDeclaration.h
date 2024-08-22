// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMACTIVATIONSIMPLEDECLARATION_H
#define CEMACTIVATIONSIMPLEDECLARATION_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMDeclarationBase.h"
#import "CEMPredicateBase.h"

@interface CEMActivationSimpleDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMPredicateBase *payloadPredicate; // ivar: _payloadPredicate
@property (copy, nonatomic) NSArray *payloadStandardConfigurations; // ivar: _payloadStandardConfigurations
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withStandardConfigurations:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withStandardConfigurations:(id)arg1 withPredicate:(id)arg2 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif