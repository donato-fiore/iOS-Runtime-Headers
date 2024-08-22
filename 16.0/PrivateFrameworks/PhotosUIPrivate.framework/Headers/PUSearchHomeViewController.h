// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSEARCHHOMEVIEWCONTROLLER_H
#define PUSEARCHHOMEVIEWCONTROLLER_H

@class PXGadgetUIViewController, PXProgrammaticNavigationDestination, NSString;
@protocol UISearchControllerDelegate, PXChangeObserver, PXViewControllerEventTracker;


#import "PUSearchHomeGadgetDataSourceManager.h"

@interface PUSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate, PXChangeObserver>

 {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXViewControllerEventTracker> *searchControllerEventTracker; // ivar: _searchControllerEventTracker
@property (retain, nonatomic) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager; // ivar: _searchHomeDataSourceManager
@property (readonly) Class superclass;


+(Class)gadgetSpecClass;
-(BOOL)pu_handleSecondTabTap;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)searchBarIsActive;
-(BOOL)shouldPreventPlaceholder;
-(NSInteger)scrollAnimationIdentifier;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_adjustedIndexPaths:(id)arg0 withSection:(NSUInteger)arg1 ;
-(id)_visibleZeroKeywordIndexPaths;
-(id)init;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(id)px_gridPresentation;
-(id)px_navigationDestination;
-(id)searchControllerSearchText;
-(id)searchControllerSearchTokens;
-(void)_clearSearchField;
-(void)_configureSearchNavigationBar;
-(void)_handleAnalyticsNotification:(id)arg0 ;
-(void)_notifyAnalyticsSearchAction:(NSUInteger)arg0 ;
-(void)_registerNotificationsForAnalytics;
-(void)_reportZeroKeywordsToParsec:(BOOL)arg0 searchCancelled:(BOOL)arg1 ;
-(void)_scrollViewStoppedScrolling;
-(void)_unregisterNotificationsForAnalytics;
-(void)_updateNavigationBarForSharedLibrary;
-(void)activateSearchField;
-(void)dealloc;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didPresentSearchController:(id)arg0 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performRecentSearch:(id)arg0 ;
-(void)ppt_dismissKeyboard;
-(void)ppt_prepareForSearchScrollingTestWithSearchText:(id)arg0 completion:(id)arg1 ;
-(void)ppt_prepareForSearchTest:(id)arg0 ;
-(void)ppt_prepareZeroKeywordRequest:(id)arg0 ;
-(void)presentForSearchHashtag:(id)arg0 ;
-(void)presentOneYearAgo;
-(void)presentSearchWithTerms:(id)arg0 searchCategories:(id)arg1 ;
-(void)presentSearchWithText:(id)arg0 searchCategory:(NSUInteger)arg1 ;
-(void)presentSiriSearchRequest:(id)arg0 resultCount:(NSUInteger)arg1 ;
-(void)presentSpotlightSearch:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)selectZeroKeyword:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)zeroKeywordGadgetDidScroll:(id)arg0 ;
-(void)zeroKeywordGadgetsDidReload;


@end


#endif