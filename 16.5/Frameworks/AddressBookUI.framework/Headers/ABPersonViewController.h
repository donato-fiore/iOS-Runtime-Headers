// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPERSONVIEWCONTROLLER_H
#define ABPERSONVIEWCONTROLLER_H

@class UIViewController, CNContactViewController, CNContactStore, NSString, NSArray;
@protocol CNContactViewControllerPrivateDelegate, UIViewControllerRestoration, ABPersonViewControllerDelegate;



@interface ABPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate, UIViewControllerRestoration>



@property (nonatomic) *void addressBook; // ivar: _addressBook
@property (nonatomic) BOOL allowsActions; // ivar: _allowsActions
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (retain, nonatomic) CNContactViewController *cnContactViewController; // ivar: _cnContactViewController
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void displayedPerson; // ivar: _displayedPerson
@property (copy, nonatomic) NSArray *displayedProperties; // ivar: _displayedProperties
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightedImportant; // ivar: _highlightedImportant
@property (nonatomic) int highlightedMultiValueIdentifier; // ivar: _highlightedMultiValueIdentifier
@property (nonatomic) int highlightedProperty; // ivar: _highlightedProperty
@property (nonatomic) NSObject<ABPersonViewControllerDelegate> *personViewDelegate; // ivar: _personViewDelegate
@property (nonatomic) BOOL shouldShowLinkedPeople; // ivar: _shouldShowLinkedPeople
@property (nonatomic) int style; // ivar: _style
@property (readonly) Class superclass;


+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(id)init;
-(id)initWithAddressBook:(*void)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 addressBook:(*void)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 addressBook:(*void)arg2 style:(int)arg3 ;
-(id)initWithStyle:(int)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)dealloc;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)loadView;
-(void)reloadContactViewController;
-(void)setHighlightedItemForProperty:(int)arg0 withIdentifier:(int)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg0 withIdentifier:(int)arg1 important:(BOOL)arg2 ;
-(void)setHighlightedItemForProperty:(int)arg0 withIdentifier:(int)arg1 person:(*void)arg2 ;
-(void)setHighlightedItemForProperty:(int)arg0 withIdentifier:(int)arg1 person:(*void)arg2 important:(BOOL)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif