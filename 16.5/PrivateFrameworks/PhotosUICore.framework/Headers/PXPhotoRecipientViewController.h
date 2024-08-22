// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTORECIPIENTVIEWCONTROLLER_H
#define PXPHOTORECIPIENTVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, UIBarButtonItem, CNContactPickerViewController, NSString, NSArray, UILabel, NSSet;
@protocol PXSearchRecipientControllerDelegate, PXComposeRecipientViewDelegate, UIPopoverPresentationControllerDelegate, CNContactPickerDelegate, PXPhotoRecipientViewControllerDelegate;


#import "PXComposeRecipientView.h"
#import "PXRecipientSearchDataSourceManager.h"
#import "PXSearchRecipientController.h"

@interface PXPhotoRecipientViewController : UIViewController <PXSearchRecipientControllerDelegate, PXComposeRecipientViewDelegate, UIPopoverPresentationControllerDelegate, CNContactPickerDelegate>

 {
    NSLayoutConstraint *_recipientViewHeightConstraint;
    NSLayoutConstraint *_resultsViewBottomConstraint;
    UIBarButtonItem *_addButton;
}


@property (retain, nonatomic) PXComposeRecipientView *composeRecipientView; // ivar: _composeRecipientView
@property (nonatomic) BOOL contactPickerPresentedExternally; // ivar: _contactPickerPresentedExternally
@property (retain, nonatomic) CNContactPickerViewController *contactPickerViewController; // ivar: _contactPickerViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotoRecipientViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fieldLabel; // ivar: _fieldLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *initialLocalizedNameToQuery; // ivar: _initialLocalizedNameToQuery
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (nonatomic) NSInteger maxRecipients; // ivar: _maxRecipients
@property (retain, nonatomic) UILabel *noContentLabel; // ivar: _noContentLabel
@property (readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager; // ivar: _searchDataSourceManager
@property (retain, nonatomic) PXSearchRecipientController *searchRecipientController; // ivar: _searchRecipientController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *usedAddresses; // ivar: _usedAddresses


+(id)_contactViewControllerToPresentForRecipientViewController:(id)arg0 ;
+(id)recipientPickerViewControllerWithUsedAddresses:(id)arg0 maxRecipients:(NSInteger)arg1 delegate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInitialLocalizedNameToQuery:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSearchResultVerificationType:(NSInteger)arg0 ;
-(id)viewControllerForPresentingContactViewControllerBySearchRecipientController:(id)arg0 ;
-(void)_commonInitializationWithVerificationType:(NSInteger)arg0 ;
-(void)_contactPicker:(id)arg0 didSelectComposeRecipient:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_dismissContactPickerViewController;
-(void)_handleAddButton:(id)arg0 ;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_presentContactPickerViewController:(id)arg0 ;
-(void)_updateAddButton;
-(void)_updateNoContentLabelFont;
-(void)_updateNoContentLabelVisibility;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 disambiguateRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)searchRecipientController:(id)arg0 didSelectRecipient:(id)arg1 ;
-(void)searchRecipientController:(id)arg0 numberOfSearchRecipientsDidChange:(NSUInteger)arg1 ;
-(void)searchRecipientController:(id)arg0 searchStateDidChange:(NSInteger)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif