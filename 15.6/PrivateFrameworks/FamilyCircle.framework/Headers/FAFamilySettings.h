// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYSETTINGS_H
#define FAFAMILYSETTINGS_H

@class FAFamilySetupPrompter, NSString, ACAccount, UIViewController;
@protocol FAFamilySetupPrompterDelegate;


#import "FAFamilyCircleRequest.h"
#import "FAFamilySettings.h"

@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate>

 {
    FAFamilySetupPrompter *_prompter;
    FAFamilySettings *_retainedSelf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) ACAccount *iTunesAccount; // ivar: _iTunesAccount
@property BOOL isFirstRun; // ivar: _isFirstRun
@property UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(BOOL)isAccountSignedIn;
-(void)_launchPrefsUsingDaemonWithOptions:(id)arg0 ;
-(void)familySetupPrompterDidFinish:(id)arg0 ;
-(void)launchiCloudFamilySettings;
-(void)launchiCloudFamilySettingsWithOptions:(id)arg0 ;


@end


#endif