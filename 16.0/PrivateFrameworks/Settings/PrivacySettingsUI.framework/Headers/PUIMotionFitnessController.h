// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIMOTIONFITNESSCONTROLLER_H
#define PUIMOTIONFITNESSCONTROLLER_H

@protocol SRRelatedSettingsProvider;


#import "PUITCCAccessController.h"

@interface PUIMotionFitnessController : PUITCCAccessController {
    id<SRRelatedSettingsProvider> *_sensorKitSpecifiersProvider;
}




-(BOOL)isFitnessTrackingEnabledFromTCC;
-(id)_appSpecifiers;
-(id)isFitnessTrackingEnabled:(id)arg0 ;
-(id)loadSensorKitSpecifiersProvider;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(void)setFitnessTrackingEnabled:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif