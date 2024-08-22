// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICOLLECTIONVIEWCONTROLLER_H
#define SEARCHUICOLLECTIONVIEWCONTROLLER_H

@class UIContextMenuInteraction, NSString, NSIndexPath, NSOrderedSet, NSMutableDictionary, NSMutableSet, TLKTableViewScrollTester;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, SearchUICollectionViewSizingDelegate, SearchUITableHeaderCommandDelegate, SearchUIRowModelViewDelegate, SearchUITableViewTesting, SearchUIFeedbackDelegateInternal, SearchUICommandDelegate, SFFeedbackListener, SearchUIResultsViewDelegate, SearchUISizingDelegate;


#import "SearchUIKeyboardableCollectionViewController.h"
#import "SearchUICollectionModel.h"
#import "SearchUICollectionPeekDelegate.h"
#import "SearchUICollectionViewAttributes.h"
#import "SearchUITableModel.h"

@interface SearchUICollectionViewController : SearchUIKeyboardableCollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, SearchUICollectionViewSizingDelegate, SearchUITableHeaderCommandDelegate, SearchUIRowModelViewDelegate, SearchUITableViewTesting, SearchUIFeedbackDelegateInternal>



@property (copy, nonatomic) id *cellWillDisplayHandler; // ivar: cellWillDisplayHandler
@property (retain, nonatomic) SearchUICollectionModel *collectionModel; // ivar: _collectionModel
@property (nonatomic) BOOL collectionViewAnimating; // ivar: _collectionViewAnimating
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate; // ivar: _commandDelegate
@property (retain, nonatomic) UIContextMenuInteraction *contextInteraction; // ivar: _contextInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragInteractionEnabled; // ivar: _dragInteractionEnabled
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener; // ivar: _feedbackListener
@property (retain, nonatomic) NSIndexPath *focusableIndexPath; // ivar: _focusableIndexPath
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isVisibleFeedbackEnabled; // ivar: _isVisibleFeedbackEnabled
@property (nonatomic) CGRect lastVisibleBounds; // ivar: _lastVisibleBounds
@property (nonatomic) NSUInteger lastVisibleFeedbackTrigger; // ivar: _lastVisibleFeedbackTrigger
@property (retain, nonatomic) NSOrderedSet *latestVisibleCardSectionsAccountedForInFeedback; // ivar: _latestVisibleCardSectionsAccountedForInFeedback
@property (retain, nonatomic) NSOrderedSet *latestVisibleResultsAccountedForInFeedback; // ivar: _latestVisibleResultsAccountedForInFeedback
@property (retain, nonatomic) NSOrderedSet *latestVisibleSectionHeadersAccountedForInFeedback; // ivar: _latestVisibleSectionHeadersAccountedForInFeedback
@property (retain, nonatomic) SearchUICollectionPeekDelegate *peekDelegate; // ivar: _peekDelegate
@property (retain, nonatomic) NSMutableDictionary *potentiallyVisibleCells; // ivar: _potentiallyVisibleCells
@property (retain, nonatomic) NSMutableDictionary *potentiallyVisibleHeaders; // ivar: _potentiallyVisibleHeaders
@property (nonatomic) NSInteger preferredPunchoutIndex; // ivar: _preferredPunchoutIndex
@property (retain, nonatomic) NSMutableSet *registeredCellIdentifiers; // ivar: _registeredCellIdentifiers
@property (weak) NSObject<SearchUIResultsViewDelegate> *resultsViewDelegate; // ivar: _resultsViewDelegate
@property (retain, nonatomic) TLKTableViewScrollTester *scrollTester; // ivar: _scrollTester
@property (readonly, nonatomic) SearchUICollectionViewAttributes *searchUIAttributes; // ivar: _searchUIAttributes
@property (nonatomic) BOOL shortenTopFloatingHeader; // ivar: _shortenTopFloatingHeader
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // ivar: _shouldUseInsetRoundedSections
@property (nonatomic) BOOL shouldUseStandardSectionInsets; // ivar: _shouldUseStandardSectionInsets
@property (weak) NSObject<SearchUISizingDelegate> *sizingDelegate; // ivar: _sizingDelegate
@property (retain, nonatomic) SearchUICollectionModel *stateRestoredCollectionModel; // ivar: _stateRestoredCollectionModel
@property (nonatomic) CGPoint stateRestoredScrollPoint; // ivar: _stateRestoredScrollPoint
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUITableModel *tableModel; // ivar: _tableModel
@property (copy, nonatomic) id *tableViewDidUpdateHandler; // ivar: tableViewDidUpdateHandler
@property (copy, nonatomic) id *tableViewWillUpdateHandler; // ivar: tableViewWillUpdateHandler
@property (nonatomic) BOOL threeDTouchEnabled;


-(BOOL)_canShowWhileLocked;
-(BOOL)canHighlightRowAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)forwardFeedbackForSelector:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldDrawTopAndBottomSeparators;
-(BOOL)updateMustAccountForLayout;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)cellForItemAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)commandEnvironment;
-(id)currentTableModel;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)indexPathForFocusView:(id)arg0 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)keyboardableCollectionView;
-(id)searchUICommandEnvironment;
-(id)viewForRowModel:(id)arg0 ;
-(id)visibleViewsInPotentiallyVisibleViews:(id)arg0 withinRegion:(struct CGRect )arg1 ;
-(struct CGRect )scrollToIndexPath:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )contentInsetsForLayoutEnvironment:(id)arg0 section:(NSInteger)arg1 ;
-(void)_collectionView:(id)arg0 orthogonalScrollViewDidScroll:(id)arg1 section:(NSInteger)arg2 ;
-(void)addOrbInteractionIfNeeded;
-(void)cardSectionViewDidInvalidateSize:(id)arg0 animate:(BOOL)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(NSInteger)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contentSizeDidChange:(struct CGSize )arg0 ;
-(void)deselectSelectedRows;
-(void)didUpdateKeyboardFocusToResult:(id)arg0 cardSection:(id)arg1 ;
-(void)invalidateLayout;
-(void)performScrollTestWithCompletion:(id)arg0 ;
// -(void)performScrollTestWithHandlerForFirstScrollCompletion:(id)arg0 completion:(unk)arg1  ;
-(void)performTapCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(void)popAtIndexPath:(id)arg0 ;
-(void)purgeMemory;
-(void)removeRowModel:(id)arg0 ;
-(void)resignTextField;
-(void)restoreResultsIfNeeded;
-(void)scrollAndFocusAtIndexPath:(id)arg0 ;
-(void)scrollToRowModel:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sendVisibleFeedbackIfNecessary;
-(void)showViewController:(id)arg0 ;
-(void)skipDown;
-(void)skipUp;
-(void)tapAtIndexPath:(id)arg0 ;
-(void)toggleShowMoreForSection:(NSUInteger)arg0 ;
// -(void)updateCollectionModel:(id)arg0 withBatchUpdates:(id)arg1 completion:(unk)arg2  ;
-(void)updateContentScrolledOffScreenStatus;
-(void)updateLayoutMarginsForSectionHeader:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)updateTableForNewCellHeightAnimated:(BOOL)arg0 ;
-(void)updateViewControllerTitle:(id)arg0 ;
-(void)updateWithCardSection:(id)arg0 ;
-(void)updateWithResultSections:(id)arg0 ;
-(void)updateWithTableModel:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif