// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYSETTINGSUTILITIES_H
#define HUACCESSORYSETTINGSUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUAccessorySettingsUtilities : NSObject



+(BOOL)_shouldCollapseModuleForGroupKeyPath:(id)arg0 ;
+(BOOL)_shouldSkipModuleCreationForGroupKeyPath:(id)arg0 accessory:(id)arg1 home:(id)arg2 ;
+(id)generateModulesFromSettingsDictionary:(id)arg0 itemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 usageOptions:(id)arg4 settingsController:(id)arg5 ;


@end


#endif