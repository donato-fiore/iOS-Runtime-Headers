// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGSCONTROLLER_H
#define HMSETTINGSCONTROLLER_H

@class NSMapTable, NSString, NSDictionary, NSUUID;
@protocol HMFLogging, HMSettingManager, HMSettingsOwner, HMSettingsDelegate;

#import <Foundation/Foundation.h>

#import "HMSettingGroup.h"
#import "_HMContext.h"
#import "HMSettingsMessageHandler.h"
#import "HMSettings.h"

@interface HMSettingsController : NSObject <HMFLogging, HMSettingManager, HMSettingsOwner>

 {
    os_unfair_lock_s _lock;
    HMSettingGroup *_rootGroup;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
}


@property (readonly) NSString *codingKey; // ivar: _codingKey
@property (retain) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSettingsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *encodedSettings; // ivar: _encodedSettings
@property (readonly) NSUInteger hash;
@property (retain) HMSettingsMessageHandler *messageHandler; // ivar: _messageHandler
@property (readonly) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly) HMSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)hasSettingGroups;
-(BOOL)hasSettings;
-(id)initWithParentIdentifier:(id)arg0 codingKey:(id)arg1 ;
-(id)initWithParentIdentifier:(id)arg0 codingKey:(id)arg1 messageHandler:(id)arg2 settingsCreator:(id)arg3 ;
-(id)logIdentifier;
-(id)settingForIdentifier:(id)arg0 ;
-(id)settingGroupForIdentifier:(id)arg0 ;
-(void)__notifyDelegateDidUpdateKeyPath:(id)arg0 ;
-(void)__notifyDelegateSettingsDidUpdate;
-(void)configureWithContext:(id)arg0 ;
-(void)decodeWithCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 settingsInitializedWasModified:(BOOL)arg1 ;
-(void)notifyDelegateOfUpdate;
-(void)setSetting:(id)arg0 withGroupIdentifier:(id)arg1 ;
-(void)setSettingGroup:(id)arg0 withParentGroupIdentifier:(id)arg1 ;
-(void)updateValueForSetting:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif