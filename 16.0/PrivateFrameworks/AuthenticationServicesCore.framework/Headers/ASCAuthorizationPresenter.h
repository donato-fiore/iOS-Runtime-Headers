// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCAUTHORIZATIONPRESENTER_H
#define ASCAUTHORIZATIONPRESENTER_H

@class NSXPCListener, SBSRemoteAlertHandle, NSXPCConnection, NSArray, NSString;
@protocol NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, ASCAuthorizationPresenterHostProtocol, OS_dispatch_queue, ASCViewServiceProtocol, ASCAuthorizationPresenterDelegate;

#import <Foundation/Foundation.h>


@interface ASCAuthorizationPresenter : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, ASCAuthorizationPresenterHostProtocol>

 {
    NSXPCListener *_remoteListener;
    id *_credentialResultHandler;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    NSXPCConnection *_viewServiceConnection;
    id<ASCViewServiceProtocol> *_viewServiceProxy;
    NSObject<OS_dispatch_queue> *_interfaceUpdateQueue;
    NSArray *_loginChoicesForQueuedUpdate;
    BOOL _hasQueuedPINEntryInterfaceRequest;
    BOOL _hasQueuedCABLEClientWillConnectRequest;
    BOOL _hasQueuedCABLEClientWillAuthenticateRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASCAuthorizationPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isErrorDueToNewAlertHandleRequest:(id)arg0 ;
-(BOOL)_isPresentationContextValid:(id)arg0 error:(*id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_performQueuedUpdatesIfNecessary;
-(void)authorizationRequestFinishedWithCredential:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)authorizationRequestInitiatedWithLoginChoice:(id)arg0 authenticatedContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)cableClientWillAuthenticate;
-(void)cableClientWillConnect;
-(void)dismiss;
-(void)dismissWithError:(id)arg0 ;
-(void)initializeClientToViewServiceConnection;
-(void)presentAuthorizationWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentError:(id)arg0 forService:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentPINEntryInterface;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)startCABLEAuthenticationWithCompletionHandler:(id)arg0 ;
-(void)updateInterfaceForUserVisibleError:(id)arg0 ;
-(void)updateInterfaceWithLoginChoices:(id)arg0 ;
-(void)validateUserEnteredPIN:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif