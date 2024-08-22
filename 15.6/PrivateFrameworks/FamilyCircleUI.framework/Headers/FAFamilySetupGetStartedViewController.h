// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYSETUPGETSTARTEDVIEWCONTROLLER_H
#define FAFAMILYSETUPGETSTARTEDVIEWCONTROLLER_H

@class UIViewController, ACAccount, ACAccountStore, AAFamilyEligibilityResponse, UIScrollView, UIView, UILabel, UIImageView, UIButton, NSString;
@protocol FAFamilySetupPage, FAFamilySetupPageDelegate;


#import "FAFamilySharingFeaturesView.h"

@interface FAFamilySetupGetStartedViewController : UIViewController <FAFamilySetupPage>

 {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_descriptionLabel;
    UIButton *_getStartedButton;
    FAFamilySharingFeaturesView *_familyFeaturesView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAFamilySetupPageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_heightForText:(id)arg0 constrainedToWidth:(CGFloat)arg1 ;
-(id)_createDescriptionLabelForText:(id)arg0 ;
-(id)initWithAccount:(id)arg0 store:(id)arg1 ;
-(id)initWithAccount:(id)arg0 store:(id)arg1 familyEligibilityResponse:(id)arg2 ;
-(void)_getStartedButtonWasTapped:(id)arg0 ;
-(void)_updateFonts;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif