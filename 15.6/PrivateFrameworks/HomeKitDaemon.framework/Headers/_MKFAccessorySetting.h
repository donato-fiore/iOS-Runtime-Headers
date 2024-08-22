// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFACCESSORYSETTING_H
#define _MKFACCESSORYSETTING_H

@class MKFModel, NSNumber, NSArray, NSSet, NSString, NSUUID, NSData, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySetting, MKFAccessorySettingPrivateExtensions, MKFAccessorySettingGroup, MKFHome;


#import "MKFAccessorySettingDatabaseID.h"
#import "_MKFAccessorySettingGroup.h"

@interface _MKFAccessorySetting : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySetting, MKFAccessorySettingPrivateExtensions>



@property (copy, nonatomic) NSNumber *configurationVersion;
@property (copy, nonatomic) NSNumber *configurationVersion;
@property (readonly, retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSSet *constraints_;
@property (readonly, copy, nonatomic) MKFAccessorySettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFAccessorySettingGroup *group;
@property (readonly, retain, nonatomic) NSObject<MKFAccessorySettingGroup> *group;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSNumber *properties;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSData *value;
@property (retain, nonatomic) NSData *value;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAccessorySetting;
-(id)findConstraintsRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateConstraintsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)synchronizeConstraintsRelationWith:(id)arg0 ;


@end


#endif