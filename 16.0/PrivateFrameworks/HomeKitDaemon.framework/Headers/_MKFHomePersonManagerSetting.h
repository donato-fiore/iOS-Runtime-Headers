// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFHOMEPERSONMANAGERSETTING_H
#define _MKFHOMEPERSONMANAGERSETTING_H

@class MKFHomeSetting, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomePersonManagerSetting, MKFHomePersonManagerSettingPrivateExtensions, MKFHome;


#import "MKFHomePersonManagerSettingDatabaseID.h"

@interface _MKFHomePersonManagerSetting : MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomePersonManagerSetting, MKFHomePersonManagerSettingPrivateExtensions>



@property (readonly, copy, nonatomic) MKFHomePersonManagerSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSUUID *zoneUUID;
@property (copy, nonatomic) NSUUID *zoneUUID;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHomePersonManagerSetting;


@end


#endif