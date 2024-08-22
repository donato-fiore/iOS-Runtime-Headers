// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSURVEYQUESTIONSMULTIPLEANSWERSELECTIONTABLEVIEWCONTROLLER_H
#define PXSURVEYQUESTIONSMULTIPLEANSWERSELECTIONTABLEVIEWCONTROLLER_H

@class UITableViewController, UIBarButtonItem, NSMutableSet, NSArray;



@interface PXSurveyQuestionsMultipleAnswerSelectionTableViewController : UITableViewController

@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSMutableSet *currentlySelectedReasons; // ivar: _currentlySelectedReasons
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) NSArray *reasons; // ivar: _reasons


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 reasons:(id)arg2 currentlySelectedReasons:(id)arg3 completion:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleCancel;
-(void)_handleDone;
-(void)_setupNavigationBar:(id)arg0 message:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif