// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMIRROREDDISPLAYCONTROLLER_H
#define SBMIRROREDDISPLAYCONTROLLER_H

@class SBExternalDisplayDefaults, FBSDisplayIdentity, FBSDisplayConfiguration, BSAtomicSignal, NSString, CADisplay, CADisplayMode;
@protocol SBDisplayControlling, FBSDisplayLayoutPublishing, OS_dispatch_queue, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBDisplayAssertion.h"

@interface SBMirroredDisplayController : NSObject <SBDisplayControlling>

 {
    SBExternalDisplayDefaults *_externalDisplayDefaults;
    FBSDisplayIdentity *_displayIdentity;
    FBSDisplayConfiguration *_currentConfiguration;
    id<FBSDisplayLayoutPublishing> *_layoutPublisher;
    SBDisplayAssertion *_displayAssertion;
    BSAtomicSignal *_lostControlOfDisplaySignal;
    NSString *_idleSleepReason;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    CADisplay *_caDisplay;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    CGSize _requestedLogicalScale;
    id<BSInvalidatable> *_stateCaptureToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExternalDisplayDefaults:(id)arg0 ;
-(void)_ensureCADisplayModeForMirroring;
-(void)_updateDisplayAssertion;
-(void)_updateIdleSleepReason:(id)arg0 ;
-(void)connectToDisplayIdentity:(id)arg0 configuration:(id)arg1 displayManager:(id)arg2 sceneManager:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5 ;
-(void)dealloc;
-(void)displayAssertion:(id)arg0 didLoseControlOfDisplayForDeactivationReasons:(NSUInteger)arg1 ;
-(void)displayAssertionDidGainControlOfDisplay:(id)arg0 ;
-(void)displayIdentityDidDisconnect:(id)arg0 ;
-(void)displayIdentityDidUpdate:(id)arg0 configuration:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif