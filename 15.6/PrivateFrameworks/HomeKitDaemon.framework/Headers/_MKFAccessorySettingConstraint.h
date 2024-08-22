// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFACCESSORYSETTINGCONSTRAINT_H
#define _MKFACCESSORYSETTINGCONSTRAINT_H

@class MKFModel, NSString, NSUUID, NSNumber, NSData, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySettingConstraint, MKFAccessorySettingConstraintPrivateExtensions, MKFHome, MKFAccessorySetting;


#import "MKFAccessorySettingConstraintDatabaseID.h"
#import "_MKFAccessorySetting.h"

@interface _MKFAccessorySettingConstraint : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySettingConstraint, MKFAccessorySettingConstraintPrivateExtensions>



@property (readonly, copy, nonatomic) MKFAccessorySettingConstraintDatabaseID *databaseID;
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
@property (retain, nonatomic) _MKFAccessorySetting *setting;
@property (readonly, retain, nonatomic) NSObject<MKFAccessorySetting> *setting;
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
-(id)castIfAccessorySettingConstraint;
-(id)findSettingRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateSettingRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)synchronizeSettingRelationWith:(id)arg0 ;


@end


#endif