// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTOTHERCARDNUMBERSVIEWCONTROLLER_H
#define PKACCOUNTOTHERCARDNUMBERSVIEWCONTROLLER_H

@class PKPhysicalCard, PKPaymentPass;
@protocol PKVirtualCardEnrollmentViewControllerDelegate;


#import "PKSettingsTableViewController.h"

@interface PKAccountOtherCardNumbersViewController : PKSettingsTableViewController <PKVirtualCardEnrollmentViewControllerDelegate>

 {
    PKPhysicalCard *_physicalCard;
    PKPaymentPass *_paymentPass;
    NSUInteger _accountFeatureIdentifier;
    NSInteger _context;
    BOOL _didBeginPassManagementSubject;
}




-(BOOL)_isVirtualCardSupportedButNotEnabled;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_analyticsPageTag;
-(id)_applePayCardNumberFooterWithTableView:(id)arg0 ;
-(id)_localizedStringForKey:(id)arg0 ;
-(id)_setUpVirtualCardFooterWithTableView:(id)arg0 ;
-(id)_titaniumCardNumberFooterWithTableView:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 accountFeatureIdentifier:(NSUInteger)arg1 context:(NSInteger)arg2 ;
-(id)initWithPhysicalCard:(id)arg0 paymentPass:(id)arg1 accountFeatureIdentifier:(NSUInteger)arg2 context:(NSInteger)arg3 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_appendApplePayCardNumberSectionToConfiguration:(id)arg0 ;
-(void)_appendNetworkSectionToConfiguration:(id)arg0 ;
-(void)_appendPhysicalCardSectionToConfiguration:(id)arg0 ;
-(void)_appendSetUpVirtualCardSectionToConfiguration:(id)arg0 ;
-(void)_beginReportingIfNecessary;
-(void)_endReportingIfNecessary;
-(void)_updateCardNumbersConfigurationAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)virtualCardEnrollmentViewController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;


@end


#endif