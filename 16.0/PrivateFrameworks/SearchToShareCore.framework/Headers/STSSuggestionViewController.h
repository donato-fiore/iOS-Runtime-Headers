// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSSUGGESTIONVIEWCONTROLLER_H
#define STSSUGGESTIONVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, STSSuggestionViewDelegate, STSSearchModelQuerySuggestionsDelegate, STSSuggestionViewControllerDelegate;


#import "STSSearchModel.h"
#import "STSSuggestionView.h"

@interface STSSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSSuggestionViewDelegate, STSSearchModelQuerySuggestionsDelegate>



@property (nonatomic) UIEdgeInsets contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) STSSearchModel *searchModel; // ivar: _searchModel
@property (weak, nonatomic) NSObject<STSSuggestionViewControllerDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) STSSuggestionView *view;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_hideNoticeOverlay;
-(void)_updateFooterOrigin;
-(void)_updateFooterOriginForBoundsHeight:(CGFloat)arg0 ;
-(void)clearSuggestions;
-(void)noticeViewDidDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchModelUpdatedQuerySuggestions:(id)arg0 ;
-(void)searchModelWillFetchQuerySuggestionsCompletions:(id)arg0 ;
-(void)suggestionViewDidTapLogo:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateContentOffset:(CGFloat)arg0 ;
-(void)updateQuerySuggestions:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif