// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTUIPROXIMITYENROLLMENTLANGUAGEOPTIONSVIEW_H
#define VTUIPROXIMITYENROLLMENTLANGUAGEOPTIONSVIEW_H

@class NSArray, UILabel, UIView, NSString, UIButton, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "VTUIProximityView.h"
#import "VTUIProximityContainerView.h"
#import "VTUIStyle.h"
#import "VTUIButton.h"

@interface VTUIProximityEnrollmentLanguageOptionsView : VTUIProximityView <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    NSArray *_continueButtonsLanguages;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_settingsLabel;
    UIView *_footerView;
    UIView *_languagesView;
    VTUIStyle *_vtStyle;
}


@property (readonly, nonatomic) VTUIButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPickerView *languagesPickerView; // ivar: _languagesPickerView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewConstraints; // ivar: _viewConstraints


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 languageOptions:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_setupConstraintsToSize:(struct CGSize )arg0 ;
-(void)_setupContent;


@end


#endif