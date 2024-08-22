// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACUIIDENTITYPICKERVIEWCONTROLLER_H
#define ACUIIDENTITYPICKERVIEWCONTROLLER_H

@class PSListController, NSArray, NSString;
@protocol ACUIIdentityPickerViewControllerDelegate;



@interface ACUIIdentityPickerViewController : PSListController {
    id<ACUIIdentityPickerViewControllerDelegate> *_delegate;
    NSArray *_identities;
    NSArray *_emailAddresses;
    BOOL _userInteractiveSwitch;
    BOOL _userInteractiveIdentityList;
    BOOL _allowIdentitySelectionForDisabledSwitch;
}


@property (readonly, nonatomic) NSString *property; // ivar: _property


-(BOOL)_allowIdentitySelection;
-(BOOL)_isPropertyEnabled;
-(id)_identitySpecifiers;
-(id)_specifiersForIdentities:(id)arg0 ;
-(id)_valueForSwitchSpecifier:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct __SecIdentity *)_identityToAutoselectWithEnabled:(BOOL)arg0 ;
-(struct __SecIdentity *)_selectedIdentity;
-(void)_finishedFetchingIdentities:(id)arg0 ;
-(void)_setValue:(id)arg0 forSwitchSpecifier:(id)arg1 ;
-(void)_updateCell:(id)arg0 selected:(BOOL)arg1 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif