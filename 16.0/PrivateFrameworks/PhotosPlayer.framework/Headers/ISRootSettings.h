// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISROOTSETTINGS_H
#define ISROOTSETTINGS_H



#import "ISSettings.h"
#import "ISPerformanceDiagnosticsSettings.h"
#import "ISPlayerSettings.h"
#import "ISVitalitySettings.h"

@interface ISRootSettings : ISSettings

@property (retain, nonatomic) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings; // ivar: _performanceDiagnosticsSettings
@property (retain, nonatomic) ISPlayerSettings *playerSettings; // ivar: _playerSettings
@property (retain, nonatomic) ISVitalitySettings *vitalitySettings; // ivar: _vitalitySettings


+(id)_defaultsKey;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(void)save;
-(void)setDefaultValues;


@end


#endif