// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STPASSCODEGROUPSPECIFIERPROVIDER_H
#define STPASSCODEGROUPSPECIFIERPROVIDER_H

@class PSListController, PSSpecifier;


#import "STRootGroupSpecifierProvider.h"

@interface STPasscodeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (readonly, weak) PSListController *listController; // ivar: _listController
@property (retain, nonatomic) PSSpecifier *togglePasscodeSpecifier; // ivar: _togglePasscodeSpecifier


+(id)providerWithCoordinator:(id)arg0 listController:(id)arg1 ;
-(BOOL)isHidden;
-(id)_authenticationContextWithReasonKey:(id)arg0 presentingViewController:(id)arg1 ;
// -(id)_removePasscodeActionWithPINOptionsTitle:(id)arg0 pinOptionsHandler:(id)arg1 pinValidationHandler:(unk)arg2  ;
-(id)init;
-(void)_promptForRecoveryAppleIDWithPINController:(id)arg0 passcode:(id)arg1 ;
-(void)_removeManagedPasscode;
-(void)_setManagedPasscode;
-(void)changeOrRemovePasscode:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadTogglePasscodeSpecifier;
-(void)setCoordinator:(id)arg0 ;


@end


#endif