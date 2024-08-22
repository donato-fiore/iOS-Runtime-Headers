// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSSEARCHBROWSERROOTVIEWCONTROLLER_H
#define STSSEARCHBROWSERROOTVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSString;
@protocol STSSuggestionViewControllerDelegate, STSCategoryViewControllerDelegate, UISearchBarDelegate, STSPickerSelectionDelegate, STSSearchBrowserRootViewControllerDelegate;


#import "STSCategoryViewController.h"
#import "STSFeedbackReporter.h"
#import "STSPicker.h"
#import "STSSearchBrowserHeaderView.h"
#import "STSSearchModel.h"
#import "STSSuggestionViewController.h"
#import "STSSearchBrowserRootView.h"

@interface STSSearchBrowserRootViewController : UIViewController <STSSuggestionViewControllerDelegate, STSCategoryViewControllerDelegate, UISearchBarDelegate>

 {
    UIViewController *_currentChildViewController;
    UIViewController *_legalNoticeViewController;
    CGFloat _keyboardHeight;
    CGFloat _topInset;
    CGFloat _bottomInset;
    NSMutableArray *_recentQueries;
    BOOL _didSendCategoryResultFeedback;
    NSMutableArray *_constraints;
}


@property (retain, nonatomic) STSCategoryViewController *categoryViewController; // ivar: _categoryViewController
@property (retain, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) STSFeedbackReporter *feedbackReporter; // ivar: _feedbackReporter
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<STSPickerSelectionDelegate> *pickerSelectionDelegate; // ivar: _pickerSelectionDelegate
@property (retain, nonatomic) STSPicker *pickerViewController; // ivar: _pickerViewController
@property (nonatomic) NSUInteger presentationStyle; // ivar: _presentationStyle
@property (nonatomic) BOOL requestedExpandedPresentation; // ivar: _requestedExpandedPresentation
@property (readonly, nonatomic) STSSearchBrowserHeaderView *searchHeaderView;
@property (readonly, nonatomic) STSSearchModel *searchModel; // ivar: _searchModel
@property (weak, nonatomic) NSObject<STSSearchBrowserRootViewControllerDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (retain, nonatomic) STSSuggestionViewController *suggestionViewController; // ivar: _suggestionViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) STSSearchBrowserRootView *view;


-(BOOL)isPickerVisible;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(id)initWithSearchModel:(id)arg0 ;
-(void)_addQueryToRecents:(id)arg0 ;
-(void)_clearRecents;
-(void)_clearSuggestions;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_showLegalNotice;
-(void)_transitionContentFromViewController:(id)arg0 toViewController:(id)arg1 completion:(id)arg2 ;
-(void)_updateContentInsets;
-(void)categoryViewController:(id)arg0 didSelectCategory:(id)arg1 suggested:(BOOL)arg2 ;
-(void)categoryViewController:(id)arg0 didSelectRecent:(id)arg1 ;
-(void)categoryViewControllerDidSelectClearRecentsButton:(id)arg0 ;
-(void)categoryViewControllerScrollViewWillBeginDragging:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)fetchCategories;
-(void)loadView;
-(void)resetContentOffset;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)sendVisibleResultsFeedback;
-(void)setBottomInset:(CGFloat)arg0 ;
-(void)setTopInset:(CGFloat)arg0 ;
-(void)showCategories;
-(void)showPickerAndPerformQuery:(id)arg0 requestType:(NSInteger)arg1 ;
-(void)showSuggestions;
-(void)suggestionViewController:(id)arg0 didSelectSuggestionAtIndex:(NSUInteger)arg1 ;
-(void)suggestionViewControllerDidTapLogo:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif