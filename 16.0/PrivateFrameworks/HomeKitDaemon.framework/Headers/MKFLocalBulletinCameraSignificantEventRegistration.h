// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFLOCALBULLETINCAMERASIGNIFICANTEVENTREGISTRATION_H
#define MKFLOCALBULLETINCAMERASIGNIFICANTEVENTREGISTRATION_H



#import "MKFLocalBulletinAccessoryRegistration.h"

@interface MKFLocalBulletinCameraSignificantEventRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) NSInteger notificationModes;
@property (nonatomic) NSInteger personFamiliarityOptions;
@property (nonatomic) NSInteger significantEventTypes;


+(id)fetchCameraSignificantEventRegistrationForAccessoryUUID:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)fetchRequest;


@end


#endif