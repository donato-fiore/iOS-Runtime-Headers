// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUIPROXIMITYENROLLMENTSETUPINTROVIEW_H
#define VTUIPROXIMITYENROLLMENTSETUPINTROVIEW_H

@class UIImageView, UILabel, UITextView, SSRVoiceProfileManager, NSString, UIButton, NSArray;
@protocol UITextViewDelegate, VTUIEnrollmentDelegate;


#import "VTUIProximityView.h"
#import "VTUIProximityContainerView.h"
#import "VTUIStyle.h"
#import "VTUIButton.h"

@interface VTUIProximityEnrollmentSetupIntroView : VTUIProximityView <UITextViewDelegate>

 {
    UIImageView *_orbImage;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextView *_termsAndConds;
    VTUIStyle *_vtStyle;
    SSRVoiceProfileManager *_voiceProfileMgr;
    NSString *_languageCode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (weak, nonatomic) NSObject<VTUIEnrollmentDelegate> *enrollmentDelegate; // ivar: _enrollmentDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VTUIButton *notNowButton; // ivar: _notNowButton
@property (readonly, nonatomic) VTUIButton *setupButton; // ivar: _setupButton
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewConstraints; // ivar: _viewConstraints


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraintsToSize:(struct CGSize )arg0 ;
-(void)_setupContent;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
-(void)_setupTermsAndConditions;


@end


#endif