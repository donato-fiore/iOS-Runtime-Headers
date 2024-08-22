// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREDETAILSVIEWCONTROLLER_H
#define PKPASSSHAREDETAILSVIEWCONTROLLER_H

@class PKPassShare, PKSharedPassSharesController, PKPassEntitlementsComposer, UIBarButtonItem, NSString;
@protocol PKPassSharesListSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKShareAuthorizationSession.h"
#import "PKSharePreviewOverviewSectionController.h"
#import "PKPassEntitlementSelectionSectionController.h"
#import "PKSharePreviewAdditionalSecuritySectionController.h"
#import "PKPassSharesListSectionController.h"

@interface PKPassShareDetailsViewController : PKPaymentSetupOptionsViewController <PKPassSharesListSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate>

 {
    PKPassShare *_share;
    PKPassShare *_senderShare;
    PKSharedPassSharesController *_sharesController;
    PKShareAuthorizationSession *_authorizer;
    PKPassEntitlementsComposer *_entitlementComposer;
    PKSharePreviewOverviewSectionController *_overviewSectionController;
    PKPassEntitlementSelectionSectionController *_entitlementSectionController;
    PKSharePreviewAdditionalSecuritySectionController *_additionalSecuritySectionController;
    PKPassSharesListSectionController *_sharesSectionController;
    UIBarButtonItem *_saveButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)avatarView;
-(id)initWithShare:(id)arg0 sharesController:(id)arg1 authorizer:(id)arg2 ;
-(void)_donePressed;
-(void)_saveTapped;
-(void)_setIsLoading:(BOOL)arg0 ;
-(void)_setRecipient:(id)arg0 ;
-(void)_setSender:(id)arg0 ;
-(void)_showDisplayableError:(id)arg0 ;
-(void)_updateShareToShare:(id)arg0 ;
-(void)loadView;
-(void)passSharesListSectionController:(id)arg0 didSelectShare:(id)arg1 ;
-(void)passSharesListSectionController:(id)arg0 presentAlert:(id)arg1 ;
-(void)passSharesListSectionController:(id)arg0 setIsLoading:(BOOL)arg1 ;
-(void)passSharesListSectionControllerDidFinishRevokingShares:(id)arg0 ;
-(void)passSharesListSectionControllerDidSelectAddShare:(id)arg0 ;
-(void)sharePreviewSectionControllerDidSelectEntitlements:(id)arg0 ;
-(void)sharePreviewSectionControllerDidUpdateEntitlements:(id)arg0 ;
-(void)showSaveButtonIfNecessary;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif