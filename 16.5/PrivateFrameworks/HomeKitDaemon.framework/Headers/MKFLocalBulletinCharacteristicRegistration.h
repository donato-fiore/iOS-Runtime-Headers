// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALBULLETINCHARACTERISTICREGISTRATION_H
#define MKFLOCALBULLETINCHARACTERISTICREGISTRATION_H



#import "MKFLocalBulletinAccessoryRegistration.h"

@interface MKFLocalBulletinCharacteristicRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) NSInteger characteristicInstanceID;
@property (nonatomic) NSInteger serviceInstanceID;


+(id)fetchCharacteristicRegistrationForAccessoryUUID:(id)arg0 serviceInstanceID:(id)arg1 characteristicInstanceID:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)fetchRequest;


@end


#endif