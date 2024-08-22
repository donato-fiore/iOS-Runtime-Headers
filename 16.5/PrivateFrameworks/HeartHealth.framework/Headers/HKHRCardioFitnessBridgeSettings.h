// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRCARDIOFITNESSBRIDGESETTINGS_H
#define HKHRCARDIOFITNESSBRIDGESETTINGS_H


#import <Foundation/Foundation.h>

#import "HKHRCardioFitnessFooter.h"

@interface HKHRCardioFitnessBridgeSettings : NSObject

@property (retain, nonatomic) HKHRCardioFitnessFooter *footer; // ivar: _footer
@property (nonatomic) BOOL settingEnabled; // ivar: _settingEnabled
@property (nonatomic) BOOL settingVisible; // ivar: _settingVisible
@property (nonatomic) BOOL showOnboarding; // ivar: _showOnboarding


+(id)hiddenSettings;
-(id)initWithSettingVisible:(BOOL)arg0 settingEnabled:(BOOL)arg1 showOnboarding:(BOOL)arg2 footer:(id)arg3 ;


@end


#endif