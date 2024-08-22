// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFHOMESOFTWAREUPDATESETTING_H
#define _MKFHOMESOFTWAREUPDATESETTING_H

@class MKFHomeSetting, NSNumber, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeSoftwareUpdateSetting, MKFHomeSoftwareUpdateSettingPrivateExtensions, MKFHome;


#import "MKFHomeSoftwareUpdateSettingDatabaseID.h"

@interface _MKFHomeSoftwareUpdateSetting : MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeSoftwareUpdateSetting, MKFHomeSoftwareUpdateSettingPrivateExtensions>



@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (readonly, copy, nonatomic) MKFHomeSoftwareUpdateSettingDatabaseID *databaseID;
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


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHomeSoftwareUpdateSetting;


@end


#endif