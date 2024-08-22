// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFACCESSORYSETTINGGROUP_H
#define _MKFACCESSORYSETTINGGROUP_H

@class MKFModel, NSArray, NSSet, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySettingGroup, MKFAccessorySettingGroupPrivateExtensions, MKFAppleMediaAccessory, MKFHome;


#import "_MKFAppleMediaAccessory.h"
#import "MKFAccessorySettingGroupDatabaseID.h"
#import "_MKFAccessorySettingGroup.h"

@interface _MKFAccessorySettingGroup : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySettingGroup, MKFAccessorySettingGroupPrivateExtensions>



@property (retain, nonatomic) _MKFAppleMediaAccessory *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFAppleMediaAccessory> *accessory;
@property (readonly, retain, nonatomic) NSArray *children;
@property (retain, nonatomic) NSSet *children_;
@property (readonly, copy, nonatomic) MKFAccessorySettingGroupDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _MKFAccessorySettingGroup *parent;
@property (retain, nonatomic) NSObject<MKFAccessorySettingGroup> *parent;
@property (readonly, retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSSet *settings_;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(id)castIfAccessorySettingGroup;
-(id)findChildrenRelationWithModelID:(id)arg0 ;
-(id)findSettingsRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateChildrenRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateSettingsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addChildrenObject:(id)arg0 ;
-(void)addSettingsObject:(id)arg0 ;
-(void)removeChildrenObject:(id)arg0 ;
-(void)removeSettingsObject:(id)arg0 ;
-(void)synchronizeChildrenRelationWith:(id)arg0 ;
-(void)synchronizeSettingsRelationWith:(id)arg0 ;


@end


#endif