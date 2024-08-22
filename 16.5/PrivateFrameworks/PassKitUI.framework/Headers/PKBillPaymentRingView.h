// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBILLPAYMENTRINGVIEW_H
#define PKBILLPAYMENTRINGVIEW_H

@class UIView, PKBillPaymentSuggestedAmountList, NSArray, NSDictionary, NSDecimalNumber, PKBillPaymentSuggestedAmount, PKRenderLoop, UISelectionFeedbackGenerator, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UILabel, UIColor, NSString;
@protocol UIGestureRecognizerDelegate, PKRenderLoopDelegate, PKBillPaymentRingViewDataSource, PKBillPaymentRingViewDelegate;


#import "PKBillPaymentRingGradientState.h"
#import "PKRingGradientView.h"
#import "PKBillPaymentCircularView.h"
#import "PKEnterCurrencyAmountView.h"
#import "PKCurvedTextLabel.h"

@interface PKBillPaymentRingView : UIView <UIGestureRecognizerDelegate, PKRenderLoopDelegate>

 {
    PKBillPaymentSuggestedAmountList *_suggestedAmountList;
    NSArray *_suggestedAmountViews;
    CGFloat _amountRoundingUnit;
    CGFloat _minimumPaymentAmount;
    CGFloat _maximumPaymentAmount;
    NSDictionary *_suggestedAmoutImages;
    NSArray *_suggestedAmountAngles;
    NSDictionary *_suggestedAmountsForAngle;
    NSDictionary *_standardRingStates;
    NSDictionary *_colorStops;
    NSDecimalNumber *_displayAmount;
    NSDecimalNumber *_overrideDisplayAmount;
    NSDecimalNumber *_effectiveDisplayAmount;
    BOOL _selectedSuggestedAmountIsTarget;
    PKBillPaymentSuggestedAmount *_selectedSuggestedAmount;
    PKBillPaymentSuggestedAmount *_highlightedSuggestedAmount;
    NSDecimalNumber *_pinnedAmount;
    CGFloat _pinnedAmountAngle;
    NSUInteger _pinnedAmountAngleIndex;
    PKRenderLoop *_renderLoop;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_pressRecognizer;
    UIPanGestureRecognizer *_dragRecognizer;
    CGFloat _lastDrawTime;
    ? _spring;
    ? _angleState;
    ? _responseSpring;
    ? _responseState;
    CGFloat _responseSpringElapsedDuration;
    ? _scaleSpring;
    ? _scaleState;
    BOOL _dragging;
    BOOL _pressed;
    NSInteger _dragCapture;
    BOOL _ignoreTouches;
    BOOL _dotsVisible;
    CGFloat _interestLabelAlpha;
    BOOL _needsInitialDisplay;
    NSDecimalNumber *_initialDisplayAmount;
    CGFloat _overrideGradientStartAngle;
    PKBillPaymentRingGradientState *_overrideGradientState;
    PKRingGradientView *_ringView;
    PKBillPaymentCircularView *_handleView;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    UILabel *_interestLabel;
    PKCurvedTextLabel *_topCurvedTextLabel;
    PKCurvedTextLabel *_bottomCurvedTextLabel;
    BOOL _userSelectedAngleChange;
}


@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) UIColor *currentEndColor;
@property (readonly, copy, nonatomic) UIColor *currentStartColor;
@property (weak, nonatomic) NSObject<PKBillPaymentRingViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKBillPaymentRingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSmall; // ivar: _isSmall
@property (readonly, nonatomic) CGFloat ringWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat targetAngle;


-(BOOL)_isAmount:(id)arg0 withinRoundingUnitOfAmount:(id)arg1 ;
-(BOOL)_preferredPausedState;
-(BOOL)_setDisplayAmount:(id)arg0 ;
-(BOOL)_updateEffectiveDisplayAmount;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_angleForAmount:(id)arg0 ;
-(CGFloat)_angleForAngleIndex:(NSUInteger)arg0 ;
-(CGFloat)_angleForPosition:(struct CGPoint )arg0 ;
-(CGFloat)_angleForRecognizer:(id)arg0 ;
-(CGFloat)_offsetAngle:(CGFloat)arg0 ;
-(CGFloat)_offsetCurrentAngle;
-(NSUInteger)_segmentEndAngleIndexForAngle:(CGFloat)arg0 ;
-(NSUInteger)_unnormalizedAngleIndexForAngle:(CGFloat)arg0 ;
-(id)_blendFromGradientState:(id)arg0 toState:(id)arg1 withProgress:(CGFloat)arg2 ;
-(id)_gradientStateForSuggestedAmount:(id)arg0 ;
-(id)_roundedAmountForAngle:(CGFloat)arg0 ;
-(id)_suggestedAmountForAngleIndex:(NSUInteger)arg0 ;
-(id)_suggestedAmountImageForSuggestedAmount:(id)arg0 ;
-(id)_targetGradientStateForAngle:(CGFloat)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSuggestedAmountList:(id)arg0 delegate:(id)arg1 dataSource:(id)arg2 ;
-(struct CGPoint )_center;
-(struct CGPoint )_centerPointAtAngle:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createStandardColors;
-(void)_createSuggestedAmountAngles;
-(void)_createSuggestedAmountRingColorStops;
-(void)_createSuggestedAmountsImageDictionary;
-(void)_dragEnded:(id)arg0 ;
-(void)_dragMoved:(id)arg0 ;
-(void)_dragMovedToAngle:(CGFloat)arg0 normalizedRadius:(CGFloat)arg1 ;
-(void)_dragRecognizerChanged:(id)arg0 ;
-(void)_dragStarted:(id)arg0 ;
-(void)_pauseRenderLoop;
-(void)_pressRecognized:(id)arg0 ;
-(void)_setDotsVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setHighlightedSuggestedAmount:(id)arg0 ;
-(void)_setResponse:(CGFloat)arg0 ;
-(void)_setSelectedSuggestedAmount:(id)arg0 ;
-(void)_tapRecognized:(id)arg0 ;
-(void)_updateCurvedText;
-(void)_updateForEnabledState;
-(void)_updateHandleImage;
-(void)_updateInterestText;
-(void)_updatePausedState;
-(void)_updateScaleTarget;
-(void)completeInitialDisplayAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didUpdateAngleSpringPosition;
-(void)didUpdateAngleSpringTarget;
-(void)didUpdateScaleSpringPosition;
-(void)layoutSubviews;
-(void)prepareForInitialDisplayWithAmount:(id)arg0 ;
-(void)renderLoop:(id)arg0 drawAtTime:(CGFloat)arg1 ;
-(void)setAngle:(CGFloat)arg0 animated:(BOOL)arg1 forExplicitAmount:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)setHandleScale:(CGFloat)arg0 animated:(BOOL)arg1 ;


@end


#endif