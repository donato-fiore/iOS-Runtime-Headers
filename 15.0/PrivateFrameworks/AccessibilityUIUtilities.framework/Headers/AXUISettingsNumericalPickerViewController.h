// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUISETTINGSNUMERICALPICKERVIEWCONTROLLER_H
#define AXUISETTINGSNUMERICALPICKERVIEWCONTROLLER_H

@class NSString;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;


#import "AXUISettingsSetupCapableListController.h"

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate>

 {
    CGFloat _cachedNumericalValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)numericalPreferenceEnabled;
-(BOOL)shouldDisablePreferenceEntirely;
-(BOOL)shouldSaveOnExit;
-(BOOL)userCanDisableNumericalPreference;
-(CGFloat)maximumValue;
-(CGFloat)maximumValueForSpecifier:(id)arg0 ;
-(CGFloat)minimumValue;
-(CGFloat)minimumValueForSpecifier:(id)arg0 ;
-(CGFloat)numericalPreferenceValue;
-(CGFloat)stepAmount;
-(CGFloat)stepValueForSpecifier:(id)arg0 ;
-(CGFloat)valueForSpecifier:(id)arg0 ;
-(id)_delayPickerFooterSpecifier;
-(id)_delayPickerSpecifier;
-(id)delayEnabled:(id)arg0 ;
-(id)localizedFooterText;
-(id)localizedPickerFooterText;
-(id)localizedTextForValue:(CGFloat)arg0 ;
-(id)localizedTitle;
-(id)specifiers;
-(id)stringValueForSpecifier:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)setDelayEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg0 ;
-(void)setNumericalPreferenceValueFromUser:(CGFloat)arg0 ;
-(void)specifier:(id)arg0 setValue:(CGFloat)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif