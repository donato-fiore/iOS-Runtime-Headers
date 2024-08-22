// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABPEOPLEPICKERNAVIGATIONCONTROLLER_H
#define ABPEOPLEPICKERNAVIGATIONCONTROLLER_H

@class UINavigationController, CNContactPickerViewController, NSString, NSArray, NSPredicate;
@protocol CNContactPickerDelegate, ABPeoplePickerNavigationControllerDelegate;



@interface ABPeoplePickerNavigationController : UINavigationController <CNContactPickerDelegate>

 {
    *void _addressBook;
    CNContactPickerViewController *_contactPicker;
    BOOL _ignoreViewWillBePresented;
}


@property (nonatomic) *void addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayedProperties; // ivar: _displayedProperties
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<ABPeoplePickerNavigationControllerDelegate> *peoplePickerDelegate; // ivar: _peoplePickerDelegate
@property (copy, nonatomic) NSPredicate *predicateForEnablingPerson; // ivar: _predicateForEnablingPerson
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfPerson; // ivar: _predicateForSelectionOfPerson
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // ivar: _predicateForSelectionOfProperty
@property (readonly) Class superclass;


-(BOOL)_allowsAutorotation;
-(BOOL)_isDelayingPresentation;
-(BOOL)_shouldPreventCancelButtonsFromShowing;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)contactPickerPresentedViewController:(id)arg0 ;
-(id)contactStore;
-(id)displayedPropertyKeys;
-(id)init;
-(id)initWithAddressBook:(*void)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_endDelayingPresentation;
-(void)_setViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_viewWillBePresented;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)setNavigationBarHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupViewControllers;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif