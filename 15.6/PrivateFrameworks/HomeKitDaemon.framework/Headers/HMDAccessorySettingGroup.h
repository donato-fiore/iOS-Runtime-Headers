// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYSETTINGGROUP_H
#define HMDACCESSORYSETTINGGROUP_H

@class HMFObject, NSMutableSet, NSString, NSArray, NSUUID;
@protocol HMFLogging, NSSecureCoding, HMDSettingGroup, HMDAccessorySettingGroupDataSource;


#import "HMDAccessorySettingGroup.h"

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, NSSecureCoding, HMDSettingGroup>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
}


@property (weak) NSObject<HMDAccessorySettingGroupDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (weak) HMDAccessorySettingGroup *mediaSystemSettingGroup; // ivar: _mediaSystemSettingGroup
@property (readonly, copy) NSString *name; // ivar: _name
@property (copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)supportedGroupsClasses;
+(id)supportedSettingsClasses;
-(BOOL)compareSettingsTree:(id)arg0 ;
-(BOOL)dataSourceShouldEncodeSetting:(id)arg0 withCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPrivateToDevice;
-(BOOL)shouldEncodeForCoder:(id)arg0 ;
-(id)_settingWithKeys:(id)arg0 ;
-(id)copyIdentical;
-(id)copyReplica;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fullDescription;
-(id)groupWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 parentIdentifier:(id)arg2 ;
-(id)logIdentifier;
-(id)settingWithIdentifier:(id)arg0 ;
-(id)settingWithKeyPath:(id)arg0 ;
-(id)settingWithName:(id)arg0 ;
-(id)subGroupWithName:(id)arg0 ;
-(void)_reevaluateParentGroup:(id)arg0 ;
-(void)_setParentGroup:(id)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)addSetting:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)intersectSettingGroup:(id)arg0 groupMetadata:(id)arg1 shouldAddMissingItems:(BOOL)arg2 ;
-(void)removeGroup:(id)arg0 ;
-(void)removeSetting:(id)arg0 ;


@end


#endif