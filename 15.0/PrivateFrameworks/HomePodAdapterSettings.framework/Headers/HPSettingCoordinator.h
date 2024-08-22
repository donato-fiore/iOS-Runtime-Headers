// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGCOORDINATOR_H
#define HPSETTINGCOORDINATOR_H

@class HPSettingsManager;

#import <Foundation/Foundation.h>


@interface HPSettingCoordinator : NSObject

@property (retain, nonatomic) HPSettingsManager *settingsManager; // ivar: _settingsManager


+(id)settingCoordinator;
-(id)init;
-(void)accessorySettingKeyPathValueForHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPath:(id)arg2 completionHandler:(id)arg3 ;
-(void)homeKitCachedSettingsInternal:(id)arg0 ;
-(void)homeKitSettingKeyPathValueForAccessoryIdentifier:(id)arg0 homeIdentifier:(id)arg1 keyPath:(id)arg2 value:(id)arg3 completionHandler:(id)arg4 ;
-(void)homeKitSettingValueForKeyPathInternal:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif