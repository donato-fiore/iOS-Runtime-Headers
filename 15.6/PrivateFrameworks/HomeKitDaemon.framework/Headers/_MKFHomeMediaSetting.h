// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFHOMEMEDIASETTING_H
#define _MKFHOMEMEDIASETTING_H

@class MKFHomeSetting, NSString, NSUUID, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeMediaSetting, MKFHomeMediaSettingPrivateExtensions, MKFHome;


#import "MKFHomeMediaSettingDatabaseID.h"

@interface _MKFHomeMediaSetting : MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeMediaSetting, MKFHomeMediaSettingPrivateExtensions>



@property (readonly, copy, nonatomic) MKFHomeMediaSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSString *mediaPassword;
@property (copy, nonatomic) NSString *mediaPassword;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHomeMediaSetting;


@end


#endif