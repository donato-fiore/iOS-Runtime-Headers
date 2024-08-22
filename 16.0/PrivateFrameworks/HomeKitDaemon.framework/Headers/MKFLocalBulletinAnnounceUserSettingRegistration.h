// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFLOCALBULLETINANNOUNCEUSERSETTINGREGISTRATION_H
#define MKFLOCALBULLETINANNOUNCEUSERSETTINGREGISTRATION_H

@class NSUUID;


#import "MKFLocalBulletinRegistration.h"

@interface MKFLocalBulletinAnnounceUserSettingRegistration : MKFLocalBulletinRegistration

@property (nonatomic) NSInteger announceNotificationMode;
@property (copy, nonatomic) NSUUID *homeUUID;


+(id)fetchAnnounceRegistrationWithHomeUUID:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)fetchRequest;


@end


#endif