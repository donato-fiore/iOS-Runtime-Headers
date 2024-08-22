// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCATEGORYVIEWCONTROLLER_H
#define STSCATEGORYVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, STSCategoryTitleTableViewCellDelegate, UIScrollViewDelegate, STSCategoryViewControllerDelegate;


#import "STSSearchModel.h"
#import "STSCategoryView.h"

@interface STSCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSCategoryTitleTableViewCellDelegate, UIScrollViewDelegate>

 {
    BOOL _isScrolling;
    NSMutableArray *_displayedResults;
}


@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic) UIEdgeInsets contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *model; // ivar: _model
@property (retain, nonatomic) NSArray *recents; // ivar: _recents
@property (retain, nonatomic) STSSearchModel *searchModel; // ivar: _searchModel
@property (weak, nonatomic) NSObject<STSCategoryViewControllerDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (nonatomic) BOOL sendFeedbackOnViewDidAppear; // ivar: _sendFeedbackOnViewDidAppear
@property (readonly) Class superclass;
@property (retain, nonatomic) STSCategoryView *view;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_searchResultIdentifierForSuggestion:(id)arg0 recent:(BOOL)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_commitClearRecents;
-(void)_reportFeedbackDisplayedResultsDidScroll:(BOOL)arg0 ;
-(void)clearButton:(id)arg0 pressedForCategoryResult:(id)arg1 ;
-(void)clearRecents;
-(void)reload;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)sendRankSectionsFeedback;
-(void)sendVisibleResultsFeedback;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateContentOffset:(CGFloat)arg0 ;
-(void)updateModel;
-(void)updateRecents:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif