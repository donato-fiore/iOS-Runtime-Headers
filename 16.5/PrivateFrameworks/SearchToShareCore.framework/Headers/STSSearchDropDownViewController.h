// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSSEARCHDROPDOWNVIEWCONTROLLER_H
#define STSSEARCHDROPDOWNVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol STSCategorySelectionDelegate, STSSuggestionSelectionDelegate, STSSearchModelUpdateDelegate, PopUpPresentationDelegate, PopUpLegalDelegate, STSKeyCommandDelegate, STSSearchDropDownViewControllerDelegate, PopUpSearchViewDelegate, PopUpPlugin;


#import "CategoriesDataSource.h"
#import "STSSearchModel.h"
#import "SuggestionsDataSource.h"
#import "STSDropDownRootView.h"

@interface STSSearchDropDownViewController : UIViewController <STSCategorySelectionDelegate, STSSuggestionSelectionDelegate, STSSearchModelUpdateDelegate, PopUpPresentationDelegate, PopUpLegalDelegate, STSKeyCommandDelegate>

 {
    NSString *_currentQuery;
    BOOL _didSendCategoryResultFeedback;
    NSUInteger _popUpShowing;
}


@property (retain, nonatomic) CategoriesDataSource *categoriesDataSource; // ivar: _categoriesDataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STSSearchDropDownViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PopUpSearchViewDelegate> *locationDelegate; // ivar: _locationDelegate
@property (retain, nonatomic) NSObject<PopUpPlugin> *popUpPlugin; // ivar: _popUpPlugin
@property (retain, nonatomic) NSString *query; // ivar: _query
@property (copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) STSSearchModel *searchModel; // ivar: _searchModel
@property (nonatomic) BOOL sendFeedbackOnViewDidAppear; // ivar: _sendFeedbackOnViewDidAppear
@property (retain, nonatomic) SuggestionsDataSource *suggestionsDataSource; // ivar: _suggestionsDataSource
@property (readonly) Class superclass;
@property (retain, nonatomic) STSDropDownRootView *view;


-(BOOL)shouldShowLegalNotice;
-(id)initWithSearchModel:(id)arg0 ;
-(void)_showLegalNotice;
-(void)_updateSuggestions;
-(void)categoryViewController:(id)arg0 didSelectCategory:(id)arg1 suggested:(BOOL)arg2 ;
-(void)categoryViewController:(id)arg0 didSelectRecent:(id)arg1 ;
-(void)categoryViewControllerDidSelectClearRecentsButton:(id)arg0 ;
-(void)clearRecents;
-(void)close;
-(void)didCloseDropDown;
-(void)didPressDownKey;
-(void)didPressReturnKey:(id)arg0 ;
-(void)didPressUpKey;
-(void)didRequestClose;
-(void)dropDownContentViewControllerShouldDismiss;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchModelUpdatedQuerySuggestions:(id)arg0 ;
-(void)searchModelWillFetchQuerySuggestionsCompletions:(id)arg0 ;
-(void)sendVisibleResultsFeedback;
-(void)showCategories;
-(void)showPickerAndPerformQuery:(id)arg0 requestType:(NSInteger)arg1 ;
-(void)showSuggestions;
-(void)showSuggestionsIfNeccessary;
-(void)suggestionViewController:(id)arg0 didSelectSuggestion:(id)arg1 suggested:(BOOL)arg2 ;


@end


#endif