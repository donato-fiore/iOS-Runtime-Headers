// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKIMAGEANALYSISINTERACTION_H
#define VKIMAGEANALYSISINTERACTION_H

@class NSString, NSArray, UIActivity, UIGestureRecognizer, UIView;
@protocol VKCImageAnalysisBaseViewDelegate, VKCVisualSearchCornerViewDelegate, UIInteraction, VKInteractionAnalyticsDelegate, VKImageAnalysisInteractionDelegate;

#import <Foundation/Foundation.h>

#import "VKImageAnalysis.h"
#import "VKImageAnalysisBarButtonItem.h"
#import "VKImageAnalysisButton.h"
#import "VKAnalyticsProcessor.h"
#import "VKAnalyticsSessionAccumulator.h"
#import "VKCImageAnalysisBaseView.h"
#import "VKCVisualSearchCornerView.h"

@interface VKImageAnalysisInteraction : NSObject <VKCImageAnalysisBaseViewDelegate, VKCVisualSearchCornerViewDelegate, UIInteraction>



@property (weak, nonatomic) NSObject<VKInteractionAnalyticsDelegate> *_analyticsDelegate; // ivar: __analyticsDelegate
@property (copy, nonatomic) NSString *_customAnalyticsIdentifier;
@property (nonatomic) NSUInteger activeInteractionTypes;
@property (nonatomic) BOOL allowLongPressForDataDetectorsInTextMode;
@property (retain, nonatomic) VKImageAnalysis *analysis; // ivar: _analysis
@property (retain, nonatomic) VKImageAnalysisBarButtonItem *analysisBarButtonItem; // ivar: _analysisBarButtonItem
@property (retain, nonatomic) VKImageAnalysisButton *analysisButton; // ivar: _analysisButton
@property (nonatomic) BOOL analysisButtonPrefersDarkGlyphWhenSelected;
@property (nonatomic) BOOL analysisButtonRequiresVisibleContentGating; // ivar: _analysisButtonRequiresVisibleContentGating
@property (retain, nonatomic) VKAnalyticsProcessor *analyticsProcessor; // ivar: _analyticsProcessor
@property (retain, nonatomic) VKAnalyticsSessionAccumulator *analyticsSession; // ivar: _analyticsSession
@property (nonatomic) NSUInteger analyticsTimeoutIndex; // ivar: _analyticsTimeoutIndex
@property (nonatomic) BOOL automaticallyShowVisualSearchResults; // ivar: _automaticallyShowVisualSearchResults
@property (retain, nonatomic) VKCImageAnalysisBaseView *baseView; // ivar: _baseView
@property (retain, nonatomic) NSArray *baseViewConstraints; // ivar: _baseViewConstraints
@property (nonatomic) BOOL buttonsVisible; // ivar: _buttonsVisible
@property (readonly, nonatomic) CGRect contentsRect;
@property (nonatomic) NSUInteger dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKImageAnalysisInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddVisualSearchCornerView; // ivar: _didAddVisualSearchCornerView
@property (nonatomic) BOOL didInteractWithVisualSearchItem; // ivar: _didInteractWithVisualSearchItem
@property (nonatomic) BOOL didLogAnalysisButtonVisible; // ivar: _didLogAnalysisButtonVisible
@property (nonatomic) BOOL didToggleAAButton; // ivar: _didToggleAAButton
@property (readonly, nonatomic) UIActivity *feedbackActivity;
@property (retain, nonatomic) UIGestureRecognizer *feedbackGestureRecognizer; // ivar: _feedbackGestureRecognizer
@property (nonatomic) BOOL forceAnalysisBarButtonItemEnabled; // ivar: _forceAnalysisBarButtonItemEnabled
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL isSettingAnalysis; // ivar: _isSettingAnalysis
@property (nonatomic) BOOL isUpdatingActiveTypes; // ivar: _isUpdatingActiveTypes
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view
@property (weak, nonatomic) UIView *viewForObservingContentMode;
@property (nonatomic) CGFloat visibleTextAreaThreshold; // ivar: _visibleTextAreaThreshold
@property (retain, nonatomic) VKCVisualSearchCornerView *visualSearchCornerButtonView; // ivar: _visualSearchCornerButtonView
@property (readonly, nonatomic) UIView *visualSearchCornerView;
@property (nonatomic) BOOL wantsAutomaticContentsRectCalculation;


+(id)keyPathsForValuesAffectingHasActiveTextSelection;
-(BOOL)analysisContainsTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)baseOverlayView:(id)arg0 shouldBeginInteractionAtPoint:(struct CGPoint )arg1 withTypes:(NSUInteger)arg2 ;
-(BOOL)dataDetectorExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)interactableItemExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)textExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)topLevelImplementsContentsRectDelegateForBaseView:(id)arg0 ;
-(BOOL)visualSearchExistsAtPoint:(struct CGPoint )arg0 ;
-(NSUInteger)deriveCurrentAutomaticState;
-(id)generatePlistsForScalingAndAlignment;
-(id)init;
-(id)initWithInteractionOptions:(NSUInteger)arg0 ;
-(id)presentingViewControllerForFeedbackProvider;
-(id)presentingViewControllerForImageAnalysisInteraction;
-(id)previewForDataDetectorElementView:(id)arg0 ;
-(id)resultItems;
-(id)viewForImageSnapshotForBaseView:(id)arg0 ;
-(struct CGRect )contentsRectForImageRecognitionBaseView:(id)arg0 ;
-(void)_provideFeedback;
-(void)aAAnalysisButtonPressed:(id)arg0 ;
-(void)addEventToAnalyticsSession:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)baseOverlayView:(id)arg0 analyticsEventDidOccur:(id)arg1 ;
-(void)baseOverlayView:(id)arg0 didFinishTransitionToNormalizedVisibleRect:(struct CGRect )arg1 ;
-(void)baseOverlayView:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)baseOverlayView:(id)arg0 didUpdateToNormalizedVisibleRect:(struct CGRect )arg1 ;
-(void)baseOverlayView:(id)arg0 prepareForCalloutAction:(SEL)arg1 competion:(id)arg2 ;
-(void)baseOverlayViewDismissVisualSearchController:(id)arg0 ;
-(void)beginNewAnalyticsSessionIfNecessary;
-(void)clearMatchedHighlightsIfNecessaryAnimated:(BOOL)arg0 ;
-(void)closeAndSendCurrentAnalyticsSession;
-(void)commonInit;
-(void)configureButtonsForState:(NSUInteger)arg0 updateActiveTypes:(BOOL)arg1 ;
-(void)configureForCurrentDerivedAutomaticStateWithUpdateActiveTypes:(BOOL)arg0 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)generateVisualSearchResultForItems:(id)arg0 queryID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)highlightMatchesForString:(id)arg0 animated:(BOOL)arg1 ;
-(void)highlightMatchesForStrings:(id)arg0 animated:(BOOL)arg1 ;
-(void)logButtonsVisibleStatus;
-(void)openInfoPaneForTopItem;
-(void)resetSelection;
-(void)scrollViewDidZoomToUnitRect:(struct CGRect )arg0 ;
-(void)sendAAButtonPressedDelegateCallbackIfNecessaryForSender:(id)arg0 ;
-(void)sendAnalyticsEventWithType:(NSInteger)arg0 source:(NSInteger)arg1 analysisButtonActive:(BOOL)arg2 ;
-(void)triggerTapToRadar;
-(void)triggerTapToRadar:(id)arg0 ;
-(void)updateForAnalyticsVisualSearchEventIfNecessary:(id)arg0 ;
-(void)visualSearchCornerView:(id)arg0 analyticsEventDidOccur:(id)arg1 ;
-(void)visualSearchCornerView:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)visualSearchCornerViewDidDismissVisualSearchController:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif