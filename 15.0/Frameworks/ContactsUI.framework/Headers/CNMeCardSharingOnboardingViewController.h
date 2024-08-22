// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGONBOARDINGVIEWCONTROLLER_H
#define CNMECARDSHARINGONBOARDINGVIEWCONTROLLER_H

@class OBTableWelcomeController, OBBoldTrayButton, CNContact, CNContactStore, NSLayoutConstraint;



@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController

@property (retain, nonatomic) OBBoldTrayButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // ivar: _tableViewHeightConstraint


+(id)headerText;
-(void)didTapDoneButton:(id)arg0 ;
-(void)handleConfirmButtonTapped;
-(void)updateForContentSizeCategoryChange;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif