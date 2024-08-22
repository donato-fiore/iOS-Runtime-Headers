// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTINGGROUP_H
#define HMACCESSORYSETTINGGROUP_H

@class NSMutableSet, NSString, NSArray;
@protocol _HMAccesorySettingGroupDelegate, HMFLogging;


#import "HMSettingGroup.h"
#import "HMAccessorySettingGroup.h"
#import "_HMAccessorySettingGroup.h"

@interface HMAccessorySettingGroup : HMSettingGroup <_HMAccesorySettingGroupDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) HMAccessorySettingGroup *group; // ivar: _group
@property (readonly, copy) NSArray *groups;
@property (readonly) NSUInteger hash;
@property (readonly) _HMAccessorySettingGroup *internal; // ivar: _internal
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReflectedEqual:(id)arg0 ;
-(id)accessorySettingGroupWithKeyPath:(id)arg0 ;
-(id)accessorySettingWithKeyPath:(id)arg0 ;
-(id)init;
-(id)initWithInternal:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 ;
-(id)keyPath;
-(id)logIdentifier;
-(void)_notifyClientOfAddedGroup:(id)arg0 ;
-(void)_notifyClientOfAddedSetting:(id)arg0 ;
-(void)_notifyClientOfRemovedGroup:(id)arg0 ;
-(void)_notifyClientOfRemovedSetting:(id)arg0 ;
-(void)_settingGroup:(id)arg0 didAddSetting:(id)arg1 ;
-(void)_settingGroup:(id)arg0 didAddSettingGroup:(id)arg1 ;
-(void)_settingGroup:(id)arg0 didRemoveSetting:(id)arg1 ;
-(void)_settingGroup:(id)arg0 didRemoveSettingGroup:(id)arg1 ;
-(void)addGroup:(id)arg0 ;
-(void)addSetting:(id)arg0 ;
-(void)mergeReflected:(id)arg0 ;
-(void)removeGroup:(id)arg0 ;
-(void)removeSetting:(id)arg0 ;


@end


#endif