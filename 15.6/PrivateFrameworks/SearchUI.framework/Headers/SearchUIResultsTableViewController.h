// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIRESULTSTABLEVIEWCONTROLLER_H
#define SEARCHUIRESULTSTABLEVIEWCONTROLLER_H

@class NSString, NSMutableSet, UIView, NSArray, NSMutableOrderedSet, UIControl<UITextInput>;
@protocol SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, SearchUIResultsTableBridgingProtocol, SearchUICommandDelegate, SFFeedbackListener, SearchUIKeyboardableTableViewDelegate, SearchUIResultsViewDelegate, SearchUISizingDelegate;


#import "SearchUITableViewController.h"
#import "SearchUITableModel.h"

@interface SearchUIResultsTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, SearchUIResultsTableBridgingProtocol>



@property (nonatomic) CGFloat cachedHeaderHeight; // ivar: _cachedHeaderHeight
@property (copy, nonatomic) id *cellWillDisplayHandler;
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (retain, nonatomic) NSMutableSet *expandedSections; // ivar: _expandedSections
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat headerHeight;
@property (retain, nonatomic) NSArray *hiddenSections; // ivar: _hiddenSections
@property (weak) NSObject<SearchUIKeyboardableTableViewDelegate> *interactionDelegate;
@property (nonatomic) BOOL isVisibleFeedbackEnabled; // ivar: _isVisibleFeedbackEnabled
@property (nonatomic) NSUInteger lastVisibleResultsFeedbackEvent; // ivar: _lastVisibleResultsFeedbackEvent
@property (retain, nonatomic) NSArray *latestVisibleHeadersAccountedForInFeedback; // ivar: _latestVisibleHeadersAccountedForInFeedback
@property (retain, nonatomic) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback; // ivar: _latestVisibleResultsAccountedForInFeedback
@property (retain, nonatomic) NSMutableSet *potentiallyVisibleCells; // ivar: _potentiallyVisibleCells
@property (retain, nonatomic) NSMutableOrderedSet *potentiallyVisibleHeaders; // ivar: _potentiallyVisibleHeaders
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (weak) NSObject<SearchUIResultsViewDelegate> *resultsViewDelegate;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded; // ivar: _sectionsThatHaveBeenExpanded
@property (nonatomic) BOOL shortenTopFloatingHeader; // ivar: _shortenTopFloatingHeader
@property (nonatomic) BOOL shouldHideTableCellsUnderKeyboard;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (weak) NSObject<SearchUISizingDelegate> *sizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (copy, nonatomic) id *tableViewDidUpdateHandler;
@property (copy, nonatomic) id *tableViewWillUpdateHandler;
@property (weak) UIControl<UITextInput> *textField;
@property (nonatomic) BOOL threeDTouchEnabled;


+(id)hiddenSectionsFromSections:(id)arg0 ;
-(BOOL)sectionShouldBeExpanded:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)updateMustAccountForLayout;
-(CGFloat)offScreenContentScrollDistance;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)cellForIndexPath:(id)arg0 reuseIfPossible:(BOOL)arg1 ;
-(id)commandEnvironment;
-(id)init;
-(id)majorScrollView;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)visibleResultsWithinRegion:(struct CGRect )arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didPresentToResumeSearch:(BOOL)arg0 ;
-(void)expandCellsIfNeeded;
-(void)highlightResult:(id)arg0 ;
-(void)modalViewControllerClosed;
-(void)performExpansion:(BOOL)arg0 withSectionIndex:(NSUInteger)arg1 ;
-(void)purgeAndResetTable;
-(void)purgeMemory;
-(void)replaceResult:(id)arg0 withResult:(id)arg1 ;
-(void)scrollSectionToTop:(NSUInteger)arg0 animate:(BOOL)arg1 ;
-(void)scrollTableToTop;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sendVisibleFeedbackIfNecessary;
-(void)showMoreSectionsWithShowMoreButtonRowModel:(id)arg0 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)toggleExpansionForSection:(id)arg0 ;
-(void)toggleShowMoreForSection:(NSUInteger)arg0 ;
-(void)updateWithResultSections:(id)arg0 scrollToTop:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismiss;


@end


#endif