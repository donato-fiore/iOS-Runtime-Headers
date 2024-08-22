// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE26FBKBUGFORMPICKERCONTROLLER_H
#define _TTC12FEEDBACKCORE26FBKBUGFORMPICKERCONTROLLER_H

@class UITableViewController;
@protocol UIAdaptivePresentationControllerDelegate, _TtP12FeedbackCore24FBKBugFormPickerDelegate_;


#import "FBKBugFormStub.h"
#import "FBKTeam.h"

@interface _TtC12FeedbackCore26FBKBugFormPickerController : UITableViewController <UIAdaptivePresentationControllerDelegate>

 {
    ? formStubs;
    ? stubsPredicate;
    ? formsRefreshObserver;
}


@property (nonatomic) NSInteger context; // ivar: context
@property (nonatomic, retain) FBKBugFormStub *currentSelection; // ivar: currentSelection
@property (nonatomic, weak) NSObject<_TtP12FeedbackCore24FBKBugFormPickerDelegate_> *pickerDelegate; // ivar: pickerDelegate
@property (nonatomic, retain) FBKTeam *team; // ivar: team


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStubsPredicate:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)dismissPicker;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif