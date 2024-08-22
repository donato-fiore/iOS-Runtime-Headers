// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEGESTUREFINALDESTINATIONSWITCHERMODIFIER_H
#define SBHOMEGESTUREFINALDESTINATIONSWITCHERMODIFIER_H

@class NSString;
@protocol SBHomeGestureFinalDestinationSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"
#import "SBHomeGestureDockSwitcherModifier.h"

@interface SBHomeGestureFinalDestinationSwitcherModifier : SBSwitcherModifier {
    CGPoint _initialTranslationAdjustment;
    CGPoint _translation;
    CGPoint _velocity;
    CGFloat _lastTouchTimestamp;
    CGFloat _lastAverageVelocityYForAcceleration;
    CGPoint _initialTouchLocation;
    CGPoint _lastTouchLocation;
    CGPoint _directionSwitchLocation;
    BOOL _movingTowardsNextLayoutState;
    CGFloat _adaptiveMinimumYVelocityForHome;
    CGFloat _adaptivePauseVelocityThresholdForAppSwitcher;
    CGFloat _adaptiveVelocitySlopeThresholdForArc;
    CGFloat _lastFinalDestination;
    NSInteger _edgeRegionSampleCounter;
    BOOL _updateEdgeRegionSampleCounter;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    NSUInteger _numberOfTouchSamples;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    NSInteger _startingEnvironmentMode;
    BOOL _scrunchInitiated;
    BOOL _continuingGesture;
    NSInteger _touchType;
    BOOL _isMouseEvent;
    id<SBHomeGestureFinalDestinationSwitcherModifierDelegate> *_finalDestinationDelegate;
}


@property (readonly, nonatomic) NSInteger currentFinalDestination;
@property (readonly, nonatomic) NSString *finalDestinationReason; // ivar: _finalDestinationReason
@property (readonly, nonatomic) BOOL hasSeenAccelerationDipForAppSwitcher; // ivar: _hasSeenAccelerationDipForAppSwitcher


-(BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
-(BOOL)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(CGFloat)arg0 ;
-(CGFloat)_unconditionalDistanceThresholdForHome;
-(NSInteger)_adjustedFinalDestinationAccountingForEdgeDataDistortion:(NSInteger)arg0 location:(struct CGPoint )arg1 ;
-(id)debugDescription;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 initialTranslationAdjustment:(struct CGPoint )arg1 startingEnvironmentMode:(NSInteger)arg2 continuingGesture:(BOOL)arg3 dockModifier:(id)arg4 ;
-(id)studyLogData;
-(void)_applyPrototypeSettings;
-(void)_updateAdaptiveThresholdsForCurrentFinalDestination:(NSInteger)arg0 velocityAverage:(struct CGPoint )arg1 ;
-(void)_updateForGestureDidBeginWithEvent:(id)arg0 ;
-(void)_updateForGestureDidChangeWithEvent:(id)arg0 ;
-(void)_updateForGestureDidEndWithEvent:(id)arg0 ;
-(void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif