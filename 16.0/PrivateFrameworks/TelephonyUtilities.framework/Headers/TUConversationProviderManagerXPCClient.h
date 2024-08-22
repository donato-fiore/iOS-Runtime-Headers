// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONVERSATIONPROVIDERMANAGERXPCCLIENT_H
#define TUCONVERSATIONPROVIDERMANAGERXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol TUConversationProviderManagerXPCClient, TUConversationProviderManagerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUConversationProviderManagerXPCClient : NSObject <TUConversationProviderManagerXPCClient, TUConversationProviderManagerDataSource>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasInitialState; // ivar: _hasInitialState
@property (nonatomic) BOOL hasRequestedInitialState; // ivar: _hasRequestedInitialState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL shouldConnectToHost; // ivar: _shouldConnectToHost
@property (nonatomic) int shouldConnectToken; // ivar: _shouldConnectToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)conversationProviderManagerAllowedClasses;
+(id)conversationProviderManagerClientXPCInterface;
+(id)conversationProviderManagerServerXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(id)asynchronousServerWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)_invokeCompletionHandler:(id)arg0 ;
-(void)_requestInitialStateIfNecessary;
-(void)_requestInitialStateWithCompletionHandler:(id)arg0 ;
-(void)conversationProviderForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)doesHandle:(id)arg0 correspondToConversationProvider:(id)arg1 completionHandler:(id)arg2 ;
-(void)generatePseudonymHandleForConversationProvider:(id)arg0 expiryDuration:(CGFloat)arg1 URI:(id)arg2 completionHandler:(id)arg3 ;
-(void)invalidate;
-(void)registerConversationProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerForCallbacksForProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerWithCompletionHandler:(id)arg0 ;
-(void)renewPseudonymHandle:(id)arg0 forConversationProvider:(id)arg1 expirationDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)revokePseudonymHandle:(id)arg0 forConversationProvider:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateConversationProviders:(id)arg0 ;


@end


#endif