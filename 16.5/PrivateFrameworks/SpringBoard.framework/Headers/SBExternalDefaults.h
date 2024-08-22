// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDEFAULTS_H
#define SBEXTERNALDEFAULTS_H

@class SBAbstractDefaults;


#import "SBExternalGlobalDefaults.h"
#import "SBExternalDuetDefaults.h"
#import "SBExternalDemoDefaults.h"
#import "SBExternalSetupDefaults.h"
#import "SBExternalSettingsDefaults.h"
#import "SBExternalPhoneDefaults.h"
#import "SBExternalWifiDefaults.h"
#import "SBExternalSoundsDefaults.h"
#import "SBExternalNotesDefaults.h"
#import "SBBiometricKitDefaults.h"

@interface SBExternalDefaults : SBAbstractDefaults {
    SBExternalGlobalDefaults *_lazy_globalDefaults;
    SBExternalDuetDefaults *_lazy_duetDefaults;
    SBExternalDemoDefaults *_lazy_demoDefaults;
    SBExternalSetupDefaults *_lazy_setupDefaults;
    SBExternalSettingsDefaults *_lazy_settingsDefaults;
    SBExternalPhoneDefaults *_lazy_phoneDefaults;
    SBExternalWifiDefaults *_lazy_networkDefaults;
    SBExternalSoundsDefaults *_lazy_soundDefaults;
    SBExternalNotesDefaults *_lazy_notesDefaults;
    SBBiometricKitDefaults *_lazy_biometricKitDefaults;
}


@property (readonly, retain, nonatomic) SBBiometricKitDefaults *biometricKitDefaults;
@property (readonly, retain, nonatomic) SBExternalDemoDefaults *demoDefaults;
@property (readonly, retain, nonatomic) SBExternalDuetDefaults *duetDefaults;
@property (readonly, retain, nonatomic) SBExternalGlobalDefaults *globalDefaults;
@property (readonly, retain, nonatomic) SBExternalWifiDefaults *networkDefaults;
@property (readonly, retain, nonatomic) SBExternalNotesDefaults *notesDefaults;
@property (readonly, retain, nonatomic) SBExternalPhoneDefaults *phoneDefaults;
@property (readonly, retain, nonatomic) SBExternalSettingsDefaults *settingsDefaults;
@property (readonly, retain, nonatomic) SBExternalSetupDefaults *setupDefaults;
@property (readonly, retain, nonatomic) SBExternalSoundsDefaults *soundDefaults;




@end


#endif