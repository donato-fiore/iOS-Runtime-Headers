// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSPICKER_H
#define STSPICKER_H

@class UIViewController, NSUUID, NSMutableArray, NSMutableSet, NSArray, NSIndexPath, STSMailComposeViewController, SFSearchResult, UIColor, NSString;
@protocol UIViewControllerPreviewingDelegate, STSResultDetailViewControllerDelegate, MFMailComposeViewControllerDelegate, UIViewControllerTransitioningDelegate, STSLoadMoreFooterDelegate, STSSearchModelDelegate, UICollectionViewDataSource, STSGridLayoutDelegate, STSZKWBrowserHeaderViewDelegate, UISearchBarDelegate, UIViewControllerPreviewing, OS_dispatch_queue, STSPickerSelectionDelegate;


#import "STSSearchModel.h"
#import "STSDetailTransitionAnimator.h"
#import "STSPickerView.h"

@interface STSPicker : UIViewController <UIViewControllerPreviewingDelegate, STSResultDetailViewControllerDelegate, MFMailComposeViewControllerDelegate, UIViewControllerTransitioningDelegate, STSLoadMoreFooterDelegate, STSSearchModelDelegate, UICollectionViewDataSource, STSGridLayoutDelegate, STSZKWBrowserHeaderViewDelegate, UISearchBarDelegate>

 {
    STSSearchModel *_searchModel;
    NSUUID *_lastSearchId;
    NSMutableArray *_displayedResults;
    NSMutableSet *_queuedImageURLs;
    NSUInteger _sectionsTag;
    NSInteger _lastInsertedIndexesCount;
    NSMutableSet *_lastInsertedIndexesWaitingToLoad;
    NSArray *_visiblePredictions;
    NSIndexPath *_detailResultIndexPath;
    NSIndexPath *_activeDownloadIndexPath;
    CGFloat _activeDownloadProgress;
    id<UIViewControllerPreviewing> *_previewingContext;
    STSMailComposeViewController *_feedbackMailComposer;
    STSDetailTransitionAnimator *_detailTransitionAnimator;
    BOOL _isLoadingMoreResults;
    BOOL _needsReloadAfterLayout;
    BOOL _showSuggestions;
    BOOL _isScrolling;
    BOOL _isSnapShotting;
    NSObject<OS_dispatch_queue> *_displayedResultsQueue;
    SFSearchResult *_previewingSearchResult;
    NSMutableSet *_visibleResultsSent;
    CGPoint _startScrollPosition;
    BOOL _debugMode;
    UIColor *_originalColor;
    NSMutableArray *_debugItems;
    NSString *_currentQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *headerCellReuseIdentifier; // ivar: _headerCellReuseIdentifier
@property (readonly, nonatomic) STSPickerView *pickerView;
@property (readonly, nonatomic) NSArray *querySuggestions;
@property (weak, nonatomic) NSObject<STSPickerSelectionDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) STSPickerView *view;


-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_detailViewControllerForIndexPath:(id)arg0 ;
-(id)_loadMoreFooter;
-(id)_noticeTextForSearchError:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)getTapToRadarPunchOut:(id)arg0 ;
-(id)initWithSearchModel:(id)arg0 showSuggestions:(BOOL)arg1 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)snapshotImage;
-(void)_beginDownloadingResultAtIndexPath:(id)arg0 ;
-(void)_cancelActiveDownload;
-(void)_fetchImageWithURL:(id)arg0 priority:(NSInteger)arg1 forCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_handleDebugGesture:(id)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_loadMoreResultsIfNecessary;
-(void)_presentDetailViewControllerForIndexPath:(id)arg0 ;
-(void)_presentNoticeWithText:(id)arg0 ;
-(void)_reportFeedbackDisplayedResultsDidScroll:(BOOL)arg0 ;
-(void)_updatePredictedSuggestionsForSize:(struct CGSize )arg0 ;
-(void)cancelImageDownloads;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)detailViewControllerDidInsert:(id)arg0 ;
-(void)detailViewControllerDidSelectProviderLink:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)headerDidSelectCancelButton:(id)arg0 ;
-(void)headerView:(id)arg0 didRequestCompletion:(id)arg1 ;
-(void)headerView:(id)arg0 didSearchFor:(id)arg1 ;
-(void)headerView:(id)arg0 didSelectSuggestionButtonAtIndex:(NSUInteger)arg1 ;
-(void)headerViewDidDeleteText;
-(void)headerViewDidSelectSearchButton:(id)arg0 ;
-(void)loadMoreFooterDidTapLogo;
-(void)loadView;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)performSearchWithQueryString:(id)arg0 requestType:(NSInteger)arg1 ;
-(void)performZKWSearchQuery;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)resetContent;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)searchModel:(id)arg0 insertedResultsAtIndexPaths:(id)arg1 removedResultsAtIndexPaths:(id)arg2 ;
-(void)searchModelUpdatedPredictedSuggestions:(id)arg0 ;
-(void)sendVisibleResultsFeedback;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentOffset:(CGFloat)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willResignActiveWithConversation:(id)arg0 ;
-(void)willTransitionToPresentationStyle:(NSUInteger)arg0 ;


@end


#endif