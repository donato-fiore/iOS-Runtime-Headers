// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMAGICHEADWHEELVIEW_H
#define SFMAGICHEADWHEELVIEW_H

@class UIView, UIImageView, NSMutableArray, UIColor, UIVisualEffectView, NSMutableDictionary, NSUUID, UIControl, UIViewPropertyAnimator, SFMagicHeadSettings;
@protocol SFMagicHeadDelegate, SFMagicHeadWheelViewDelegate, OS_dispatch_source;


#import "SFFloatSpringProperty.h"
#import "SFMagicHeadPlaceholderView.h"
#import "SFMagicHead.h"

@interface SFMagicHeadWheelView : UIView <SFMagicHeadDelegate>



@property (retain) UIImageView *canChangeSelectionView; // ivar: _canChangeSelectionView
@property NSInteger consecutiveRotationChangeRequests; // ivar: _consecutiveRotationChangeRequests
@property (retain) UIView *contentView; // ivar: _contentView
@property (weak) NSObject<SFMagicHeadWheelViewDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableArray *dots; // ivar: _dots
@property (retain) UIColor *dotsColor; // ivar: _dotsColor
@property (retain) UIVisualEffectView *dotsContainer; // ivar: _dotsContainer
@property CGFloat dotsRadius; // ivar: _dotsRadius
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property NSInteger guidanceState; // ivar: _guidanceState
@property (retain) NSMutableDictionary *identifierToSelectionMarkerView; // ivar: _identifierToSelectionMarkerView
@property BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic, getter=isMagicHead) BOOL magicHead; // ivar: _magicHead
@property (nonatomic) BOOL noUWBCapableDevices; // ivar: _noUWBCapableDevices
@property (readonly, nonatomic) NSUUID *nodeIdentifier; // ivar: _nodeIdentifier
@property NSUInteger numberOfDots; // ivar: _numberOfDots
@property (retain) SFFloatSpringProperty *pitchSpringProperty; // ivar: _pitchSpringProperty
@property (retain) SFMagicHeadPlaceholderView *placeHolderView; // ivar: _placeHolderView
@property CGFloat previousAngle; // ivar: _previousAngle
@property NSInteger proposedRotationState; // ivar: _proposedRotationState
@property CGFloat radius; // ivar: _radius
@property (retain) SFFloatSpringProperty *rollSpringProperty; // ivar: _rollSpringProperty
@property BOOL rotatedAfterSelectionWasMade; // ivar: _rotatedAfterSelectionWasMade
@property (retain) SFFloatSpringProperty *rotationSpringProperty; // ivar: _rotationSpringProperty
@property NSInteger rotationState; // ivar: _rotationState
@property (retain, nonatomic) SFMagicHead *selectedHead; // ivar: _selectedHead
@property (retain) UIControl *selectedHeadControl; // ivar: _selectedHeadControl
@property (retain) UIViewPropertyAnimator *selectionAnimator; // ivar: _selectionAnimator
@property (retain, nonatomic) SFMagicHeadSettings *settings; // ivar: _settings
@property (retain) NSObject<OS_dispatch_source> *suppressGuidanceHapticsTimer; // ivar: _suppressGuidanceHapticsTimer


+(CGFloat)clampedRotationDegrees:(CGFloat)arg0 ;
+(CGFloat)rotationWithShortestDistanceFromDegrees:(CGFloat)arg0 toDegrees:(CGFloat)arg1 ;
+(Class)layerClass;
-(BOOL)canChangeSelectionWhenInRotationState:(NSInteger)arg0 guidanceState:(NSInteger)arg1 description:(*id)arg2 ignoreDisabling:(BOOL)arg3 ;
-(BOOL)canChangeSelectionWithDescription:(*id)arg0 ;
-(BOOL)canChangeSelectionWithDescription:(*id)arg0 ignoreDisabling:(BOOL)arg1 ;
-(BOOL)configureSelectedHeadWithNode:(id)arg0 slotNode:(id)arg1 isSameAsSelected:(BOOL)arg2 ;
-(BOOL)inGuidanceStates;
-(BOOL)inGuidanceStatesWhenInState:(NSInteger)arg0 ;
-(BOOL)transitionToGuidanceState:(NSInteger)arg0 ;
-(BOOL)updateSelectedHead:(id)arg0 ;
-(BOOL)updateSelectedNode:(id)arg0 ;
-(BOOL)updateSelectedSlotNode:(id)arg0 ;
-(NSInteger)triggerCountForCandidateRotationState:(NSInteger)arg0 ;
-(id)initWithNumberOfDots:(NSUInteger)arg0 dotsRadius:(CGFloat)arg1 isMagicHead:(BOOL)arg2 ;
-(struct CGPoint )centerOfContentBounds;
-(struct CGRect )squareBounds;
-(void)cozyUpAnimationForHead:(id)arg0 ;
-(void)createSprings;
-(void)dealloc;
-(void)deviceRotatedToDegrees:(CGFloat)arg0 withPitch:(CGFloat)arg1 andRoll:(CGFloat)arg2 ;
-(void)hapticsForHideDots:(BOOL)arg0 ;
-(void)hideDots:(BOOL)arg0 withAnimationDuration:(CGFloat)arg1 ;
-(void)hideSelection:(BOOL)arg0 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)loadSettings;
-(void)lostSelectedNode;
-(void)magicHead:(id)arg0 requestingSubtitleTextChangeForState:(NSInteger)arg1 ;
-(void)magicHeadDidFinishTransferForHead:(id)arg0 ;
-(void)magicHeadDidStartTransferForHead:(id)arg0 ;
-(void)magicHeadDidTerminateTransferForHead:(id)arg0 ;
-(void)pulseSelectedHead;
-(void)scaleDots:(BOOL)arg0 ;
-(void)selectAnimationForHead:(id)arg0 withDismissHead:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMarkerViewForIdentifier:(id)arg0 atPositionDegree:(CGFloat)arg1 ;
-(void)startSuppressGuidanceHapticsTimer;
-(void)stopSuppressGuidanceHapticsTimer;
-(void)transitionToRotationState:(NSInteger)arg0 bypassSampling:(BOOL)arg1 ;
-(void)triggerContractDotsHaptic;
-(void)triggerExpandDotsHaptic;
-(void)triggerReSelectedHaptic;
-(void)triggerSelectedHaptic;
-(void)updateCanChangeSelectionUI;
-(void)updatePlaceHolderView;
-(void)updateSelectionControlState;
-(void)updateVelocityWithCurrentAngle:(CGFloat)arg0 ;
-(void)updateVisibilityOfComponents;


@end


#endif