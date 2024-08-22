// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE23FBKTEAMPICKERCONTROLLER_H
#define _TTC12FEEDBACKCORE23FBKTEAMPICKERCONTROLLER_H

@class UITableViewController, NSArray;
@protocol _TtP12FeedbackCore21FBKTeamPickerDelegate_;


#import "FBKBugFormStub.h"
#import "FBKTeam.h"

@interface _TtC12FeedbackCore23FBKTeamPickerController : UITableViewController {
    ? cellReuseIdentifier;
    ? teams;
}


@property (nonatomic, retain) FBKBugFormStub *formStub; // ivar: formStub
@property (nonatomic, weak) NSObject<_TtP12FeedbackCore21FBKTeamPickerDelegate_> *pickerDelegate; // ivar: pickerDelegate
@property (nonatomic, retain) FBKTeam *selectedTeam; // ivar: selectedTeam
@property (nonatomic) BOOL showsDismissButton; // ivar: showsDismissButton
@property (nonatomic, copy) NSArray *teams;


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)dismissSelf;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif