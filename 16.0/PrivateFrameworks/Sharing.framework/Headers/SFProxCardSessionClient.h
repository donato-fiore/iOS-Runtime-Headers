// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPROXCARDSESSIONCLIENT_H
#define SFPROXCARDSESSIONCLIENT_H

@class SBSRemoteAlertHandle, NSXPCConnection, NSXPCListener, NSString, NSDictionary;
@protocol NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, SFProxCardXPCClientInterface, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFProxCardSessionClient : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, SFProxCardXPCClientInterface>

 {
    BOOL _activateCalled;
    id *_activateCompletion;
    BOOL _dismissCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    *LogCategory _ucat;
    NSObject<OS_dispatch_source> *_xpcCheckinTimer;
    NSXPCConnection *_xpcCnx;
    NSXPCListener *_xpcListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<SFProxCardXPCClientInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (copy, nonatomic) NSString *viewControllerClassName; // ivar: _viewControllerClassName
@property (copy, nonatomic) NSString *viewServiceName; // ivar: _viewServiceName


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_reportError:(id)arg0 ;
-(void)_xpcCheckinTimerFired;
-(void)_xpcConnectionInvalidated:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)xpcCheckinWithCompletion:(id)arg0 ;
-(void)xpcPerformAction:(int)arg0 completion:(id)arg1 ;


@end


#endif