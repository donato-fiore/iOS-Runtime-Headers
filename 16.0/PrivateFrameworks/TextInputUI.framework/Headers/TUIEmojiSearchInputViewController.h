// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIEMOJISEARCHINPUTVIEWCONTROLLER_H
#define TUIEMOJISEARCHINPUTVIEWCONTROLLER_H

@class UIInputViewController, UITapGestureRecognizer, NSTimer, NSArray, NSString, NSDate, NSLayoutConstraint, UIViewController<UIPredictiveViewController>;
@protocol TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, UIPredictiveViewController, Staging_UIKBFeedbackGenerating, TUIEmojiSearchInputViewControllerDelegate;


#import "TUIEmojiSearchSource.h"
#import "TUIEmojiSearchResultsCollectionViewController.h"
#import "TUIEmojiVariantSelectorView.h"
#import "TouchExclusionView.h"
#import "TUIEmojiSearchAnalyticsSession.h"
#import "TUIEmojiSearchView.h"

@interface TUIEmojiSearchInputViewController : UIInputViewController <TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, UIPredictiveViewController>

 {
    TUIEmojiSearchSource *_emojiSearchSource;
    TUIEmojiSearchResultsCollectionViewController *_resultsViewController;
    TUIEmojiVariantSelectorView *_variantSelectorView;
    UITapGestureRecognizer *_variantSelectorDismissGesture;
    TouchExclusionView *_variantSelectorDismissOverlayView;
    NSTimer *_resultsUpdateRateLimitTimer;
    NSArray *_rateLimitedResults;
    NSString *_rateLimitedSearchQuery;
    BOOL _canAutocorrectWithCurrentInputMode;
    NSTimer *_waitForAutocorrectionDelayTimer;
    NSString *_exactSearchQuery;
    NSString *_autocorrectedSearchQuery;
    NSDate *_lastActivationDate;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    TUIEmojiSearchAnalyticsSession *_analyticsSession;
    id<Staging_UIKBFeedbackGenerating> *_feedbackGenerator;
}


@property (retain, nonatomic) UIViewController<UIPredictiveViewController> *childPredictionViewController; // ivar: _childPredictionViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUIEmojiSearchInputViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly, nonatomic) TUIEmojiSearchView *emojiSearchView; // ivar: _emojiSearchView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesFloatingStyle; // ivar: _usesFloatingStyle


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)_canShowWhileLocked;
-(BOOL)hidesExpandableButton;
-(BOOL)isVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct UIEdgeInsets )_keyboardInsets;
-(void)_didRecognizeVariantDismissGesture:(id)arg0 ;
-(void)_dismissVariantSelector;
-(void)_displayResults:(id)arg0 forExactQuery:(id)arg1 autocorrectedQuery:(id)arg2 ;
-(void)_keyboardInputModeDidChange:(id)arg0 ;
-(void)_selectedEmojiString:(id)arg0 completion:(id)arg1 ;
-(void)_variantSelectorValueChanged:(id)arg0 ;
-(void)autocorrectionListDidBecomeAvailable:(id)arg0 ;
-(void)emojiSearchResultsController:(id)arg0 didRequestVariantSelectorForEmojiToken:(id)arg1 fromRect:(struct CGRect )arg2 ;
-(void)emojiSearchResultsController:(id)arg0 didSelectEmoji:(id)arg1 ;
-(void)emojiSearchSource:(id)arg0 didProduceResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3 ;
-(void)emojiSearchTextField:(id)arg0 didChangeSearchString:(id)arg1 ;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg0 ;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg0 ;
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg0 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg0 ;
-(void)emojiSearchTextFieldWillClear:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif