// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKGROUPRECIPIENTSELECTIONCONTROLLER_H
#define CKGROUPRECIPIENTSELECTIONCONTROLLER_H

@class NSString, UIBarButtonItem;
@protocol CKRecipientSelectionControllerDelegate;


#import "CKRecipientSelectionController.h"

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_enableRecipientsAdditionBasedOnAvailability;
-(BOOL)alwaysShowSearchResultsTable;
-(BOOL)homogenizePreferredServiceForiMessage;
-(BOOL)isBeingPresentedInMacDetailsView;
-(BOOL)shouldAutorotate;
-(BOOL)shouldSuppressSearchResultsTable;
-(CGFloat)topInsetForNavBar;
-(id)handlesForScreenTimePolicyCheck;
-(id)initWithConversation:(id)arg0 ;
-(struct UIEdgeInsets )navigationBarInsetsForRecipientSelectionController:(id)arg0 ;
-(void)_checkAvailabilityAndAddToken;
-(void)_frecencySearch;
-(void)_updateNavigationButton;
-(void)composeRecipientViewReturnPressed:(id)arg0 ;
-(void)loadView;
-(void)recipientAvailibilitiesDidUpdate;
-(void)recipientSelectionController:(id)arg0 didFinishAvailaiblityLookupForRecipient:(id)arg1 ;
-(void)recipientSelectionController:(id)arg0 textDidChange:(id)arg1 ;
-(void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg0 ;
-(void)recipientSelectionControllerDidChange;
-(void)recipientSelectionControllerDidChangeSize:(id)arg0 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg0 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg0 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg0 ;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg0 ;
-(void)recipientSelectionControllerShouldResignFirstResponder:(id)arg0 ;
-(void)recipientSelectionControllerTabPressed:(id)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif