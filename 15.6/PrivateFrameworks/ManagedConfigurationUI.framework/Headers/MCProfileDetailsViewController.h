// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPROFILEDETAILSVIEWCONTROLLER_H
#define MCPROFILEDETAILSVIEWCONTROLLER_H

@class NSArray, NSString;


#import "MCUITableViewController.h"
#import "MCUIProfile.h"

@interface MCProfileDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCUIProfile *UIProfile; // ivar: _UIProfile
@property (nonatomic) int mode; // ivar: _mode
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) BOOL shouldShowWarningText; // ivar: _shouldShowWarningText
@property (nonatomic) BOOL showTitleIfOnlyOneSection; // ivar: _showTitleIfOnlyOneSection
@property (copy, nonatomic) NSString *tableTitle; // ivar: _tableTitle
@property (nonatomic) CGFloat tableViewBottomInset; // ivar: _tableViewBottomInset
@property (nonatomic) BOOL viewControllerCanPop; // ivar: _viewControllerCanPop


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_profileChanged:(id)arg0 ;
-(void)_setup;
-(void)_updateStateForCurrentMode;
-(void)reloadSectionArray;
-(void)setProfileDetailsMode:(int)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif