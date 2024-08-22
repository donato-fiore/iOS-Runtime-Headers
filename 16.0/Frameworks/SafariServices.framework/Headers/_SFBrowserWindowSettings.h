// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFBROWSERWINDOWSETTINGS_H
#define _SFBROWSERWINDOWSETTINGS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _SFBrowserWindowSettings : NSObject {
    NSMutableDictionary *_settingsDictionary;
    BOOL _synchronizeScheduled;
}


@property (readonly, nonatomic) BOOL hasPrivateBrowsingWindow;
@property (nonatomic) BOOL invalidatesClosedWindows; // ivar: _invalidatesClosedWindows


+(id)settings;
+(void)setSharedSettings:(id)arg0 ;
-(BOOL)_boolValueForKey:(id)arg0 windowUUID:(id)arg1 ;
-(BOOL)activeDocumentIsValidForWindowWithUUID:(id)arg0 ;
-(BOOL)isShowingTabViewForWindowWithUUID:(id)arg0 ;
-(BOOL)privateBrowsingEnabledForWindowWithUUID:(id)arg0 ;
-(id)_blankSnapshotKeyForPrivateBrowsing:(BOOL)arg0 syncableTabGroupUUID:(id)arg1 ;
-(id)_numberForKey:(id)arg0 windowUUID:(id)arg1 ;
-(id)_stringForKey:(id)arg0 windowUUID:(id)arg1 ;
-(id)blankSnapshotGroupIdentifierForPrivateBrowsing:(BOOL)arg0 syncableTabGroupUUID:(id)arg1 forWindowWithUUID:(id)arg2 ;
-(id)init;
-(void)_initializeSettingsDictionaryIfNeeded;
-(void)_setBool:(BOOL)arg0 forKey:(id)arg1 windowUUID:(id)arg2 ;
-(void)_setString:(id)arg0 forKey:(id)arg1 windowUUID:(id)arg2 ;
-(void)_synchronizeNow;
-(void)removeWindowWithUUID:(id)arg0 ;
-(void)setActiveDocumentIsValid:(BOOL)arg0 forWindowWithUUID:(id)arg1 ;
-(void)setBlankSnapshotGroupIdentifier:(id)arg0 forPrivateBrowsing:(BOOL)arg1 syncableTabGroupUUID:(id)arg2 forWindowWithUUID:(id)arg3 ;
-(void)setIsShowingTabView:(BOOL)arg0 forWindowWithUUID:(id)arg1 ;
-(void)setPrivateBrowsingEnabled:(BOOL)arg0 forWindowWithUUID:(id)arg1 ;
-(void)synchronize;
-(void)validateWindowSettingsWithUUIDs:(id)arg0 ;


@end


#endif