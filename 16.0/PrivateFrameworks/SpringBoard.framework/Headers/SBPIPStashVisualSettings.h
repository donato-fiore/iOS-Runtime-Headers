// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPSTASHVISUALSETTINGS_H
#define SBPIPSTASHVISUALSETTINGS_H

@class PTSettings;


#import "SBPIPStashMaterialSettings.h"

@interface SBPIPStashVisualSettings : PTSettings

@property (nonatomic) CGFloat completeBlurTransition; // ivar: _completeBlurTransition
@property (retain, nonatomic) SBPIPStashMaterialSettings *darkModeMaterialSettings; // ivar: _darkModeMaterialSettings
@property (retain, nonatomic) SBPIPStashMaterialSettings *lightModeMaterialSettings; // ivar: _lightModeMaterialSettings
@property (nonatomic) CGFloat startBlurTransition; // ivar: _startBlurTransition
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(id)materialSettingsForUserInterfaceStyle:(NSInteger)arg0 ;
-(void)setDefaultValues;


@end


#endif