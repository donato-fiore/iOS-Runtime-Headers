// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDACCOUNTECACCOUNTTRANSFORMER_H
#define EDACCOUNTECACCOUNTTRANSFORMER_H

@class NSValueTransformer;



@interface EDAccountECAccountTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformAccount:(id)arg0 ;
-(id)transformDeliveryAccount:(id)arg0 ;
-(id)transformReceivingAccount:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif