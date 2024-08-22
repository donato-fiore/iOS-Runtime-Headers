// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTUIENROLLMENTLANGUAGEOPTIONSVIEW_H
#define VTUIENROLLMENTLANGUAGEOPTIONSVIEW_H

@class UIView, NSArray, NSMutableArray;


#import "VTUIEnrollmentBaseView.h"

@interface VTUIEnrollmentLanguageOptionsView : VTUIEnrollmentBaseView {
    UIView *_footerView;
    NSArray *_continueButtonsLanguages;
}


@property (readonly, nonatomic) NSMutableArray *continueButtons; // ivar: _continueButtons


-(BOOL)showPrivacyTextView;
-(id)footerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)languageSelectionOfContinueButton:(id)arg0 ;
-(void)_addContinueButtonsToFooter;
-(void)_setupContent;
-(void)setContinueButtonLanguages:(id)arg0 ;


@end


#endif