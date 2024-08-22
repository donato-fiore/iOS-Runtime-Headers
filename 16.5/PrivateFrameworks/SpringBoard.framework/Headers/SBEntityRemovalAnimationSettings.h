// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBENTITYREMOVALANIMATIONSETTINGS_H
#define SBENTITYREMOVALANIMATIONSETTINGS_H

@class PTSettings;


#import "SBEntityRemovalDosidoSlideOutUpwardAnimationSettings.h"
#import "SBEntityRemovalDosidoSlideOutDownwardAnimationSettings.h"
#import "SBEntityRemovalDosidoDefaultAnimationSettings.h"
#import "SBEntityRemovalFloatingSlideOutUpwardAnimationSettings.h"
#import "SBEntityRemovalFloatingSlideOutDownwardAnimationSettings.h"
#import "SBEntityRemovalFloatingDefaultAnimationSettings.h"
#import "SBEntityRemovalMedusaSlideOutUpwardAnimationSettings.h"
#import "SBEntityRemovalMedusaSlideOutDownwardAnimationSettings.h"
#import "SBEntityRemovalMedusaDefaultAnimationSettings.h"

@interface SBEntityRemovalAnimationSettings : PTSettings

@property (retain, nonatomic) SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *dosidoCommitIntentAnimationSettings; // ivar: _dosidoCommitIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *dosidoDeclineIntentAnimationSettings; // ivar: _dosidoDeclineIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *dosidoDeleteIntentAnimationSettings; // ivar: _dosidoDeleteIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *floatingCommitIntentAnimationSettings; // ivar: _floatingCommitIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *floatingDeclineIntentAnimationSettings; // ivar: _floatingDeclineIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalFloatingDefaultAnimationSettings *floatingDeleteIntentAnimationSettings; // ivar: _floatingDeleteIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *medusaCommitIntentAnimationSettings; // ivar: _medusaCommitIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *medusaDeclineIntentAnimationSettings; // ivar: _medusaDeclineIntentAnimationSettings
@property (retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *medusaDeleteIntentAnimationSettings; // ivar: _medusaDeleteIntentAnimationSettings


+(id)settingsControllerModule;


@end


#endif