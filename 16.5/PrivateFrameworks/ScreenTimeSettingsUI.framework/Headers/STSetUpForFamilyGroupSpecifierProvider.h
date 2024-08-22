// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSETUPFORFAMILYGROUPSPECIFIERPROVIDER_H
#define STSETUPFORFAMILYGROUPSPECIFIERPROVIDER_H

@class NSString, UIViewController, PSSpecifier;
@protocol MCProfileConnectionObserver;


#import "STRootGroupSpecifierProvider.h"

@interface STSetUpForFamilyGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presenter; // ivar: _presenter
@property (readonly, nonatomic) PSSpecifier *setupFamilySpecifier; // ivar: _setupFamilySpecifier
@property (readonly) Class superclass;


+(id)providerWithCoordinator:(id)arg0 presenter:(id)arg1 ;
-(id)init;
-(void)_updateEnabledValue;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentAppleAccountSetupFamilyController:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif