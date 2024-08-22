// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSTATUSSUBSCRIPTION_H
#define SKSTATUSSUBSCRIPTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SKPublishedStatus.h"
#import "SKStatusSubscriptionDaemonConnection.h"
#import "SKHandle.h"
#import "SKStatusSubscriptionMetadata.h"

@interface SKStatusSubscription : NSObject

@property (readonly, nonatomic) SKPublishedStatus *currentStatus;
@property (readonly, nonatomic) SKStatusSubscriptionDaemonConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, nonatomic) SKHandle *ownerHandle;
@property (readonly, nonatomic) NSArray *ownerHandles;
@property (readonly, nonatomic, getter=isPersonalStatusSubscription) BOOL personalStatusSubscription;
@property (readonly, nonatomic) NSString *subscriptionIdentifier;
@property (readonly, nonatomic) SKStatusSubscriptionMetadata *subscriptionMetadata; // ivar: _subscriptionMetadata


+(id)logger;
-(id)description;
-(id)initWithSubscriptionMetadata:(id)arg0 daemonConnection:(id)arg1 ;
-(void)deleteSubscriptionWithCompletion:(id)arg0 ;
-(void)releasePersistentSubscriptionAssertionForApplicationIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releaseTransientSubscriptionAssertionWithCompletion:(id)arg0 ;
-(void)retainPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)retainTransientSubscriptionAssertionWithCompletion:(id)arg0 ;


@end


#endif