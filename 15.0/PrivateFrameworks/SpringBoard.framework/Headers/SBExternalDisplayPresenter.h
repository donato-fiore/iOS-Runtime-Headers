// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBEXTERNALDISPLAYPRESENTER_H
#define SBEXTERNALDISPLAYPRESENTER_H

@class FBSDisplayLayoutPublisher, FBSDisplayIdentity, CADisplay, FBSDisplayConfiguration, FBScene, BSAtomicSignal, CADisplayMode, NSString, _UIRootWindow, SBSExternalDisplayLayoutElement;
@protocol SBSceneHandleObserver, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBApplication.h"
#import "SBApplicationSceneHandle.h"

@interface SBExternalDisplayPresenter : NSObject <SBSceneHandleObserver, BSInvalidatable>

 {
    FBSDisplayLayoutPublisher *_layoutPublisher;
    FBSDisplayIdentity *_identity;
    CADisplay *_caDisplay;
    BOOL _invalidated;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_currentReportedConfiguration;
    SBApplication *_foregroundApp;
    SBApplicationSceneHandle *_foregroundAppSceneHandle;
    FBScene *_foregroundAppScene;
    BSAtomicSignal *_foregroundAppSceneTransactionInvalidator;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    NSUInteger _displayMutationEnqueuedCount;
    NSUInteger _displayMutationCompletedCount;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    _UIRootWindow *_rootWindow;
    FBSDisplayConfiguration *_rootWindowConfiguration;
    SBApplicationSceneHandle *_presentationSceneHandle;
    FBScene *_presentationScene;
    BSAtomicSignal *_presentationSceneActivationInvalidator;
    BOOL _hasEnqueuedPresentationUpdate;
    BOOL _presentationSceneHasActivated;
    SBSExternalDisplayLayoutElement *_presentedLayoutElement;
    id<BSInvalidatable> *_presentedLayoutElementAssertion;
    NSString *_preventIdleSleepReason;
    SBApplication *_preventIdleSleepApp;
    BOOL _preventIdleSleepPresenting;
    NSInteger _powerMode;
    BSAtomicSignal *_idleOffTimerInvalidation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createUpdateTransaction;
-(id)initWithLayoutPublisher:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)updateToConfiguration:(id)arg0 withForegroundApp:(id)arg1 ;
-(void)_enqueuePresentationUpdate;
-(void)_ensureMode:(id)arg0 overscanCompensation:(NSInteger)arg1 ;
-(void)_setPreventIdleSleepForApp:(id)arg0 presenting:(BOOL)arg1 ;
-(void)_updateHostingIfNecessary;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif