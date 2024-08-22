// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSUBSCRIPTIONVALUETRANSFORMER_H
#define VSSUBSCRIPTIONVALUETRANSFORMER_H

@class NSValueTransformer;



@interface VSSubscriptionValueTransformer : NSValueTransformer



+(BOOL)_subscriptionIsCoreSpotlight:(id)arg0 ;
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
+(id)_legacySubscriptionInfoForUserAccount:(id)arg0 ;
+(id)_subscriptionForUserAccount:(id)arg0 ;
+(id)_userAccountWithLegacySubscriptionPrimitives:(id)arg0 ;
+(void)_updateUserAccount:(id)arg0 fromJSONWithSubscription:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif