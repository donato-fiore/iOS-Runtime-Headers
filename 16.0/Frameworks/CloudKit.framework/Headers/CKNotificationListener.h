// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNOTIFICATIONLISTENER_H
#define CKNOTIFICATIONLISTENER_H

@class NSString, NSMutableDictionary, NSOperationQueue, APSConnection, NSArray;
@protocol APSConnectionDelegate, CKPKPushRegistryDelegate, CKPropertiesDescription, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate, CKPropertiesDescription>

 {
    NSString *_apsEnvironment;
    NSMutableDictionary *_subscriptionInfos;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    APSConnection *_apsConnection;
    NSUInteger _strategy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (retain, nonatomic) NSArray *notificationObservers; // ivar: _notificationObservers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) BOOL useOpportunisticPushTopics; // ivar: _useOpportunisticPushTopics


-(BOOL)hasInitializedAPSConnection;
-(BOOL)isRegisteredForSubscriptionWithID:(id)arg0 inDatabase:(id)arg1 ;
-(id)apsConnectionOnQueue;
-(id)init;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)initWithStrategy:(NSUInteger)arg0 ;
-(id)initWithStrategy:(NSUInteger)arg0 machServiceName:(id)arg1 ;
-(id)redactedDescription;
-(id)uniqueKeyForSubscriptionID:(id)arg0 inDatabase:(id)arg1 ;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)connection:(id)arg0 didChangeConnectedStatus:(BOOL)arg1 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connectionDidReconnect:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveIncomingPushWithPayload:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)handlePushNotificationWithPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForSubscription:(id)arg0 inDatabase:(id)arg1 handler:(id)arg2 ;
-(void)unregisterForSubscriptionWithID:(id)arg0 inDatabase:(id)arg1 ;


@end


#endif