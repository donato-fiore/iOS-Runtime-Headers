// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDCANDIDATECONTROLLER_H
#define UIKEYBOARDCANDIDATECONTROLLER_H

@class NSArray, NSMutableArray, TUICandidateView, TIKeyboardCandidateResultSet, TIKeyboardCandidate, NSString, NSDictionary;
@protocol TUICandidateViewDelegate, UIGestureRecognizerDelegate, UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIViewPropertyAnimator.h"
#import "UIKeyboardCandidateViewConfiguration.h"
#import "UIKeyboardCandidateViewState.h"
#import "UIView.h"
#import "UIKeyboardCandidateInlineFloatingView.h"
#import "UIPanGestureRecognizer.h"
#import "UIKBRenderConfig.h"
#import "UIKBScreenTraits.h"

@interface UIKeyboardCandidateController : NSObject <TUICandidateViewDelegate, UIGestureRecognizerDelegate, UIKeyboardCandidateList>



@property (nonatomic) NSInteger activeCandidateViewType; // ivar: _activeCandidateViewType
@property (readonly, nonatomic) NSArray *activeCandidateViews;
@property (retain, nonatomic) NSMutableArray *activeViews; // ivar: _activeViews
@property (nonatomic) CGFloat additionalExtendedBarBackdropOffset; // ivar: _additionalExtendedBarBackdropOffset
@property (nonatomic) BOOL adjustForLeftHandBias; // ivar: _adjustForLeftHandBias
@property (retain, nonatomic) UIViewPropertyAnimator *animator; // ivar: _animator
@property (retain, nonatomic) TUICandidateView *bar; // ivar: _bar
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *barConfiguration; // ivar: _barConfiguration
@property (readonly, nonatomic) BOOL barIsExtended;
@property (retain, nonatomic) UIKeyboardCandidateViewState *barState; // ivar: _barState
@property (readonly, nonatomic) UIView *candidateBar;
@property (readonly, nonatomic) UIView *candidateKey;
@property (weak, nonatomic) NSObject<UIKeyboardCandidateListDelegate> *candidateListDelegate; // ivar: _candidateListDelegate
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // ivar: _candidateResultSet
@property (retain, nonatomic) TIKeyboardCandidate *currentCandidate; // ivar: _currentCandidate
@property (nonatomic) BOOL darkKeyboard; // ivar: _darkKeyboard
@property (nonatomic) BOOL darkKeyboardChanged; // ivar: _darkKeyboardChanged
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKeyboardCandidateControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedBarState; // ivar: _extendedBarState
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedInlineViewState; // ivar: _extendedInlineViewState
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedScrolledBarState; // ivar: _extendedScrolledBarState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *inlineCandidateView;
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *inlineConfiguration; // ivar: _inlineConfiguration
@property (nonatomic) CGRect inlineRect; // ivar: _inlineRect
@property (nonatomic) BOOL inlineRectIsVertical; // ivar: _inlineRectIsVertical
@property (copy, nonatomic) NSString *inlineText; // ivar: _inlineText
@property (retain, nonatomic) TUICandidateView *inlineView; // ivar: _inlineView
@property (retain, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineViewContainer; // ivar: _inlineViewContainer
@property (readonly, nonatomic) BOOL inlineViewIsExtended;
@property (retain, nonatomic) UIKeyboardCandidateViewState *inlineViewState; // ivar: _inlineViewState
@property (readonly, nonatomic) BOOL isExtended;
@property (retain, nonatomic) TUICandidateView *key; // ivar: _key
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *keyConfiguration; // ivar: _keyConfiguration
@property (retain, nonatomic) NSDictionary *opacities; // ivar: _opacities
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (nonatomic) BOOL reuseArrowButtonToExpandAssistantBarItems; // ivar: _reuseArrowButtonToExpandAssistantBarItems
@property (retain, nonatomic) UIKBScreenTraits *screenTraits; // ivar: _screenTraits
@property (nonatomic) CGFloat singleSlottedCellMargin; // ivar: _singleSlottedCellMargin
@property (nonatomic) CGFloat splitGap; // ivar: _splitGap
@property (readonly) Class superclass;


+(CGFloat)candidateViewAnimationDuration;
+(id)sharedInstance;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleNumberKey:(NSUInteger)arg0 ;
-(BOOL)handleTabKeyWithShift:(BOOL)arg0 ;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(BOOL)hasCandidates;
-(BOOL)isFloatingList;
-(BOOL)shouldShowDisambiguationCandidates;
-(BOOL)shouldShowDisambiguationCandidatesInExtendedView;
-(BOOL)shouldShowSortControlForConfiguration:(id)arg0 ;
-(BOOL)showCandidate:(id)arg0 ;
-(BOOL)showCandidate:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(CGFloat)candidateBarHeightForOrientation:(NSInteger)arg0 ;
-(CGFloat)rowHeightForBarForOrientation:(NSInteger)arg0 ;
-(NSInteger)candidateViewTypeForView:(id)arg0 ;
-(NSInteger)layoutDirectionForCurrentInputMode;
-(NSInteger)rowForCandidateAtIndex:(NSUInteger)arg0 ;
-(NSInteger)viewOffsetForCandidateAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)currentIndex;
-(NSUInteger)selectedSortIndex;
-(id)candidateAtIndex:(NSUInteger)arg0 ;
-(id)candidates;
-(id)firstNonEmptyActiveCandidateView;
-(id)init;
-(id)loadCandidateBar;
-(id)loadInlineCandidateView;
-(id)newCandidateKeyWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(id)secureCandidateRenderTraits;
-(id)snapshot;
-(id)statisticsIdentifier;
-(struct CGSize )maximumSizeForInlineView;
-(struct UIEdgeInsets )candidateBarEdgeInsetsForOrientation:(NSInteger)arg0 ;
-(void)acceptSelectedCandidate;
-(void)candidateAcceptedAtIndex:(NSUInteger)arg0 ;
-(void)candidateView:(id)arg0 didAcceptCandidate:(id)arg1 atIndexPath:(id)arg2 inGridType:(NSInteger)arg3 ;
-(void)candidateView:(id)arg0 didAcceptCandidate:(id)arg1 atIndexPath:(id)arg2 inGridType:(NSInteger)arg3 generateFeedback:(BOOL)arg4 ;
-(void)candidateViewDidTapArrowButton:(id)arg0 ;
-(void)candidateViewDidTapInlineText:(id)arg0 ;
-(void)candidateViewNeedsToExpand:(id)arg0 ;
-(void)candidateViewSelectionDidChange:(id)arg0 inGridType:(NSInteger)arg1 ;
-(void)candidateViewWillBeginDragging:(id)arg0 ;
-(void)candidatesDidChange;
-(void)clearCurrentCandidate;
-(void)collapse;
-(void)dealloc;
-(void)dimKeys:(id)arg0 ;
-(void)extendKeyboardBackdropHeight:(CGFloat)arg0 ;
-(void)loadDefaultStates;
-(void)panGestureRecognizerAction:(id)arg0 ;
-(void)removeInlineView;
-(void)resetSortControlIndexAfterCandidatesChanged;
-(void)revealHiddenCandidates;
-(void)setCandidates:(id)arg0 inlineText:(id)arg1 inlineRect:(struct CGRect )arg2 maxX:(CGFloat)arg3 layout:(BOOL)arg4 ;
-(void)setCandidates:(id)arg0 type:(int)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect )arg3 maxX:(CGFloat)arg4 layout:(BOOL)arg5 ;
-(void)setUIKeyboardCandidateListDelegate:(id)arg0 ;
-(void)setupAnimatorWithCurve:(NSInteger)arg0 ;
-(void)setupPanGestureRecognizerIfNeeded;
-(void)showCandidateAtIndex:(NSUInteger)arg0 ;
-(void)showCandidateAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)showCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)toggleBarExtended;
-(void)toggleBarExtendedUnanimated;
-(void)toggleBarExtendedWithAnimator:(id)arg0 ;
-(void)toggleInlineViewExtendedAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateConfigurations;
-(void)updateOpacitiesToState:(id)arg0 ;
-(void)updateStates;
-(void)updateStatesForBar;
-(void)updateStatesForInlineView;
-(void)updateStatesForKey;
-(void)updateStyles;


@end


#endif