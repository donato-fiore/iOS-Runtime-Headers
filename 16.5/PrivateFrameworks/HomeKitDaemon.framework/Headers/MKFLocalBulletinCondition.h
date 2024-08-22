// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALBULLETINCONDITION_H
#define MKFLOCALBULLETINCONDITION_H



#import "HMDManagedObject.h"
#import "MKFLocalBulletinRegistration.h"

@interface MKFLocalBulletinCondition : HMDManagedObject

@property (retain, nonatomic) MKFLocalBulletinRegistration *registration;


+(id)fetchRequest;


@end


#endif