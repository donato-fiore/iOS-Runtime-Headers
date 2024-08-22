// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSHARINGPROFILEONBOARDINGAUDIENCEVIEWCONTROLLER_H
#define CNSHARINGPROFILEONBOARDINGAUDIENCEVIEWCONTROLLER_H

@class OBTableWelcomeController, OBBoldTrayButton, CNMutableContact, NSString, UITextField, NSLayoutConstraint;
@protocol UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNSharingProfileOnboardingAudienceController, CNSharingProfileOnboardingAudienceControllerDelegate;


#import "CNSharingProfileAudienceDataSource.h"

@interface CNSharingProfileOnboardingAudienceViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNSharingProfileOnboardingAudienceController>



@property (retain, nonatomic) OBBoldTrayButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) CNMutableContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNSharingProfileOnboardingAudienceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextField *familyNameField; // ivar: _familyNameField
@property (retain, nonatomic) UITextField *givenNameField; // ivar: _givenNameField
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (nonatomic) NSInteger nameOrder; // ivar: _nameOrder
@property (retain, nonatomic) CNSharingProfileAudienceDataSource *sharingAudienceDataSource; // ivar: _sharingAudienceDataSource
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // ivar: _tableViewHeightConstraint
@property (retain, nonatomic) id *traitCollectionChangeToken; // ivar: _traitCollectionChangeToken


+(id)descriptorForRequiredKeys;
+(id)headerText;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)cellForNameInTableView:(id)arg0 ;
-(id)initWithContact:(id)arg0 selectedSharingAudience:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)familyNameDidChange:(id)arg0 ;
-(void)givenNameDidChange:(id)arg0 ;
-(void)handleConfirmButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConfirmButtonEnabledState;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif