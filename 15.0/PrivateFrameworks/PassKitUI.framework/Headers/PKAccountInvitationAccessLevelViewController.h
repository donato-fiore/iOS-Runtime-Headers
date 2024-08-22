// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTINVITATIONACCESSLEVELVIEWCONTROLLER_H
#define PKACCOUNTINVITATIONACCESSLEVELVIEWCONTROLLER_H

@class NSArray, UIButton, NSIndexPath, NSString;
@protocol UITableViewDelegate, PKViewControllerPreflightable;


#import "PKPaymentSetupTableViewController.h"
#import "PKAccountInvitationController.h"
#import "PKTableHeaderView.h"

@interface PKAccountInvitationAccessLevelViewController : PKPaymentSetupTableViewController <UITableViewDelegate, PKViewControllerPreflightable>

 {
    PKAccountInvitationController *_controller;
    NSArray *_accessLevelOptions;
    PKTableHeaderView *_headerView;
    UIButton *_footerView;
    CGFloat _previousHeaderHeight;
    CGFloat _previousFooterHeight;
    NSIndexPath *_loadingIndexPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_handleFooterButtonTapped:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 atIndexPath:(id)arg1 ;
-(void)_updateCell:(id)arg0 showSpinner:(BOOL)arg1 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif