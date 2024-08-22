// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPINTERACTIONCONTROLLER_H
#define SBPIPINTERACTIONCONTROLLER_H

@class UIView, NSString, UIViewFloatAnimatableProperty, UIPanGestureRecognizer, NSDictionary, NSMutableArray, _UIHyperregionUnion, _UIHyperInteractor;
@protocol UIGestureRecognizerDelegate, SBPIPSystemGestureRecognizerDelegate, PTSettingsKeyPathObserver, SBPIPPositionHyperregionComposerDelegate, SBPIPInteractionControllerDelegate, SBPIPInteractionControllerDataSource, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBPIPPinchGestureRecognizer.h"
#import "SBPIPRotationGestureRecognizer.h"
#import "SBPIPDefaultPositionHyperregionComposer.h"
#import "SBPIPInteractionSettings.h"
#import "SBPIPContentViewLayoutSettings.h"

@interface SBPIPInteractionController : NSObject <UIGestureRecognizerDelegate, SBPIPSystemGestureRecognizerDelegate, PTSettingsKeyPathObserver, SBPIPPositionHyperregionComposerDelegate>

 {
    id<SBPIPInteractionControllerDelegate> *_delegate;
    id<SBPIPInteractionControllerDataSource> *_dataSource;
    UIView *_interactionTargetView;
    NSString *_shortDescription;
    NSInteger _shouldStash;
    BOOL _didLastSettleInStashedState;
    BOOL _didHandleGestureEndState;
    BOOL _gesturesWereCancelled;
    BOOL _isChangingSize;
    BOOL _threeTouchesPanDetected;
    BOOL _useSystemGesturesForResizing;
    CGSize _toBeAppliedPreferredContentSize;
    UIViewFloatAnimatableProperty *_layoutProgressProperty;
    NSUInteger _allLayoutSessionUpdateReasons;
    NSUInteger _gesturesEndedLayoutReason;
    SBPIPPinchGestureRecognizer *_pinchGestureRecognizer;
    SBPIPRotationGestureRecognizer *_rotationGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPanGestureRecognizer *_externalPanDrivingGestureRecognizer;
    UIPanGestureRecognizer *_panWhileResizingGestureRecognizer;
    SBPIPPositionGeometryContext _geometryContext;
    NSDictionary *_resolvedPositionRegionsMap;
    NSMutableArray *_positionRegionComposers;
    _UIHyperregionUnion *_stashedLeftRegion;
    _UIHyperregionUnion *_stashedRightRegion;
    _UIHyperregionUnion *_cornersRegion;
    SBPIPDefaultPositionHyperregionComposer *_defaultComposer;
    _UIHyperInteractor *_positionInteractor;
    _UIHyperInteractor *_rotationInteractor;
    _UIHyperInteractor *_scaleInteractor;
    CGFloat _pinchGestureBaselineScale;
    CGFloat _pinchGestureScaleFactor;
    CGFloat _lastStashedProgress;
    CGPoint _panGestureLocationOffset;
    CGPoint _anchorPoint;
    CGAffineTransform _stashTabCompensationTransform;
    CGAffineTransform _rotationTransform;
    NSUInteger _inFlightAnimatedLayouts;
    id *_pendingInteractionCompletion;
    SBPIPInteractionSettings *_interactionSettings;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    SBPIPContentViewLayoutSettings *_layoutSettings;
    UIView *_positionRegionVisualizationView;
}


@property (readonly, nonatomic) NSUInteger canonicalPosition;
@property (readonly, nonatomic) CGSize containerSize;
@property (readonly, nonatomic) CGFloat currentNormalizedScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugName; // ivar: _debugName
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect initialFrame;
@property (readonly, nonatomic) SBPIPContentViewLayoutSettings *layoutSettings;
@property (readonly, nonatomic) CGRect nonoperationalFrame; // ivar: _nonoperationalFrame
@property (readonly, nonatomic) NSInteger orientation;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (nonatomic) CGFloat preferredNormalizedScale;
@property (readonly, nonatomic) CGFloat preferredScale; // ivar: _preferredScale
@property (readonly, nonatomic) CGFloat stashProgress;
@property (nonatomic, getter=isStashed) BOOL stashed;
@property (nonatomic) UIEdgeInsets stashedPadding;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *targetOverlayView; // ivar: _targetOverlayView
@property (readonly, weak, nonatomic) UIView *targetView;


-(BOOL)_hasInFlightLayoutAnimations;
-(BOOL)_hasValidInteractionTargetView;
-(BOOL)_isGestureRecognizerRecognizing:(id)arg0 ;
-(BOOL)_isGesturing;
-(BOOL)_isInteractive;
-(BOOL)_isPanning;
-(BOOL)_isPinching;
-(BOOL)_isPositionCloserToStashedLeftRegion:(struct CGPoint )arg0 closestPointOut:(struct CGPoint *)arg1 ;
-(BOOL)_isPreferredContentSizeDirty;
-(BOOL)_isRotating;
-(BOOL)_isSizeAffectedByLayoutReasons:(NSUInteger)arg0 ;
-(BOOL)_isSystemGestureRecognizer:(id)arg0 ;
-(BOOL)_regionIsStashedOne:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)gestureRecognizerShouldFailForMovementPastHysteresis:(id)arg0 ;
-(BOOL)isPinching;
-(BOOL)isRotating;
-(CGFloat)_currentRotation;
-(CGFloat)_currentScale;
-(CGFloat)_proratedScaleForNormalizedScale:(CGFloat)arg0 ;
-(CGFloat)_stashProgressForPosition:(struct CGPoint )arg0 ;
-(NSUInteger)__traitsForGesturesReasons:(NSUInteger)arg0 ;
-(NSUInteger)_canonicalPositionForPoint:(struct CGPoint )arg0 ;
-(id)_rotationHyperregion;
-(id)_scaleHyperregion;
-(id)initWithInteractionTargetView:(id)arg0 preferredContentSize:(struct CGSize )arg1 interactionSettings:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4 ;
-(id)positionHyperregion;
-(struct CGAffineTransform )_stashTabCompensationTransformForStashProgress:(CGFloat)arg0 reason:(NSUInteger)arg1 ;
-(struct CGPoint )_closestToDefaultCornersPosition;
-(struct CGPoint )_convertPointToInteractionTargetView:(struct CGPoint )arg0 fromSystemGestureRecognizer:(id)arg1 ;
-(struct CGPoint )_currentPosition;
-(struct CGPoint )_currentPositionForLayoutReason:(NSUInteger)arg0 ;
-(struct CGPoint )_roundPosition:(struct CGPoint )arg0 forSize:(struct CGSize )arg1 ;
-(struct CGSize )_currentSizeForLayoutReason:(NSUInteger)arg0 ;
-(struct CGSize )_lastSteadySize;
-(struct SBPIPPositionInteractionStateContext )_currentPositionInteractionStateContext;
-(struct UIEdgeInsets )_inFlightHitTestPadding;
-(void)__handleGesturesEndedState:(id)arg0 ;
-(void)__moveToAnchorPoint:(struct CGPoint )arg0 reason:(id)arg1 ;
-(void)_adjustContentViewAnchorPointForGestureRecognizer:(id)arg0 ;
-(void)_applyPreferredScale;
-(void)_cancelAllGestures;
-(void)_handleGestureBeganState:(id)arg0 ;
-(void)_handleGestureEndedState:(id)arg0 ;
-(void)_noteStashProgress:(CGFloat)arg0 withReason:(NSUInteger)arg1 ;
-(void)_performInitialLayoutIfNeeded;
-(void)_removeGestureRecognizers;
-(void)_resetAnchorPoint;
-(void)_setDefaults;
-(void)_setNeedsLayoutForTraits:(NSUInteger)arg0 withReason:(NSUInteger)arg1 behavior:(int)arg2 ;
// -(void)_setNeedsLayoutForTraits:(NSUInteger)arg0 withReason:(NSUInteger)arg1 behavior:(int)arg2 layoutCompletion:(id)arg3 interactionCompletion:(unk)arg4  ;
-(void)_setupDefaultInteractorsAndHyperRegions;
-(void)_setupForInitialFrame;
-(void)_setupGestureRecognizers;
-(void)_setupStateCapture;
-(void)_sizeChangeBeganWithBehavior:(int)arg0 ;
-(void)_sizeChangeEnded;
-(void)_updateHyperregionVisualizationIfNecessary;
-(void)_updateInteractorsAndCommit:(BOOL)arg0 ;
-(void)_updatePIPSizeGeometryContext;
-(void)_updatePreferredContentSize;
-(void)_updateSettingsDrivenParameters;
-(void)addPositionRegionComposer:(id)arg0 ;
-(void)dealloc;
-(void)handleExternalPanGesture:(id)arg0 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)handlePinchGesture:(id)arg0 ;
-(void)handleRotationGesture:(id)arg0 ;
-(void)layoutInteractedTraits:(NSUInteger)arg0 withReason:(NSUInteger)arg1 source:(id)arg2 ;
-(void)layoutWithFrame:(struct CGRect )arg0 reason:(id)arg1 source:(id)arg2 ;
-(void)positionRegionComposerDidInvalidate:(id)arg0 ;
-(void)positionRegionComposerNeedsUpdate:(id)arg0 behavior:(int)arg1 ;
-(void)setContentLayoutSettings:(id)arg0 animationBehavior:(int)arg1 ;
-(void)setPlatformMetrics:(id)arg0 contentSize:(struct CGSize )arg1 animationBehavior:(int)arg2 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)toggleUserPreferredScale;


@end


#endif