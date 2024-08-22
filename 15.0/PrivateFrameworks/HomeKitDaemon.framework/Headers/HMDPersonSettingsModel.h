// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPERSONSETTINGSMODEL_H
#define HMDPERSONSETTINGSMODEL_H

@class HMBModel, NSData;



@interface HMDPersonSettingsModel : HMBModel

@property (retain) NSData *classificationNotificationSettingsData;


+(BOOL)hmbExcludeFromCloudStorage;
+(id)hmbProperties;
+(id)sentinelModelUUID;
+(id)sentinelParentUUID;
-(id)classificationNotificationsEnabledForPersonUUID:(id)arg0 ;
-(id)init;
-(id)unarchivedClassificationNotificationsEnabledForPersonUUID;
-(void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg0 ;
-(void)setClassificationNotificationsEnabled:(id)arg0 forPersonUUID:(id)arg1 ;


@end


#endif