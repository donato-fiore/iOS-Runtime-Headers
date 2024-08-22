// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPROFILEDETAILSVIEWCONTROLLER_H
#define DMCPROFILEDETAILSVIEWCONTROLLER_H

@class NSArray, NSString;


#import "DMCProfileTableViewController.h"
#import "DMCProfileViewModel.h"

@interface DMCProfileDetailsViewController : DMCProfileTableViewController

@property (nonatomic) int mode; // ivar: _mode
@property (retain, nonatomic) DMCProfileViewModel *profileViewModel; // ivar: _profileViewModel
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) BOOL shouldShowWarningText; // ivar: _shouldShowWarningText
@property (nonatomic) BOOL showTitleIfOnlyOneSection; // ivar: _showTitleIfOnlyOneSection
@property (copy, nonatomic) NSString *tableTitle; // ivar: _tableTitle
@property (nonatomic) CGFloat tableViewBottomInset; // ivar: _tableViewBottomInset
@property (nonatomic) BOOL viewControllerCanPop; // ivar: _viewControllerCanPop


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithProfileViewModel:(id)arg0 ;
-(id)initWithProfileViewModel:(id)arg0 mode:(int)arg1 ;
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