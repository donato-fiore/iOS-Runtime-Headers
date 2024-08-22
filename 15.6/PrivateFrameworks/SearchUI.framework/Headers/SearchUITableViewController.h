// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUITABLEVIEWCONTROLLER_H
#define SEARCHUITABLEVIEWCONTROLLER_H

@class UIContextMenuInteraction, NSString, TLKTableViewScrollTester;
@protocol SearchUITableViewSizingDelegate, UITableViewDelegatePrivate, SearchUITableViewTesting, SearchUIFeedbackDelegateInternal, SearchUICommandDelegate, SFFeedbackListener, SearchUIResultsViewDelegate, SearchUISizingDelegate;


#import "SearchUIKeyboardableTableViewController.h"
#import "SearchUIPeekDelegate.h"
#import "SearchUITableModel.h"
#import "SearchUITableView.h"

@interface SearchUITableViewController : SearchUIKeyboardableTableViewController <SearchUITableViewSizingDelegate, UITableViewDelegatePrivate, SearchUITableViewTesting, SearchUIFeedbackDelegateInternal>



@property (copy, nonatomic) id *cellWillDisplayHandler; // ivar: cellWillDisplayHandler
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate; // ivar: _commandDelegate
@property (retain, nonatomic) UIContextMenuInteraction *contextInteraction; // ivar: _contextInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener; // ivar: _feedbackListener
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIPeekDelegate *peekDelegate; // ivar: _peekDelegate
@property (nonatomic) NSInteger preferredPunchoutIndex; // ivar: _preferredPunchoutIndex
@property (weak) NSObject<SearchUIResultsViewDelegate> *resultsViewDelegate; // ivar: _resultsViewDelegate
@property (retain, nonatomic) TLKTableViewScrollTester *scrollTester; // ivar: _scrollTester
@property (nonatomic) BOOL shouldUseInsetRoundedSections; // ivar: _shouldUseInsetRoundedSections
@property (nonatomic) BOOL shouldUseStandardSectionInsets; // ivar: _shouldUseStandardSectionInsets
@property (weak) NSObject<SearchUISizingDelegate> *sizingDelegate; // ivar: _sizingDelegate
@property (nonatomic) CGPoint stateRestoredScrollPoint; // ivar: _stateRestoredScrollPoint
@property (retain, nonatomic) SearchUITableModel *stateRestoredTableModel; // ivar: _stateRestoredTableModel
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUITableModel *tableModel; // ivar: _tableModel
@property (retain, nonatomic) SearchUITableView *tableView;
@property (nonatomic) BOOL tableViewAnimating; // ivar: _tableViewAnimating
@property (copy, nonatomic) id *tableViewDidUpdateHandler; // ivar: tableViewDidUpdateHandler
@property (copy, nonatomic) id *tableViewWillUpdateHandler; // ivar: tableViewWillUpdateHandler
@property (nonatomic) BOOL threeDTouchEnabled;


-(BOOL)_canShowWhileLocked;
-(BOOL)forwardFeedbackForSelector:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)updateMustAccountForLayout;
-(CGFloat)offScreenContentScrollDistance;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)cardSectionForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 reuseIfPossible:(BOOL)arg1 ;
-(id)commandEnvironment;
-(id)currentTableModel;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)nextCardForIndexPath:(id)arg0 ;
-(id)punchoutPickerDismissText:(id)arg0 ;
-(id)punchoutPickerTitleForIndexPath:(id)arg0 ;
-(id)punchoutsForIndexPath:(id)arg0 ;
-(id)resultForIndexPath:(id)arg0 ;
-(id)searchUICommandEnvironment;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGRect )scrollToIndexPath:(id)arg0 ;
-(void)addOrbInteractionIfNeeded;
-(void)cardSectionViewDidInvalidateSize:(id)arg0 animate:(BOOL)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(NSInteger)arg0 ;
-(void)contentSizeDidChange:(struct CGSize )arg0 ;
-(void)deselectSelectedRows;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)performScrollTestWithCompletion:(id)arg0 ;
// -(void)performScrollTestWithHandlerForFirstScrollCompletion:(id)arg0 completion:(unk)arg1  ;
-(void)performTapCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(void)popAtIndexPath:(id)arg0 ;
-(void)purgeMemory;
-(void)removeRowModel:(id)arg0 ;
-(void)resignTextField;
-(void)restoreResultsIfNeeded;
-(void)sceneDidActivate:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sendFeedbackForCardSectionEngagement:(id)arg0 atIndexPath:(id)arg1 withTriggerEvent:(NSUInteger)arg2 ;
-(void)showViewController:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tapAtIndexPath:(id)arg0 ;
-(void)toggleShowMoreForSection:(NSUInteger)arg0 ;
-(void)updateContentScrolledOffScreenStatus;
-(void)updateLayoutMargins;
-(void)updateLayoutMarginsWithSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 ;
-(void)updateTableForNewCellHeightAnimated:(BOOL)arg0 ;
-(void)updateTableModel:(id)arg0 withInsertedSections:(id)arg1 deletedSections:(id)arg2 ;
-(void)updateViewControllerTitle:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDismissViewController:(id)arg0 ;


@end


#endif