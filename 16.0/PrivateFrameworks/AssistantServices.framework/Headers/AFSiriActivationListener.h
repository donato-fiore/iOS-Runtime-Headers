// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRIACTIVATIONLISTENER_H
#define AFSIRIACTIVATIONLISTENER_H

@class NSXPCListener, NSString;
@protocol AFNotifyObserverDelegate, AFSiriActivationService, NSXPCListenerDelegate, AFInvalidating, OS_dispatch_queue, AFSiriActivationListenerDelegate;

#import <Foundation/Foundation.h>


@interface AFSiriActivationListener : NSObject <AFNotifyObserverDelegate, AFSiriActivationService, NSXPCListenerDelegate, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    id<AFSiriActivationListenerDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServicePort:(NSInteger)arg0 ;
-(void)_activateWithRequestInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)_deactivateForReason:(NSInteger)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)_deliverButtonEventFromContext:(id)arg0 completion:(id)arg1 ;
-(void)_invalidate;
-(void)_myriadEventWithRequestInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)_prewarmWithRequestInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)_startWithDelegate:(id)arg0 ;
-(void)_stop;
-(void)activateWithRequestInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)deactivateForReason:(NSInteger)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)handleContext:(id)arg0 completion:(id)arg1 ;
-(void)handleIntent:(id)arg0 inBackgroundAppWithBundleId:(id)arg1 reply:(id)arg2 ;
-(void)handleIntentForwardingAction:(id)arg0 inBackgroundApplicationWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)prewarmWithRequestInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)startWithDelegate:(id)arg0 ;
-(void)stop;


@end


#endif