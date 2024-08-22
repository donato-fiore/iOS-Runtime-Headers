// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFANNOUNCEUSERSETTINGS_H
#define _MKFANNOUNCEUSERSETTINGS_H

@class MKFModel, NSNumber, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAnnounceUserSettings, MKFAnnounceUserSettingsPrivateExtensions, MKFHome, MKFUser;


#import "MKFAnnounceUserSettingsDatabaseID.h"
#import "_MKFUser.h"

@interface _MKFAnnounceUserSettings : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAnnounceUserSettings, MKFAnnounceUserSettingsPrivateExtensions>



@property (copy, nonatomic) NSNumber *announceNotificationModeForCurrentDevice;
@property (copy, nonatomic) NSNumber *announceNotificationModeForCurrentDevice;
@property (readonly, copy, nonatomic) MKFAnnounceUserSettingsDatabaseID *databaseID;
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
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKFUser *user;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAnnounceUserSettings;


@end


#endif