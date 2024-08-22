// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDAILYROUTINESHORTCUTSETUPACTIONSELECTIONQUESTIONVIEWCONTROLLER_H
#define WFDAILYROUTINESHORTCUTSETUPACTIONSELECTIONQUESTIONVIEWCONTROLLER_H

@class UITableViewController, NSString, WFDailyRoutineShortcutSetupActionSelectionQuestion, WFActionDrawerResults;
@protocol WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController, WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;



@interface WFDailyRoutineShortcutSetupActionSelectionQuestionViewController : UITableViewController <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL parentShouldShowSkipButton;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupActionSelectionQuestion *question; // ivar: _question
@property (retain, nonatomic) WFActionDrawerResults *results; // ivar: _results
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithQuestion:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)loadResults;
-(void)siriSuggestionsTableViewCell:(id)arg0 didAppendAction:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif