// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20SCREENTIMESETTINGSUI23SETTINGSPRESETVIEWMODEL_H
#define _TTC20SCREENTIMESETTINGSUI23SETTINGSPRESETVIEWMODEL_H


#import <Foundation/Foundation.h>


@interface _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel : NSObject {
    ? dsid;
    ? childAge;
    ? restrictionsToPresetMappingViewModel;
    ? restrictionsDataSource;
    ? agePresetsAnalytics;
    ? isInitialSetup;
    ? _availablePresets;
    ? _ratings;
    ? _selectedPresetIndex;
    ? _restrictions;
    ? _showLoadingIndicator;
}




-(id)init;
-(id)initWithDsid:(id)arg0 childAge:(id)arg1 isInitialSetup:(BOOL)arg2 restrictionsToPresetMappingViewModel:(id)arg3 restrictionsDataSource:(id)arg4 agePresetsAnalytics:(id)arg5 ;
-(void)loadWithCompletionHandler:(id)arg0 ;


@end


#endif