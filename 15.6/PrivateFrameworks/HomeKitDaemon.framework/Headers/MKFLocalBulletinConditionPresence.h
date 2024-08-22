// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFLOCALBULLETINCONDITIONPRESENCE_H
#define MKFLOCALBULLETINCONDITIONPRESENCE_H

@class NSUUID, NSSet;


#import "MKFLocalBulletinCondition.h"

@interface MKFLocalBulletinConditionPresence : MKFLocalBulletinCondition

@property (copy, nonatomic) NSUUID *eventUUID;
@property (nonatomic) NSInteger presenceEventType;
@property (nonatomic) NSInteger presenceEventUserType;
@property (retain, nonatomic) NSSet *userModelIDs;


+(id)fetchRequest;


@end


#endif