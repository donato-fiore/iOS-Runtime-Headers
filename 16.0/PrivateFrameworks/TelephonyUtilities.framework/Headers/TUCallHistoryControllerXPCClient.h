// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCALLHISTORYCONTROLLERXPCCLIENT_H
#define TUCALLHISTORYCONTROLLERXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol TUCallHistoryControllerXPCClient, TUCallHistoryControllerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUCallHistoryControllerXPCClient : NSObject <TUCallHistoryControllerXPCClient, TUCallHistoryControllerDataSource>



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
+(id)callHistoryControllerAllowedClasses;
+(id)callHistoryControllerClientXPCInterface;
+(id)callHistoryControllerServerXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(id)asynchronousServerWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)_invokeCompletionHandler:(id)arg0 ;
-(void)_requestInitialStateIfNecessary;
-(void)_requestInitialStateWithCompletionHandler:(id)arg0 ;
-(void)allCallHistoryDeleted;
-(void)dealloc;
-(void)invalidate;
-(void)recentCallsDeleted:(id)arg0 ;
-(void)registerWithCompletionHandler:(id)arg0 ;


@end


#endif