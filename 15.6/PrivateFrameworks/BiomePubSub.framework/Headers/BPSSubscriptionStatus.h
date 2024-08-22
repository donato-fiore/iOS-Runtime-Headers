// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSSUBSCRIPTIONSTATUS_H
#define BPSSUBSCRIPTIONSTATUS_H


#import <Foundation/Foundation.h>

#import "BPSSubscription.h"

@interface BPSSubscriptionStatus : NSObject

@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) BPSSubscription *subscription; // ivar: _subscription


+(id)awaitingSubscription;
+(id)subscribedWithSubscription:(id)arg0 ;
+(id)terminal;
-(id)initWithState:(NSInteger)arg0 subscription:(id)arg1 ;


@end


#endif