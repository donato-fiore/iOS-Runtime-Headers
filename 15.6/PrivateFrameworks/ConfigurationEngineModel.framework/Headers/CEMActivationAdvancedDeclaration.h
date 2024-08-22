// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMACTIVATIONADVANCEDDECLARATION_H
#define CEMACTIVATIONADVANCEDDECLARATION_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMDeclarationBase.h"
#import "CEMAnyPayload.h"

@interface CEMActivationAdvancedDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMAnyPayload *payloadActivationPredicate; // ivar: _payloadActivationPredicate
@property (copy, nonatomic) NSArray *payloadRequiredConfigurations; // ivar: _payloadRequiredConfigurations
@property (copy, nonatomic) NSArray *payloadStandardConfigurations; // ivar: _payloadStandardConfigurations
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withRequiredConfigurations:(id)arg1 withStandardConfigurations:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withRequiredConfigurations:(id)arg1 withStandardConfigurations:(id)arg2 withActivationPredicate:(id)arg3 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif