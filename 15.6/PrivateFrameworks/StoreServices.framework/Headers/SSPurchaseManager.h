// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPURCHASEMANAGER_H
#define SSPURCHASEMANAGER_H

@class NSString;
@protocol OS_dispatch_queue, SSPurchaseManagerDelegate;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSPurchaseManager : NSObject {
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    id<SSPurchaseManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_managerIdentifier;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}


@property NSObject<SSPurchaseManagerDelegate> *delegate;
@property (readonly) NSString *managerIdentifier;


-(BOOL)_resultForReply:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)arg0 ;
-(id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg0 ;
-(id)_newEncodedArrayWithPurchases:(id)arg0 ;
-(id)_requestConnection;
-(id)_responseConnection;
-(id)init;
-(id)initWithManagerIdentifier:(id)arg0 ;
-(void)_connectToDaemon;
-(void)_handleAuthenticateRequest:(id)arg0 fromConnection:(id)arg1 ;
-(void)_handleMessage:(id)arg0 fromConnection:(id)arg1 ;
-(void)_handlePurchasesFinished:(id)arg0 fromConnection:(id)arg1 ;
-(void)_reconnectForDaemonLaunch;
// -(void)_sendCompletionBlock:(id)arg0 forGetPurchasesReply:(unk)arg1  ;
// -(void)_sendCompletionBlock:(id)arg0 forStandardReply:(unk)arg1  ;
-(void)_sendMessage:(NSInteger)arg0 withPurchaseIdentifiers:(id)arg1 afterPurchase:(id)arg2 completionBlock:(id)arg3 ;
-(void)_sendMessage:(NSInteger)arg0 withPurchases:(id)arg1 afterPurchase:(id)arg2 completionBlock:(id)arg3 ;
-(void)addPurchases:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)cancelPurchases:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)dealloc;
-(void)getPurchasesUsingBlock:(id)arg0 ;
-(void)insertPurchases:(id)arg0 afterPurchase:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)movePurchases:(id)arg0 afterPurchase:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif