// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUICHOOSECONTACTCONTROLLER_H
#define AAUICHOOSECONTACTCONTROLLER_H

@class CNAutocompleteSearchController, UIViewController, NSString;
@protocol CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate, AAUIChooseContactControllerDelegate;

#import <Foundation/Foundation.h>


@interface AAUIChooseContactController : NSObject <CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate>

 {
    CNAutocompleteSearchController *_autocompleteSearchController;
}


@property (readonly, nonatomic) UIViewController *chooseContactViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIChooseContactControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)searchController:(id)arg0 presentationOptionsForRecipient:(id)arg1 ;
-(id)init;
-(id)searchController:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)searchController:(id)arg0 tintColorForRecipient:(id)arg1 ;
-(void)_prepareNextButton;
-(void)_selectionCompleted;
-(void)_setupViewController;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)didTapTextViewAccessoryButtonForSearchController:(id)arg0 ;
-(void)searchController:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 didRemoveRecipient:(id)arg1 ;


@end


#endif