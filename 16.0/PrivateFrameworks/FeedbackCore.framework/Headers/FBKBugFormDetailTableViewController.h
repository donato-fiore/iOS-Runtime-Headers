// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGFORMDETAILTABLEVIEWCONTROLLER_H
#define FBKBUGFORMDETAILTABLEVIEWCONTROLLER_H

@class UITableViewController, NSSet, NSString, UISearchController, NSArray;
@protocol UISearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating, FBKBugFormEditorDelegate;


#import "FBKAnswer.h"
#import "FBKQuestion.h"

@interface FBKBugFormDetailTableViewController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating>



@property (retain, nonatomic) FBKAnswer *answer; // ivar: _answer
@property (retain, nonatomic) NSSet *checkboxAnswersAtStart; // ivar: _checkboxAnswersAtStart
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBKBugFormEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FBKQuestion *question; // ivar: _question
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) NSArray *searchResultChoices; // ivar: _searchResultChoices
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *visibleChoices; // ivar: _visibleChoices


-(BOOL)canBecomeFirstResponder;
-(BOOL)searchBar:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)getPathToScrollTo;
-(id)keyCommands;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)beginSearch;
-(void)commitSelection;
-(void)dealloc;
-(void)didGetClientSideResolvedNotification:(id)arg0 ;
-(void)recordCheckboxAnswers;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)selectNext;
-(void)selectPrevious;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCheckboxDelegateIfNeeded;
-(void)updateChoices;
-(void)updateSearchBar;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif