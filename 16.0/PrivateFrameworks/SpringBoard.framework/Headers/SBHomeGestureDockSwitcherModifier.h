// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMEGESTUREDOCKSWITCHERMODIFIER_H
#define SBHOMEGESTUREDOCKSWITCHERMODIFIER_H

@protocol SBHomeGestureDockSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"

@interface SBHomeGestureDockSwitcherModifier : SBSwitcherModifier {
    CGPoint _lastTouchLocation;
    CGPoint _unadjustedGestureTranslation;
    CGPoint _velocity;
    CGPoint _translationAdjustmentForFloatingDock;
    BOOL _wasTrackingDockWhenGestureBegan;
    BOOL _hadOpenDockFolderWhenGestureBegan;
    BOOL _hadOpenHomeScreenFolderWhenGestureBegan;
    BOOL _hadOpenForegroundLibraryWhenGestureBegan;
    BOOL _verticallyRubberbandedOutOfDock;
    BOOL _wantsDockAssertion;
    BOOL _highEnoughToShowDock;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    id<SBHomeGestureDockSwitcherModifierDelegate> *_delegate;
    NSInteger _startingEnvironmentMode;
    BOOL _requireVerticalSwipeToTrackDock;
}


@property (readonly, nonatomic, getter=isCurrentlyTrackingDock) BOOL currentlyTrackingDock; // ivar: _currentlyTrackingDock


-(BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
-(BOOL)_rubberbandedOutOfDockHorizontally;
-(BOOL)_shouldPresentDockForFinalDestination:(NSInteger)arg0 ;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(NSInteger)adjustedFinalDestinationForDestination:(NSInteger)arg0 withTranslation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 ;
-(NSInteger)dockUpdateMode;
-(NSUInteger)dockWindowLevelPriority;
-(id)_updateForGestureDidBeginWithEvent:(id)arg0 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg0 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg0 ;
-(id)debugDescription;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 startingEnvironmentMode:(NSInteger)arg1 requireVerticalSwipeToTrackDock:(BOOL)arg2 ;
-(id)studyLogData;
-(struct CGPoint )adjustedTranslationForTranslation:(struct CGPoint )arg0 ;
-(struct CGPoint )translationForAdjustedTranslation:(struct CGPoint )arg0 ;
-(void)_applyPrototypeSettings;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif