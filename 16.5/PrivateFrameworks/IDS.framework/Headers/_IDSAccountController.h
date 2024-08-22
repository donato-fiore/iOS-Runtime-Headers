// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _IDSACCOUNTCONTROLLER_H
#define _IDSACCOUNTCONTROLLER_H

@class NSMapTable, NSString, NSMutableSet, NSMutableDictionary, NSSet;
@protocol IDSDaemonListenerProtocol;

#import <Foundation/Foundation.h>


@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol>

 {
    id *_delegateContext;
    NSMapTable *_delegateToInfo;
    NSString *_serviceToken;
    NSString *_service;
    NSMutableSet *_cachedAccounts;
    NSMutableSet *_enabledAccounts;
    NSMutableDictionary *_pendingAccountsToRemove;
    NSMutableDictionary *_transactionIDToHandlersMap;
    BOOL _accountsLoaded;
    BOOL _isLocalAccountVisible;
}


@property (readonly, nonatomic) NSSet *accounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *enabledAccounts;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *internalAccounts;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


-(id)accountWithLoginID:(id)arg0 service:(id)arg1 ;
-(id)accountWithUniqueID:(id)arg0 ;
-(id)initWithService:(id)arg0 delegateContext:(id)arg1 ;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3  ;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3 group:(unk)arg4  ;
-(void)_callDelegatesWithBlock:(id)arg0 ;
// -(void)_callDelegatesWithBlock:(id)arg0 group:(unk)arg1  ;
-(void)_connect;
-(void)_loadCachedAccounts;
-(void)_loadCachedAccountsWithDictionaries:(id)arg0 ;
-(void)_removeAccount:(id)arg0 ;
-(void)_removeAndDeregisterAccount:(id)arg0 ;
-(void)_setupAccountWithLoginID:(id)arg0 accountConfig:(id)arg1 authToken:(id)arg2 password:(id)arg3 completionHandler:(id)arg4 ;
-(void)_updateDelegatesWithOldAccounts:(id)arg0 newAccounts:(id)arg1 ;
-(void)_updateLocalAccountVisibility;
-(void)accountAdded:(id)arg0 ;
-(void)accountDisabled:(id)arg0 onService:(id)arg1 ;
-(void)accountEnabled:(id)arg0 onService:(id)arg1 ;
-(void)accountRemoved:(id)arg0 ;
-(void)accountUpdated:(id)arg0 ;
-(void)accountsChanged:(id)arg0 forTopic:(id)arg1 ;
-(void)addAccount:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)daemonDisconnected;
-(void)dealloc;
-(void)disableAccount:(id)arg0 ;
-(void)enableAccount:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)setupAccountWithLoginID:(id)arg0 aliases:(id)arg1 password:(id)arg2 completionHandler:(id)arg3 ;
-(void)setupAccountWithLoginID:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupAccountWithSetupParameters:(id)arg0 aliases:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupCompleteForAccount:(id)arg0 transactionID:(id)arg1 setupError:(id)arg2 ;


@end


#endif