// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTRESTRICTIONSVIEWCONTROLLER_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTRESTRICTIONSVIEWCONTROLLER_H

@class PKFamilyMember, PKPeerPaymentPreferences, NSIndexPath;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKPeerPaymentSetupFlowController.h"
#import "PKTableHeaderView.h"
#import "PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration.h"

@interface PKPeerPaymentAssociatedAccountRestrictionsViewController : PKPaymentSetupTableViewController {
    PKPeerPaymentSetupFlowController *_controller;
    PKFamilyMember *_familyMember;
    PKPeerPaymentPreferences *_currentPreferences;
    NSIndexPath *_defaultSelectedIndexPath;
    PKTableHeaderView *_tableHeader;
    CGFloat _cachedHeaderViewWidth;
    id<PKPeerPaymentAssociatedAccountSetupDelegate> *_delegate;
    PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration *_configuration;
}




-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_textLabelStringForIndexPath:(id)arg0 ;
-(id)_updatedPreferences;
-(id)initWithPeerPaymentSetupFlowController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_continue;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif