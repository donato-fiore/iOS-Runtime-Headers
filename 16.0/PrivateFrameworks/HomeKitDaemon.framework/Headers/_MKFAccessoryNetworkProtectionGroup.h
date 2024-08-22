// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFACCESSORYNETWORKPROTECTIONGROUP_H
#define _MKFACCESSORYNETWORKPROTECTIONGROUP_H

@class MKFModel, NSNumber, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessoryNetworkProtectionGroup, MKFAccessoryNetworkProtectionGroupPrivateExtensions, MKFHome;


#import "MKFAccessoryNetworkProtectionGroupDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFAccessoryNetworkProtectionGroup : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessoryNetworkProtectionGroup, MKFAccessoryNetworkProtectionGroupPrivateExtensions>



@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *category;
@property (readonly, copy, nonatomic) MKFAccessoryNetworkProtectionGroupDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *targetProtectionMode;
@property (copy, nonatomic) NSNumber *targetProtectionMode;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAccessoryNetworkProtectionGroup;


@end


#endif