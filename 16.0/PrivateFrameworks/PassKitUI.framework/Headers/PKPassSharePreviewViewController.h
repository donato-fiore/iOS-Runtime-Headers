// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHAREPREVIEWVIEWCONTROLLER_H
#define PKPASSSHAREPREVIEWVIEWCONTROLLER_H

@class PKSharedPassSharesController, PKPassEntitlementsComposer, CNAutocompleteSearchController, NSString;
@protocol PKSharePreviewOverviewSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate, CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate, UISheetPresentationControllerDelegate, PKPassSharePreviewViewControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPassShareInitiationContext.h"
#import "PKSharePreviewOverviewSectionController.h"
#import "PKSharePreviewAdditionalSecuritySectionController.h"
#import "PKPassSnapshotter.h"

@interface PKPassSharePreviewViewController : PKPaymentSetupOptionsViewController <PKSharePreviewOverviewSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate, CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate, UISheetPresentationControllerDelegate>

 {
    PKSharedPassSharesController *_sharesController;
    PKPassShareInitiationContext *_context;
    PKPassEntitlementsComposer *_entitlementComposer;
    id<PKPassSharePreviewViewControllerDelegate> *_delegate;
    PKSharePreviewOverviewSectionController *_overviewSectionController;
    PKSharePreviewAdditionalSecuritySectionController *_additionalSecuritySectionController;
    CNAutocompleteSearchController *_contactSearchController;
    PKPassSnapshotter *_passSnapshotter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(id)initWithSharesController:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(id)searchController:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(void)_cancelPressed;
-(void)_closeContactPicker;
-(void)_continueButtonPressed;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contextDidChange;
-(void)didTapTextViewAccessoryButtonForSearchController:(id)arg0 anchoredToView:(id)arg1 ;
-(void)loadView;
-(void)searchController:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)setShowHeaderSpinner:(BOOL)arg0 ;
-(void)sharePreviewSectionControllerDidSelectEntitlements:(id)arg0 ;
-(void)sharePreviewSectionControllerDidSelectShowContactPicker:(id)arg0 ;
-(void)sharePreviewSectionControllerDidUpdateEntitlements:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif