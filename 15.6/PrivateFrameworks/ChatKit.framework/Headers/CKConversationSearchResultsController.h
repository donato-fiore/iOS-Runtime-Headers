// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONSEARCHRESULTSCONTROLLER_H
#define CKCONVERSATIONSEARCHRESULTSCONTROLLER_H

@class UITableViewController, NSString, NSArray, CSSearchQuery;
@protocol UISearchResultsUpdating, CKConversationResultsControllerDelegate;


#import "CKSpotlightQuery.h"

@interface CKConversationSearchResultsController : UITableViewController <UISearchResultsUpdating>



@property (retain, nonatomic) CKSpotlightQuery *currentQuery; // ivar: _currentQuery
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationResultsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL gotTopConversationResults; // ivar: _gotTopConversationResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *messageResults; // ivar: _messageResults
@property (readonly, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSString *selectedChatGUID; // ivar: _selectedChatGUID
@property (readonly) Class superclass;
@property (retain, nonatomic) CSSearchQuery *topConversationsQuery; // ivar: _topConversationsQuery
@property (retain, nonatomic) NSArray *topConversationsResults; // ivar: _topConversationsResults


-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(Class)_conversationListCellClass;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_topConversationsQueryForText:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_reloadDataForNewResults;
-(void)_selectChatGUID:(id)arg0 ;
-(void)_updateTableViewRowHeights;
-(void)cancelCurrentQuery;
-(void)dealloc;
-(void)loadView;
-(void)searchEnded;
-(void)setCurrentSearchResultSelected:(BOOL)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)topConversationsQueryCompletedWithResults:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif