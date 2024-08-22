// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLPROVIDERMANAGERXPCCLIENT_H
#define TUCALLPROVIDERMANAGERXPCCLIENT_H

@class NSString, NSDictionary, NSXPCConnection;
@protocol TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource, TUCallProviderManagerDataSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource>



@property (readonly, nonatomic) BOOL currentProcessCanAccessInitialState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUCallProviderManagerDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *localProvidersByIdentifier; // ivar: _localProvidersByIdentifier
@property (copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier; // ivar: _pairedHostDeviceProvidersByIdentifier
@property (copy, nonatomic) NSDictionary *providersByIdentifier; // ivar: _providersByIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL requestedInitialState; // ivar: _requestedInitialState
@property (readonly) Class superclass;
@property (nonatomic) int token; // ivar: _token
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)callProviderManagerAllowedClasses;
+(id)callProviderManagerClientXPCInterface;
+(id)callProviderManagerServerXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(BOOL)openURL:(id)arg0 isSensitive:(BOOL)arg1 error:(*id)arg2 ;
-(id)init;
-(id)server;
-(id)serverWithErrorHandler:(id)arg0 ;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)_requestInitialState;
-(void)_updateProvidersByIdentifier:(id)arg0 localProvidersByIdentifier:(id)arg1 pairedHostDeviceProvidersByIdentifier:(id)arg2 ;
-(void)blockUntilInitialStateReceived;
-(void)dealloc;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)launchAppForDialRequest:(id)arg0 completion:(id)arg1 ;
-(void)updateProvidersByIdentifier:(id)arg0 localProvidersByIdentifier:(id)arg1 pairedHostDeviceProvidersByIdentifier:(id)arg2 ;


@end


#endif