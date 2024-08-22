// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTUIENROLLMENTSETUPINTROVIEW_H
#define VTUIENROLLMENTSETUPINTROVIEW_H

@class UIView, NSString;


#import "VTUIEnrollmentBaseView.h"
#import "VTUIButton.h"

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentBaseView {
    UIView *_footerView;
}


@property (readonly, nonatomic) VTUIButton *continueButton; // ivar: _continueButton
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) VTUIButton *laterButton; // ivar: _laterButton


-(BOOL)showPrivacyTextView;
-(id)_createFooterWithTextFieldShowlaterButton:(BOOL)arg0 ;
-(id)footerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupContent;


@end


#endif