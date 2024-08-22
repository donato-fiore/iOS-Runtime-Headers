// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREACHABILITYMANAGER_H
#define SBREACHABILITYMANAGER_H

@class NSHashTable, NSMutableSet, UITransform, UITapGestureRecognizer, SBFZStackParticipant, NSString, UIPanGestureRecognizer;
@protocol SBSystemGestureRecognizerDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate;

#import <Foundation/Foundation.h>

#import "SBReachabilityWindow.h"
#import "SBHomeGestureParticipant.h"
#import "SBScreenEdgePanGestureRecognizer.h"
#import "SBReachabilityGestureRecognizer.h"

@interface SBReachabilityManager : NSObject <SBSystemGestureRecognizerDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate>

 {
    NSHashTable *_observers;
    NSUInteger _reachabilityExtensionGenerationCount;
    BOOL _reachabilityModeEnabled;
    NSMutableSet *_temporaryEnabledReasons;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityWindow *_reachabilityWindow;
    UITransform *_reachabilityTransform;
    UITransform *_inverseReachabilityTransform;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBFZStackParticipant *_zStackParticipant;
    NSHashTable *_ignoredWindows;
    NSInteger _animationsInFlight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBScreenEdgePanGestureRecognizer *dismissEdgeGestureRecognizer; // ivar: _dismissEdgeGestureRecognizer
@property (readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // ivar: _dismissPanGestureRecognizer
@property (readonly, nonatomic) CGFloat effectiveReachabilityYOffset; // ivar: _effectiveReachabilityYOffset
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL reachabilityEnabled;
@property (readonly, nonatomic) SBReachabilityGestureRecognizer *reachabilityGestureRecognizer; // ivar: _reachabilityGestureRecognizer
@property (readonly, nonatomic) BOOL reachabilityModeActive; // ivar: _reachabilityModeActive
@property (readonly, nonatomic) CGFloat reachabilityYOffset;
@property (readonly) Class superclass;


+(BOOL)reachabilitySupported;
+(id)sharedInstance;
-(BOOL)canActivateReachability;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_sceneForWindow:(id)arg0 ;
-(id)ignoredWindows;
-(id)init;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_activateReachability:(id)arg0 ;
-(void)_handleSignificantTimeChanged;
-(void)_modifyDefaultPresentationContextHostTransformForWindow:(id)arg0 fromTransform:(id)arg1 toTransform:(id)arg2 ;
-(void)_notifyObserversDidEndReachabilityAnimation;
-(void)_notifyObserversReachabilityModeActive:(BOOL)arg0 ;
-(void)_notifyObserversReachabilityYOffsetDidChange;
-(void)_notifyObserversWillBeginReachabilityAnimation;
-(void)_panToDeactivateReachability:(id)arg0 ;
-(void)_pingKeepAliveWithDuration:(CGFloat)arg0 interactedBeforePing:(BOOL)arg1 initialKeepAliveTime:(CGFloat)arg2 ;
-(void)_screenDidDim;
-(void)_setKeepAliveTimer;
-(void)_setupGestureRecognizers;
-(void)_setupReachabilityWindowIfNecessary;
-(void)_tapToDeactivateReachability:(id)arg0 ;
-(void)_tearDownReachabilityWindow;
-(void)_toggleReachabilityMode;
-(void)_transitionWithTransformer:(id)arg0 fromTransform:(id)arg1 toTransform:(id)arg2 ;
-(void)_updateReachabilityModeActive:(BOOL)arg0 ;
-(void)_updateReachabilityModeActive:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateReachabilityWindowForYOffset:(CGFloat)arg0 mode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)deactivateReachability;
-(void)dealloc;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)ignoreWindowForReachability:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setReachabilityTemporarilyDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setReachabilityTemporarilyEnabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)toggleReachability;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif