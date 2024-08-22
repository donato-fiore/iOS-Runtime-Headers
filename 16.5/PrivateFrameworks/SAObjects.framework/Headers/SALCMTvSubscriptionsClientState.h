// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALCMTVSUBSCRIPTIONSCLIENTSTATE_H
#define SALCMTVSUBSCRIPTIONSCLIENTSTATE_H

@class NSArray;


#import "SAAceClientState.h"

@interface SALCMTvSubscriptionsClientState : SAAceClientState

@property (copy, nonatomic) NSArray *subscriptions;


+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)tvSubscriptionsClientState;
+(id)tvSubscriptionsClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)uniqueObjectIdentifier;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif