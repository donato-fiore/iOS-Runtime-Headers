// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSTREAMRECIPIENTVIEWCONTROLLER_H
#define PUPHOTOSTREAMRECIPIENTVIEWCONTROLLER_H

@class UIViewController, CNAutocompleteResultsTableViewController, CNComposeRecipientTextView, UIScrollView, CNAutocompleteSearchManager, NSNumber, IDSBatchIDQueryController, NSMutableSet, CNContactPickerViewController, CNContactStore, NSString, NSArray;
@protocol UIPopoverPresentationControllerDelegate, IDSBatchIDQueryControllerDelegate, CNContactPickerDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSearchConsumer;



@interface PUPhotoStreamRecipientViewController : UIViewController <UIPopoverPresentationControllerDelegate, IDSBatchIDQueryControllerDelegate, CNContactPickerDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSearchConsumer>

 {
    CNAutocompleteResultsTableViewController *_searchResultsTableViewController;
    CNComposeRecipientTextView *_recipientView;
    UIScrollView *_recipientContainerView;
    CNAutocompleteSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    NSMutableSet *_validPhoneNumbers;
    CNContactPickerViewController *_contactPickerPresentedController;
    CGSize _recipientViewSize;
    CGFloat _lastHeight;
}


@property (nonatomic) CGFloat bottomTableOffset; // ivar: _bottomTableOffset
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly) Class superclass;


+(void)recordRecentInvitationRecipient:(id)arg0 displayName:(id)arg1 date:(id)arg2 ;
-(id)_searchManager;
-(id)_selectedNormalizedPhoneForRecipient:(id)arg0 ;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addRecipientForContact:(id)arg0 address:(id)arg1 kind:(NSUInteger)arg2 ;
-(void)_dismissContactPicker;
-(void)_searchForRecipientWithText:(id)arg0 ;
-(void)_setSearchResults:(id)arg0 ;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)autocompleteResultsController:(id)arg0 tintColorForRecipient:(id)arg1 completion:(id)arg2 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 disambiguateRecipientForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 showPersonCardForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)finishedSearchingForAutocompleteResults;
-(void)makeRecipientViewFirstResponder;
-(void)makeRecipientViewResignFirstResponder;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif