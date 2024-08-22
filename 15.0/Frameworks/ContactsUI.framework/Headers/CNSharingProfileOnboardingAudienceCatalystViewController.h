// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSHARINGPROFILEONBOARDINGAUDIENCECATALYSTVIEWCONTROLLER_H
#define CNSHARINGPROFILEONBOARDINGAUDIENCECATALYSTVIEWCONTROLLER_H

@class OBWelcomeFullCenterContentController, UILabel, UIButton, UIImageView, OBBoldTrayButton, CNMutableContact, UIView, NSString, UITextField, OBLinkTrayButton;
@protocol UITextFieldDelegate, CNSharingProfileOnboardingAudienceController, CNSharingProfileOnboardingAudienceControllerDelegate;


#import "CNSharingProfileAudienceDataSource.h"

@interface CNSharingProfileOnboardingAudienceCatalystViewController : OBWelcomeFullCenterContentController <UITextFieldDelegate, CNSharingProfileOnboardingAudienceController>



@property (retain, nonatomic) UILabel *audienceDescriptionLabel; // ivar: _audienceDescriptionLabel
@property (retain, nonatomic) UILabel *audienceLabel; // ivar: _audienceLabel
@property (retain, nonatomic) UIButton *audiencePickerButton; // ivar: _audiencePickerButton
@property (retain, nonatomic) UIImageView *avatarImageView; // ivar: _avatarImageView
@property (retain, nonatomic) OBBoldTrayButton *backButton; // ivar: _backButton
@property (retain, nonatomic) OBBoldTrayButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) CNMutableContact *contact; // ivar: _contact
@property (retain, nonatomic) UIView *customContentView; // ivar: _customContentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNSharingProfileOnboardingAudienceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextField *familyNameField; // ivar: _familyNameField
@property (retain, nonatomic) UITextField *givenNameField; // ivar: _givenNameField
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) NSInteger nameOrder; // ivar: _nameOrder
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton; // ivar: _setupLaterButton
@property (retain, nonatomic) CNSharingProfileAudienceDataSource *sharingAudienceDataSource; // ivar: _sharingAudienceDataSource
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
+(id)headerText;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithContact:(id)arg0 selectedSharingAudience:(NSUInteger)arg1 ;
-(void)createAudienceDescriptionLabel;
-(void)createAudienceLabel;
-(void)createAudiencePickerButton;
-(void)createAvatarView;
-(void)createContentView;
-(void)createNameLabel;
-(void)createNameTextFields;
-(void)dealloc;
-(void)didSelectSharingAudience:(NSUInteger)arg0 ;
-(void)familyNameDidChange:(id)arg0 ;
-(void)givenNameDidChange:(id)arg0 ;
-(void)handleBackTapped:(id)arg0 ;
-(void)handleConfirmButtonTapped:(id)arg0 ;
-(void)handleSetupLaterTapped:(id)arg0 ;
-(void)layoutContentView;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateConfirmButtonEnabledState;
-(void)updateMenuForAudiencePicker;
-(void)viewDidLoad;


@end


#endif