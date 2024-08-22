// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTAUTOMATICPAYMENTSPRESETVIEWCONTROLLER_H
#define PKACCOUNTAUTOMATICPAYMENTSPRESETVIEWCONTROLLER_H

@class PKAccount, NSIndexPath, NSArray;


#import "PKSectionTableViewController.h"
#import "PKAccountAutomaticPaymentsController.h"
#import "PKTableHeaderView.h"

@interface PKAccountAutomaticPaymentsPresetViewController : PKSectionTableViewController {
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    NSUInteger _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    NSArray *_paymentPresets;
}




-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithController:(id)arg0 ;
-(id)tableHeaderView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_handleNext:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif