// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCIMAGEANALYSISBASEVIEW_H
#define VKCIMAGEANALYSISBASEVIEW_H

@class NSString, UIImageView, NSArray, NSIndexSet, UIScrollView, UILabel, UIView;
@protocol VKCImageDataDetectorViewDelegate, VKCImageTextSelectionViewDelegate, VKCImageVisualSearchViewDelegate, VKCImageCustomHighlightViewDelegate, VKAnalysisDebugInfoProvider, _UIScrollViewScrollObserver, VKCImageAnalysisBaseViewDelegate;


#import "VKPlatformView.h"
#import "VKCImageAnalysisResult.h"
#import "VKCImageDataDetectorView.h"
#import "VKCAnalysisDebugMenuProvider.h"
#import "VKCImageCustomHighlightView.h"
#import "VKTextRange.h"
#import "VKCImageTextSelectionView.h"
#import "VKCImageVisualSearchView.h"

@interface VKCImageAnalysisBaseView : VKPlatformView <VKCImageDataDetectorViewDelegate, VKCImageTextSelectionViewDelegate, VKCImageVisualSearchViewDelegate, VKCImageCustomHighlightViewDelegate, VKAnalysisDebugInfoProvider, _UIScrollViewScrollObserver>



@property (nonatomic) NSUInteger activeInteractionTypes; // ivar: _activeInteractionTypes
@property (retain, nonatomic) VKCImageAnalysisResult *analysisResult; // ivar: _analysisResult
@property (nonatomic) BOOL clientDidSetNormalizedRect; // ivar: _clientDidSetNormalizedRect
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (copy, nonatomic) NSString *customAnalyticsIdentifier; // ivar: _customAnalyticsIdentifier
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (retain, nonatomic) VKCImageDataDetectorView *dataDetectorView; // ivar: _dataDetectorView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *debugImageView; // ivar: _debugImageView
@property (retain, nonatomic) VKCAnalysisDebugMenuProvider *debugMenuProvider; // ivar: _debugMenuProvider
@property (weak, nonatomic) NSObject<VKCImageAnalysisBaseViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddVisualSearchCornerView; // ivar: _didAddVisualSearchCornerView
@property (nonatomic) BOOL didLogContentsRectError; // ivar: _didLogContentsRectError
@property (nonatomic) CGRect frameWhenResigningActive; // ivar: _frameWhenResigningActive
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightSelectableItems;
@property (retain, nonatomic) NSArray *highlightStrings; // ivar: _highlightStrings
@property (retain, nonatomic) NSIndexSet *highlightStringsIndexSet; // ivar: _highlightStringsIndexSet
@property (nonatomic) BOOL isAnalysisVisible; // ivar: _isAnalysisVisible
@property (readonly, nonatomic) NSArray *keyPathsAffectingContentMode;
@property (weak, nonatomic) id *loggingParentObject; // ivar: _loggingParentObject
@property (nonatomic) BOOL longPressDataDetectorsInTextMode; // ivar: _longPressDataDetectorsInTextMode
@property (nonatomic) CGRect normalizedVisibleRect; // ivar: _normalizedVisibleRect
@property (retain, nonatomic) VKCImageCustomHighlightView *regexHighlightView; // ivar: _regexHighlightView
@property (readonly, nonatomic) VKCImageCustomHighlightView *regexHighlightViewIfExists;
@property (weak, nonatomic) UIScrollView *scrollViewToObserve; // ivar: _scrollViewToObserve
@property (readonly, nonatomic) _NSRange selectedRange;
@property (retain, nonatomic) VKTextRange *selectedTextRangeBeforeDataDetectorMenu; // ivar: _selectedTextRangeBeforeDataDetectorMenu
@property (nonatomic) BOOL stringHighlightsActive; // ivar: _stringHighlightsActive
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *textInfoView; // ivar: _textInfoView
@property (retain, nonatomic) VKCImageTextSelectionView *textSelectionView; // ivar: _textSelectionView
@property (readonly, nonatomic) CGFloat totalBoundingBoxTextArea;
@property (readonly, nonatomic) CGFloat totalQuadTextArea;
@property (weak, nonatomic) UIView *viewForObservingContentMode; // ivar: _viewForObservingContentMode
@property (readonly, nonatomic) CGRect visibleImageRect;
@property (nonatomic) VKVisibleTextAreaInfo visibleTextAreaInfo; // ivar: _visibleTextAreaInfo
@property (nonatomic) BOOL visibleTextAreaInfoIsValid; // ivar: _visibleTextAreaInfoIsValid
@property (retain, nonatomic) VKCImageVisualSearchView *visualSearchView; // ivar: _visualSearchView
@property (nonatomic) BOOL wantsAutomaticContentsRectCalculation; // ivar: _wantsAutomaticContentsRectCalculation


+(id)keyPathsForValuesAffectingContentsRect;
+(id)keyPathsForValuesAffectingHasActiveTextSelection;
-(BOOL)analysisContainsTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsInteractiveItemAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsTextAtPoint:(struct CGPoint )arg0 ;
-(BOOL)containsVisualSearchItemAtPoint:(struct CGPoint )arg0 ;
-(BOOL)dataDetectorView:(id)arg0 dataDetectorInteractionShouldBeginAtPoint:(struct CGPoint )arg1 ;
-(BOOL)textSelectionView:(id)arg0 dataDetectorExistsAtPoint:(struct CGPoint )arg1 ;
-(BOOL)textSelectionView:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(BOOL)visualSearchItemView:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(NSUInteger)dataDetectorTypeAtPoint:(struct CGPoint )arg0 ;
-(id)dataDetectorElementAtPoint:(struct CGPoint )arg0 fromTextSelectionView:(id)arg1 ;
-(id)dataDetectorElementPoint:(struct CGPoint )arg0 requestingView:(id)arg1 ;
-(id)highlightView:(id)arg0 selectionRectsForRanges:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)nonTextNormalizedHighlightAllQuadsForTextSelectionView:(id)arg0 ;
-(id)presentingViewControllerForImageAnalysisInteraction;
-(id)presentingViewControllerForInteractionWithDataDetectorView:(id)arg0 ;
-(id)previewForDataDetectorElementView:(id)arg0 ;
-(id)viewForImageSnapshotForTextSelectionView:(id)arg0 ;
-(struct CGRect )calculateNormalizedVisibleRect;
-(struct VKVisibleTextAreaInfo )calculateVisibleTextAreaInfo;
-(void)_logVisualSearchHintAvailabilityUpdate;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_updateAnalysisVisibility;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)automaticallyShowVisualSearchResultsIfApplicable;
-(void)clearDataDetectorViewIfNecessary;
-(void)clearRegexHighlightsAnimated:(BOOL)arg0 updateActiveTypes:(BOOL)arg1 ;
-(void)clearStringHighlightsAnimated:(BOOL)arg0 ;
-(void)clearTextSelectionViewIfNecessary;
-(void)clearVisualSearchViewIfNecessary;
-(void)configureForActiveTypes:(NSUInteger)arg0 ;
-(void)configureForCurrentActiveInteractionTypes;
-(void)dataDetectorView:(id)arg0 analyticsEventOccured:(id)arg1 ;
-(void)dealloc;
-(void)debugButtonDidTap:(id)arg0 ;
-(void)didMoveToWindow;
-(void)generateVisualSearchResultForItems:(id)arg0 queryID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)highlightMatchesWithString:(id)arg0 animated:(BOOL)arg1 ;
-(void)invaliateVisibleTextAreInfo;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetSelection;
-(void)safeAreaInsetsDidChange;
-(void)scrollViewDidChange:(id)arg0 ;
-(void)scrollViewDidZoomToUnitRect:(struct CGRect )arg0 ;
-(void)scrollViewWillChange:(id)arg0 ;
-(void)sendActiveInteractionTypesDidChangeAnalyticsEvent:(NSInteger)arg0 ;
-(void)sendAnalysisDidChangeAnalyticsEvent;
-(void)sendVisualSearchAnalyticsWithDidBecomeActive:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)showTopVisualSearchResult;
-(void)textSelectionView:(id)arg0 analyticsEventOccured:(id)arg1 ;
-(void)textSelectionView:(id)arg0 boundsDidChangeFromRect:(struct CGRect )arg1 toRect:(struct CGRect )arg2 ;
-(void)textSelectionView:(id)arg0 prepareForCalloutAction:(SEL)arg1 competion:(id)arg2 ;
-(void)textSelectionView:(id)arg0 requestsDataDetectorActivationAtPoint:(struct CGPoint )arg1 ;
-(void)textSelectionView:(id)arg0 selectionDidChange:(id)arg1 ;
-(void)triggerTapToRadar;
-(void)updateAndNotifyAfterValidNormalizedVisibleRectChange;
-(void)updateAndNotifyAfterValidNormalizedVisibleRectChangeIfNecessary;
-(void)updateCurrentDisplayedViewContentsRect;
-(void)updateDebugButtonIfNecessary;
-(void)updateNormalizedVisibleRectIfNecessary;
-(void)updateSubviewsToMatchBounds;
-(void)useInteractionOptions:(NSUInteger)arg0 ;
-(void)visualSearchItemView:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)visualSearchItemViewDidDismissController:(id)arg0 ;
-(void)visualSearchView:(id)arg0 analyticsEventOccured:(id)arg1 ;
-(void)willDismissMenuForDataDetectorView:(id)arg0 ;
-(void)willDisplayMenuForDataDetectorView:(id)arg0 ;


@end


#endif