// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKCLIENTBROKER_H
#define SKCLIENTBROKER_H

@class NSMapTable, NSHashTable, NSString;
@protocol ASDStoreKitClientProtocol;

#import <Foundation/Foundation.h>


@interface SKClientBroker : NSObject <ASDStoreKitClientProtocol>

 {
    NSMapTable *_clients;
    NSHashTable *_subscriptionStatusListeners;
    NSHashTable *_storefrontListeners;
    NSHashTable *_transactionListeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultBroker;
-(BOOL)hasTransactionListener;
-(id)init;
-(void)askToShowMessageWithReplyBlock:(id)arg0 ;
-(void)downloadAdded:(id)arg0 ;
-(void)downloadRemoved:(id)arg0 ;
-(void)downloadStatusChanged:(id)arg0 ;
-(void)handleAuthenticateRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)receivedStatuses:(id)arg0 ;
-(void)receivedTransactions:(id)arg0 ;
-(void)registerClient:(id)arg0 withIdentifier:(id)arg1 ;
-(void)registerStorefrontListener:(id)arg0 ;
-(void)registerSubscriptionStatusListener:(id)arg0 ;
-(void)registerTransactionListener:(id)arg0 ;
-(void)removedEntitlementsForProductIdentifiers:(id)arg0 ;
-(void)removedTransactions:(id)arg0 ;
-(void)storefrontChanged:(id)arg0 ;
-(void)unregisterClientWithIdentifier:(id)arg0 ;
-(void)unregisterStorefrontListener:(id)arg0 ;
-(void)unregisterSubscriptionStatusListener:(id)arg0 ;
-(void)unregisterTransactionListener:(id)arg0 ;
-(void)updatedTransactions:(id)arg0 ;


@end


#endif