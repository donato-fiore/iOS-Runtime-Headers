// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCEXTENSIONCONNECTION_H
#define INCEXTENSIONCONNECTION_H

@class FBSDisplayLayoutMonitor, INWatchdogTimer, RBSAssertion, NSString, NSArray, INIntent, NSXPCConnection, NSXPCInterface, NSXPCListener;
@protocol NSXPCListenerDelegate, INXPCListenerEndpointProvider, INIntentBackgroundHandlingAssertion, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "INCDisplayLayoutMonitorObserver.h"
#import "INCExtensionTransaction.h"
#import "INCAppProxy.h"

@interface INCExtensionConnection : NSObject <NSXPCListenerDelegate, INXPCListenerEndpointProvider>

 {
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    INCDisplayLayoutMonitorObserver *_layoutObserver;
    INWatchdogTimer *_requestTimer;
    id<INIntentBackgroundHandlingAssertion> *_backgroundHandlingAssertion;
    RBSAssertion *_processAssertion;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // ivar: _queue
@property (nonatomic, setter=_setShouldObserveLayout:) BOOL _shouldObserveLayout; // ivar: _shouldObserveLayout
@property (readonly, nonatomic) INCExtensionTransaction *_transaction; // ivar: _transaction
@property (copy, nonatomic) id *appHandler; // ivar: _appHandler
@property (readonly, nonatomic) INCAppProxy *appProxy; // ivar: _appProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *extensionInputItems; // ivar: _extensionInputItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INIntent *intent;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *remoteExtensionProxyProvider; // ivar: _remoteExtensionProxyProvider
@property (nonatomic) CGFloat requestTimeoutInterval; // ivar: _requestTimeoutInterval
@property (nonatomic) BOOL requiresTCC;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger supportedExtensionTypes; // ivar: _supportedExtensionTypes
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler
@property (retain, nonatomic, setter=setXPCConnection:) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic, setter=setXPCInterface:) NSXPCInterface *xpcInterface; // ivar: _xpcInterface
@property (readonly, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener
@property (retain, nonatomic, setter=setXPCObject:) id *xpcObject; // ivar: _xpcObject


+(void)initialize;
-(BOOL)_cancelRequestTimer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(CGFloat)_timeoutIntervalForTransactionState:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithIntent:(id)arg0 remoteProxyProvider:(id)arg1 ;
-(id)initWithIntent:(id)arg0 supportedExtensionTypes:(NSInteger)arg1 donateInteraction:(BOOL)arg2 groupIdentifier:(id)arg3 remoteProxyProvider:(id)arg4 ;
-(id)initWithIntent:(id)arg0 supportedExtensionTypes:(NSInteger)arg1 remoteProxyProvider:(id)arg2 ;
-(id)xpcListenerEndpointWithInterface:(id)arg0 object:(id)arg1 ;
-(void)_invalidateAssertions;
-(void)_invalidateDisplayLayoutMonitor;
-(void)_invalidateInUseAssertion;
-(void)_invalidateRunningBoardAssertion;
-(void)_startRequestTimerWithExtensionProxy:(id)arg0 ;
-(void)_takeAssertionsForIntent:(id)arg0 extensionBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 ;
-(void)_takeInUseAssertionForIntent:(id)arg0 extensionBundleIdentifier:(id)arg1 ;
-(void)_takeRunningBoardAssertionForProcessIdentifier:(int)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)resumeWithCompletionHandler:(id)arg0 ;


@end


#endif