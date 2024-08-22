// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKATRANSIENTSUBSCRIPTIONASSERTION_H
#define SKATRANSIENTSUBSCRIPTIONASSERTION_H

@class NSString;
@protocol OS_os_activity;

#import <Foundation/Foundation.h>


@interface SKATransientSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity; // ivar: _osActivity
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier; // ivar: _subscriptionIdentifier


+(id)logger;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransientSubscription:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSubscriptionIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif