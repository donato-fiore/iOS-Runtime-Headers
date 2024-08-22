// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMPREDICATENOT_H
#define CEMPREDICATENOT_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMPredicateBase.h"

@interface CEMPredicateNot : CEMPredicateBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMPredicateBase *payloadPredicate; // ivar: _payloadPredicate
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithPredicate:(id)arg0 ;
+(id)buildWithPredicate:(id)arg0 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif