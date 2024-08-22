// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFLOCALBULLETINSERVICEREGISTRATION_H
#define MKFLOCALBULLETINSERVICEREGISTRATION_H



#import "MKFLocalBulletinAccessoryRegistration.h"

@interface MKFLocalBulletinServiceRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) NSInteger serviceInstanceID;


+(id)fetchRequest;
+(id)fetchServiceRegistrationForAccessoryUUID:(id)arg0 serviceInstanceID:(id)arg1 managedObjectContext:(id)arg2 ;


@end


#endif