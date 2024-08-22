// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFREMOTEREQUESTWATCHER_H
#define AFREMOTEREQUESTWATCHER_H

@class NSString;
@protocol AFSiriActivationListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFSiriActivationListener.h"

@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriActivationListener *_siriActivationListener;
    id *_prewarmHandler;
    id *_requestHandler;
    id *_dismissalHandler;
    id *_intentHandler;
    id *_intentForwardingActionHandler;
    int _speechRequestToken;
    id *_speechRequestHandler;
    id *_buttonEventHandler;
    id *_activationHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_dispatchSpeechRequestOptions:(id)arg0 ;
-(void)_setupRequestListener;
-(void)_setupSpeechRequestListener;
-(void)dealloc;
-(void)setActivationHandler:(id)arg0 ;
-(void)setButtonEventHandler:(id)arg0 ;
-(void)setDismissalHandler:(id)arg0 ;
-(void)setIntentForwardingActionHandler:(id)arg0 ;
-(void)setIntentHandler:(id)arg0 ;
-(void)setNewRequestHandler:(id)arg0 ;
-(void)setNewSpeechRequestHandler:(id)arg0 ;
-(void)setPrewarmHandler:(id)arg0 ;
-(void)setRequestHandler:(id)arg0 ;
-(void)siriActivationListener:(id)arg0 activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)siriActivationListener:(id)arg0 deactivateForReason:(NSInteger)arg1 options:(NSUInteger)arg2 context:(id)arg3 completion:(id)arg4 ;
-(void)siriActivationListener:(id)arg0 handleButtonEventFromContext:(id)arg1 completion:(id)arg2 ;
-(void)siriActivationListener:(id)arg0 handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(id)arg3 ;
-(void)siriActivationListener:(id)arg0 handleIntentForwardingAction:(id)arg1 inBackgroundApplicationWithBundleIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)siriActivationListener:(id)arg0 prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(id)arg3 ;


@end


#endif