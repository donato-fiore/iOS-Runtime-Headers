// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXTERNALDISPLAYRUNTIMEAVAILABILITYSETTINGS_H
#define SBEXTERNALDISPLAYRUNTIMEAVAILABILITYSETTINGS_H

@class PTSettings;



@interface SBExternalDisplayRuntimeAvailabilitySettings : PTSettings

@property (readonly, nonatomic) NSInteger extendedDisplayRequirements;
@property (nonatomic) BOOL requireHardwareKeyboard; // ivar: _requireHardwareKeyboard
@property (nonatomic) BOOL requirePointer; // ivar: _requirePointer


+(BOOL)ignoresKey:(id)arg0 ;
+(id)_moduleWithSectionTitle:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif