// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFREGLOCALECONTROLLER_H
#define CNFREGLOCALECONTROLLER_H

@class PSSpecifier, NSArray, NSString;
@protocol CNFRegRegionChooserDelegate;


#import "CNFRegFirstRunController.h"

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate>

 {
    PSSpecifier *_countryFieldSpecifier;
    NSArray *_phoneNumberSpecifiers;
    PSSpecifier *_phoneNumberGroupSpecifier;
    PSSpecifier *_phoneNumberFieldSpecifier;
    BOOL _isLoading;
    BOOL _isError;
    id *_regionListChangeObserver;
}


@property (copy) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) NSString *currentPhoneValue; // ivar: _currentPhoneValue
@property (copy, nonatomic) NSString *currentRegionID; // ivar: _currentRegionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *regionData; // ivar: _regionData
@property (readonly) Class superclass;


-(id)_currentRegion;
-(id)_phoneTextField;
-(id)_rightButtonItem;
-(id)_unformattedPhoneNumber:(id)arg0 ;
-(id)bundle;
-(id)controllerForSpecifier:(id)arg0 ;
-(id)countryList;
-(id)currentCountryValueForSpecifier:(id)arg0 ;
-(id)currentPhoneCompatibleCountryCode;
-(id)currentPhoneNumberForSpecifier:(id)arg0 ;
-(id)initWithRegController:(id)arg0 ;
-(id)logName;
-(id)specifierList;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleString;
-(id)validationString;
-(void)_buildCountryFieldSpecifierCache:(id)arg0 ;
-(void)_buildPhoneNumberSpecifierCache:(id)arg0 ;
-(void)_buildSpecifierCache:(id)arg0 ;
-(void)_failValidationWithError:(id)arg0 ;
-(void)_finishValidation;
-(void)_handleRegionListLoad;
-(void)_handleTimeout;
-(void)_hideCountryPickerAnimated:(BOOL)arg0 ;
-(void)_loadInitialValues;
-(void)_loadRegionsIfNecessary;
-(void)_refreshCountryFieldAnimated:(BOOL)arg0 ;
-(void)_refreshPhoneFieldAnimated:(BOOL)arg0 ;
-(void)_rightButtonTapped;
-(void)_setFieldsEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setupEventHandlers;
-(void)_showCountryPickerAnimated:(BOOL)arg0 ;
-(void)_showPhoneField:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_startListeningForRegionListChanges;
-(void)_startTimeout;
-(void)_stopListeningForRegionListChanges;
-(void)_updateControllerState;
-(void)_updateUI;
-(void)dismiss;
-(void)hideCountryPicker;
-(void)regionChooser:(id)arg0 selectedRegionID:(id)arg1 ;
-(void)setCurrentPhoneNumber:(id)arg0 forSpecifier:(id)arg1 ;
-(void)showCountryPicker;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif