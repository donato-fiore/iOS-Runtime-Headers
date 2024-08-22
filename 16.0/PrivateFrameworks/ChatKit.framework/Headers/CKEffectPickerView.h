// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKEFFECTPICKERVIEW_H
#define CKEFFECTPICKERVIEW_H

@class UIView, NSMutableDictionary, CABackdropLayer, CALayer, UIButton, NSLayoutConstraint, NSString, NSMutableArray, UIFont, UILabel, NSArray, UICollectionView, UIPageControl, UIPanGestureRecognizer, UISegmentedControl;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, CKEffectPickerViewDelegate;


#import "CKBalloonView.h"
#import "CKChatControllerDummyAnimator.h"
#import "CKFullScreenEffectManager.h"

@interface CKEffectPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>



@property (retain, nonatomic) UIView *accessibilityBackdropView; // ivar: _accessibilityBackdropView
@property (retain, nonatomic) UIView *accessibilityCloseBackgroundView; // ivar: _accessibilityCloseBackgroundView
@property (retain, nonatomic) UIView *accessibilitySendBackgroundView; // ivar: _accessibilitySendBackgroundView
@property (retain, nonatomic) NSMutableDictionary *animatedCells; // ivar: _animatedCells
@property (retain, nonatomic) NSMutableDictionary *animationTimers; // ivar: _animationTimers
@property (retain, nonatomic) CABackdropLayer *backdrop; // ivar: _backdrop
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) CKBalloonView *balloonView; // ivar: _balloonView
@property (nonatomic) CGPoint balloonViewOrigin; // ivar: _balloonViewOrigin
@property (retain, nonatomic) CALayer *blueContrastLayer; // ivar: _blueContrastLayer
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) NSLayoutConstraint *closeButtonBottomConstraint; // ivar: _closeButtonBottomConstraint
@property (nonatomic) char controlColor; // ivar: _controlColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKEffectPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator; // ivar: _dummyAnimator
@property (retain, nonatomic) NSMutableArray *effectDescriptiveLabels; // ivar: _effectDescriptiveLabels
@property (retain, nonatomic) NSMutableArray *effectDotButtons; // ivar: _effectDotButtons
@property (retain, nonatomic) NSMutableDictionary *effectDotConstraintsThatChange; // ivar: _effectDotConstraintsThatChange
@property (retain, nonatomic) NSMutableArray *effectIdentifiers; // ivar: _effectIdentifiers
@property (retain, nonatomic) UIFont *effectLabelFont; // ivar: _effectLabelFont
@property (retain, nonatomic) NSMutableArray *effectLabels; // ivar: _effectLabels
@property (retain, nonatomic) NSMutableArray *effectSendButtons; // ivar: _effectSendButtons
@property (retain, nonatomic) CKFullScreenEffectManager *fsem; // ivar: _fsem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *hintBlackText; // ivar: _hintBlackText
@property (retain, nonatomic) UIView *hintContainer; // ivar: _hintContainer
@property (retain, nonatomic) UIView *hintSendButton; // ivar: _hintSendButton
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (nonatomic) BOOL isInDarkMode; // ivar: _isInDarkMode
@property (retain, nonatomic) NSLayoutConstraint *lastEffectDotTopConstraint; // ivar: _lastEffectDotTopConstraint
@property (retain, nonatomic) UILabel *mainLabel; // ivar: _mainLabel
@property (retain, nonatomic) NSLayoutConstraint *mainLabelBottomConstraint; // ivar: _mainLabelBottomConstraint
@property (copy, nonatomic) NSArray *momentIdentifiers; // ivar: _momentIdentifiers
@property (retain, nonatomic) UILabel *momentTitleLabel; // ivar: _momentTitleLabel
@property (retain, nonatomic) UICollectionView *momentsCollectionView; // ivar: _momentsCollectionView
@property (nonatomic) BOOL needsSwitcherAnimation; // ivar: _needsSwitcherAnimation
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) NSMutableDictionary *pausedAnimatedCells; // ivar: _pausedAnimatedCells
@property (retain, nonatomic) UIView *peekContainer; // ivar: _peekContainer
@property (retain, nonatomic) UIView *roundedContainerView; // ivar: _roundedContainerView
@property (retain, nonatomic) NSLayoutConstraint *roundedContainerViewTopConstraint; // ivar: _roundedContainerViewTopConstraint
@property (retain, nonatomic) UIView *roundedView; // ivar: _roundedView
@property (retain, nonatomic) CABackdropLayer *segmentedBackdrop; // ivar: _segmentedBackdrop
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (retain, nonatomic) UIButton *sendMomentButton; // ivar: _sendMomentButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UISegmentedControl *typeSegmentedControl; // ivar: _typeSegmentedControl
@property (retain, nonatomic) NSLayoutConstraint *typeSegmentedControlBottomConstraint; // ivar: _typeSegmentedControlBottomConstraint
@property (nonatomic) BOOL usesDarkVibrancyForLayers; // ivar: _usesDarkVibrancyForLayers


+(BOOL)shouldUseLargeScreenDimension;
-(BOOL)_keyboardIsOnTopOfEffectPickerWindow;
-(BOOL)shouldAnimatePreviousLabelForCancel:(id)arg0 ;
-(CGFloat)marginBetweenPickerDotButtons;
-(CGFloat)offsetYForLabelAtIndex:(NSInteger)arg0 withInitialY:(CGFloat)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)selectedMomentIndex;
-(id)_blackTextReplica;
-(id)_defaultSendAnimationContextForAnimationPreview;
-(id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 sendButtonFrame:(struct CGRect )arg1 balloonViewOrigin:(struct CGPoint )arg2 composition:(id)arg3 color:(char)arg4 ;
-(id)sendImage;
-(struct CGRect )_updateBalloonViewOrigin:(struct CGRect )arg0 forButtonFrame:(struct CGRect )arg1 ;
-(void)_accessibilityContrastStatusDidChange;
-(void)_adjustMainLabelAndTypeSegmentedControlIfNecessary;
-(void)_animateIn;
-(void)_animateInSendButton:(id)arg0 ;
-(void)_animateOut;
-(void)_animateOutSendButton:(id)arg0 ;
-(void)_animateSelectedEffectLabelAtIndex:(NSUInteger)arg0 fromPreviousIndex:(NSUInteger)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_applicationWillEnterForeground;
-(void)_panGesture:(id)arg0 ;
-(void)_resizeBalloon;
-(void)_setBalloonText:(id)arg0 withColor:(id)arg1 ;
-(void)_startSwitcherAnimationIfNecessary;
-(void)_stopBalloonAnimation;
-(void)_touchUpInsideCloseButton:(id)arg0 ;
-(void)_touchUpInsideDotButton:(id)arg0 ;
-(void)_touchUpInsideSendButton:(id)arg0 ;
-(void)_touchUpInsideSendMomentButton:(id)arg0 ;
-(void)_updateBalloonViewPositionAnimated:(BOOL)arg0 ;
-(void)_updateMomentsBackgroundColor;
-(void)_updateRoundedContainerView;
-(void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect )arg0 ;
-(void)addAnimationTimerForCell:(id)arg0 ;
-(void)addEffect:(id)arg0 withDescriptiveText:(id)arg1 withIdentifier:(id)arg2 ;
-(void)cancelImpactSelection;
-(void)checkAndUpdateForSpotlightEffect:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)effectTypeDidChange:(id)arg0 ;
-(void)handleTouchMoved:(struct CGPoint )arg0 ;
-(void)handleTouchUp:(struct CGPoint )arg0 ;
-(void)invalidateAllAnimationTimers;
-(void)layoutSubviews;
-(void)pageControlChanged:(id)arg0 ;
-(void)removeAnimationTimerForCell:(id)arg0 ;
-(void)resetDotConstraintsToDefault;
-(void)safeAreaInsetsDidChange;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setBalloonText:(id)arg0 ;
-(void)startAnimationPreviewForIdentifier:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateColor:(char)arg0 ;
-(void)updateHintTransition:(CGFloat)arg0 ;
-(void)updateMomentTitle:(BOOL)arg0 ;
-(void)updateViewColors;
-(void)updateViewColors:(BOOL)arg0 ;


@end


#endif