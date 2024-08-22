// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRINAMESPACEFACTORSUBSCRIPTIONSETTINGS_H
#define TRINAMESPACEFACTORSUBSCRIPTIONSETTINGS_H


#import <Foundation/Foundation.h>

#import "TRIKVStore.h"

@interface TRINamespaceFactorSubscriptionSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore; // ivar: _keyValueStore


+(id)keyForNamespaceSubscription:(id)arg0 ;
+(id)settingsWithKeyValueStore:(id)arg0 ;
-(BOOL)setSubscriptionWithFactorNames:(id)arg0 inNamespaceName:(id)arg1 error:(*id)arg2 ;
-(id)initWithKeyValueStore:(id)arg0 ;
-(id)subscribedFactorsForNamespaceName:(id)arg0 ;


@end


#endif