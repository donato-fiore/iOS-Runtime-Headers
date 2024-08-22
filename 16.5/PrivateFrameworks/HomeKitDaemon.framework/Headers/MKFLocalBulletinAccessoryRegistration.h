// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALBULLETINACCESSORYREGISTRATION_H
#define MKFLOCALBULLETINACCESSORYREGISTRATION_H

@class NSUUID;


#import "MKFLocalBulletinRegistration.h"

@interface MKFLocalBulletinAccessoryRegistration : MKFLocalBulletinRegistration

@property (copy, nonatomic) NSUUID *accessoryModelID;


+(id)fetchRequest;


@end


#endif