// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTCOMPOSEVIEWCONTROLLER_H
#define SKUIGIFTCOMPOSEVIEWCONTROLLER_H

@class UIImage, UIView, NSMutableArray, NSIndexPath, UITableView, UIPopoverController, NSString, UIBarButtonItem;
@protocol SKUIGiftSendDateSectionDelegate, UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, OS_dispatch_source;


#import "SKUIGiftStepViewController.h"
#import "SKUIGiftAddressingSection.h"
#import "SKUIGiftAmountSection.h"
#import "SKUIGiftItemView.h"
#import "SKUIGiftValidationResponse.h"
#import "SKUIGiftSendDateSection.h"
#import "SKUIGiftTermsAndConditionsSection.h"
#import "SKUIGiftValidator.h"

@interface SKUIGiftComposeViewController : SKUIGiftStepViewController <SKUIGiftSendDateSectionDelegate, UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

 {
    SKUIGiftAddressingSection *_addressingSection;
    SKUIGiftAmountSection *_amountSection;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    UIView *_searchResultsView;
    NSMutableArray *_sections;
    SKUIGiftSendDateSection *_sendDateSection;
    NSIndexPath *_showDatePickerIndexPathAfterKeyboardDismiss;
    UITableView *_tableView;
    BOOL _tappedNextWhileValidating;
    SKUIGiftTermsAndConditionsSection *_termsSection;
    NSObject<OS_dispatch_source> *_validationTimer;
    SKUIGiftValidator *_validator;
    UIPopoverController *_peoplePickerPopover;
    UIPopoverController *_searchResultsPopover;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (readonly) Class superclass;


-(BOOL)popoverControllerShouldDismissPopover:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_headerView;
-(id)_itemImage;
-(id)_itemView;
-(id)initWithGift:(id)arg0 configuration:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_amountControlAction:(id)arg0 ;
-(void)_cancelAction:(id)arg0 ;
-(void)_finishValidationWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_keyboardChangeNotification:(id)arg0 ;
-(void)_nextAction:(id)arg0 ;
-(void)_pushThemePickerOrShowInvalidAlert;
-(void)_recipientsDidChangeNotification:(id)arg0 ;
-(void)_reloadSections;
-(void)_setItemImage:(id)arg0 error:(id)arg1 ;
-(void)_textFieldChangeNotification:(id)arg0 ;
-(void)_textViewChangeNotification:(id)arg0 ;
-(void)_textViewDidEndEditingNotification:(id)arg0 ;
-(void)_validateGift;
-(void)_validateGiftThrottled:(BOOL)arg0 ;
-(void)dealloc;
-(void)giftSendDateSection:(id)arg0 didChangeDate:(id)arg1 ;
-(void)loadView;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 giftRecipientCell:(id)arg1 didUpdateSearchController:(id)arg2 ;
-(void)tableView:(id)arg0 giftRecipientCell:(id)arg1 dismissContactPicker:(id)arg2 ;
-(void)tableView:(id)arg0 giftRecipientCell:(id)arg1 presentContactPicker:(id)arg2 ;
-(void)tableView:(id)arg0 giftRecipientCellDidChangeRecipients:(id)arg1 ;
-(void)tableView:(id)arg0 giftRecipientCellDidChangeSize:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif