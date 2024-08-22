// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSIGNINTOICLOUDGROUPSPECIFIERPROVIDER_H
#define STSIGNINTOICLOUDGROUPSPECIFIERPROVIDER_H

@class NSString, PSSpecifier;
@protocol AAUISignInControllerDelegate, MCProfileConnectionObserver;


#import "STRootGroupSpecifierProvider.h"

@interface STSignInToiCloudGroupSpecifierProvider : STRootGroupSpecifierProvider <AAUISignInControllerDelegate, MCProfileConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSSpecifier *signInSpecifier; // ivar: _signInSpecifier
@property (readonly) Class superclass;


-(id)init;
-(void)_updateEnabledValue;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentAppleAccountSignInController:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)setCoordinator:(id)arg0 ;
-(void)signInController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)signInControllerDidCancel:(id)arg0 ;


@end


#endif