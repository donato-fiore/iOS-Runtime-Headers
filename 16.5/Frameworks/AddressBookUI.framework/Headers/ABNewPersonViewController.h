// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABNEWPERSONVIEWCONTROLLER_H
#define ABNEWPERSONVIEWCONTROLLER_H

@class UIViewController, CNContactViewController, NSString, CNContact;
@protocol CNContactViewControllerPrivateDelegate, ABNewPersonViewControllerDelegate;



@interface ABNewPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate>

 {
    *void _addressBook;
    *void _displayedPerson;
    id<ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
}


@property (nonatomic) *void addressBook;
@property (retain, nonatomic) CNContactViewController *cnContactViewController; // ivar: _cnContactViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void displayedPerson;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContact *mergeContact; // ivar: _mergeContact
@property (nonatomic) NSObject<ABNewPersonViewControllerDelegate> *newPersonViewDelegate;
@property (nonatomic) *void parentGroup; // ivar: _parentGroup
@property (nonatomic) *void parentSource; // ivar: _parentSource
@property (nonatomic) BOOL showsCancelButton;
@property (readonly) Class superclass;


-(BOOL)savesNewContactOnSuspend;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 style:(int)arg2 ;
-(id)initWithStyle:(int)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)dealloc;
-(void)loadContactViewController;
-(void)loadView;
-(void)save:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSavesNewContactOnSuspend:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif