// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACUISETTINGSPLUGINMANAGER_H
#define ACUISETTINGSPLUGINMANAGER_H

@class PSViewController<ACUISettingsPluginParentProtocol>, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACUISettingsPluginManager : NSObject {
    PSViewController<ACUISettingsPluginParentProtocol> *_parentViewController;
    NSMutableDictionary *_pluginCache;
}




-(id)_loadSettingsPluginFromBundleWithName:(id)arg0 ;
-(id)_settingsPluginFromBundleWithName:(id)arg0 ;
-(id)calendarSettingsPlugin;
-(id)contactsSettingsPlugin;
-(id)initWithParentViewController:(id)arg0 ;
-(id)mailSettingsPlugin;
-(void)parentViewControllerWillDisappear;


@end


#endif