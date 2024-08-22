// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALBULLETINREGISTRATION_H
#define MKFLOCALBULLETINREGISTRATION_H

@class NSSet;


#import "HMDManagedObject.h"

@interface MKFLocalBulletinRegistration : HMDManagedObject

@property (retain, nonatomic) NSSet *conditions;
@property (nonatomic) BOOL enabled;


+(id)fetchRequest;


@end


#endif