// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIVOICEOVERBRAILLEALERTINTERVALCONTROLLER_H
#define AXUIVOICEOVERBRAILLEALERTINTERVALCONTROLLER_H



#import "AXUISettingsNumericalPickerViewController.h"

@interface AXUIVoiceOverBrailleAlertIntervalController : AXUISettingsNumericalPickerViewController



-(BOOL)numericalPreferenceEnabled;
-(BOOL)userCanDisableNumericalPreference;
-(CGFloat)maximumValue;
-(CGFloat)minimumValue;
-(CGFloat)numericalPreferenceValue;
-(CGFloat)stepAmount;
-(NSInteger)keyboardTypeForSpecifier:(id)arg0 ;
-(id)localizedFooterText;
-(id)localizedTitle;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg0 ;
-(void)setNumericalPreferenceValueFromUser:(CGFloat)arg0 ;


@end


#endif