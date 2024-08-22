// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUISETTINGSTOUCHACCOMMODATIONSCONTROLLER_H
#define AXUISETTINGSTOUCHACCOMMODATIONSCONTROLLER_H

@class NSString, PSSpecifier, NSArray;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;


#import "AXUISettingsBaseListController.h"

@interface AXUISettingsTouchAccommodationsController : AXUISettingsBaseListController <AXUISettingsEditableTableCellWithStepperDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSSpecifier *holdDurationPickerSpecifier; // ivar: _holdDurationPickerSpecifier
@property (retain, nonatomic) PSSpecifier *ignoreRepeatPickerSpecifier; // ivar: _ignoreRepeatPickerSpecifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *swipeGesturesSpecifiers; // ivar: _swipeGesturesSpecifiers
@property (retain, nonatomic) NSArray *tapTimeoutSpecifiers; // ivar: _tapTimeoutSpecifiers
@property (nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass; // ivar: _touchAccommodationsAllowsSwipeGesturesToBypass
@property (readonly, nonatomic) BOOL touchAccommodationsAreConfigured; // ivar: _touchAccommodationsAreConfigured
@property (nonatomic) BOOL touchAccommodationsEnabled; // ivar: _touchAccommodationsEnabled
@property (nonatomic) CGFloat touchAccommodationsHoldDuration; // ivar: _touchAccommodationsHoldDuration
@property (nonatomic) BOOL touchAccommodationsHoldDurationEnabled; // ivar: _touchAccommodationsHoldDurationEnabled
@property (nonatomic) CGFloat touchAccommodationsIgnoreRepeatDuration; // ivar: _touchAccommodationsIgnoreRepeatDuration
@property (nonatomic) BOOL touchAccommodationsIgnoreRepeatEnabled; // ivar: _touchAccommodationsIgnoreRepeatEnabled
@property (nonatomic) NSInteger touchAccommodationsTapActivationMethod; // ivar: _touchAccommodationsTapActivationMethod
@property (nonatomic) CGFloat touchAccommodationsTapActivationTimeout; // ivar: _touchAccommodationsTapActivationTimeout


-(BOOL)_shouldShowSwipeGesturesSpecifiersWithHoldDuration;
-(BOOL)_shouldShowSwipeGesturesSpecifiersWithTapAssistance;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(CGFloat)maximumValueForSpecifier:(id)arg0 ;
-(CGFloat)minimumValueForSpecifier:(id)arg0 ;
-(CGFloat)stepValueForSpecifier:(id)arg0 ;
-(CGFloat)valueForSpecifier:(id)arg0 ;
-(Class)touchAccomodationsSwipeGestureViewControllerClass;
-(id)_durationSpecifiersWithName:(id)arg0 groupIdentifier:(id)arg1 footerText:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 previousSpecifierIdentifier:(id)arg5 conditionalSpecifiers:(id)arg6 ;
-(id)_holdDurationEnabled:(id)arg0 ;
-(id)_holdDurationSpecifiers;
-(id)_ignoreRepeatEnabled:(id)arg0 ;
-(id)_ignoreRepeatSpecifiers;
-(id)_swipeGesturesEnabled:(id)arg0 ;
-(id)_tapActivationMethodSpecifiers;
-(id)activationMethod:(id)arg0 ;
-(id)holdDuration:(id)arg0 ;
-(id)ignoreRepeat:(id)arg0 ;
-(id)specifiers;
-(id)stringValueForSpecifier:(id)arg0 ;
-(id)touchAccommodationsEnabled:(id)arg0 ;
-(void)_setHoldDurationEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)_setIgnoreRepeatEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)_showOrHideTapTimeoutAnimated:(BOOL)arg0 ;
-(void)_updateDelayPickerSpecifier:(id)arg0 additionalSpecifiers:(id)arg1 afterSpecifierWithIdentifier:(id)arg2 enabled:(BOOL)arg3 ;
-(void)_updateMasterSwitchFooterText;
-(void)_updateMasterSwitchFooterTextForSpecifier:(id)arg0 shouldReload:(BOOL)arg1 ;
-(void)_updateSwipeGesturesSpecifiers;
-(void)specifier:(id)arg0 setValue:(CGFloat)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif