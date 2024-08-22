// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABUNKNOWNPERSONVIEWCONTROLLER_H
#define ABUNKNOWNPERSONVIEWCONTROLLER_H

@class UIViewController, NSString, CNContactViewController;
@protocol CNContactViewControllerPrivateDelegate, ABUnknownPersonViewControllerDelegate;



@interface ABUnknownPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate>

 {
    *void _addressBook;
    *void _displayedPerson;
}


@property (nonatomic) *void addressBook;
@property (nonatomic) BOOL allowsActions; // ivar: _allowsActions
@property (nonatomic) BOOL allowsAddingToAddressBook; // ivar: _allowsAddingToAddressBook
@property (copy, nonatomic) NSString *alternateName; // ivar: _alternateName
@property (retain, nonatomic) CNContactViewController *cnContactViewController; // ivar: _cnContactViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void displayedPerson;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly) Class superclass;
@property (nonatomic) NSObject<ABUnknownPersonViewControllerDelegate> *unknownPersonViewDelegate; // ivar: _unknownPersonViewDelegate


-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 property:(id)arg2 labeledValue:(id)arg3 ;
-(id)contactStore;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)loadContactViewController;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif