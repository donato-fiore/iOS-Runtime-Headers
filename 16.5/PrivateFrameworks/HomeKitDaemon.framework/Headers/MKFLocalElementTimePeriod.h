// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALELEMENTTIMEPERIOD_H
#define MKFLOCALELEMENTTIMEPERIOD_H



#import "HMDManagedObject.h"
#import "MKFLocalBulletinConditionTimePeriod.h"

@interface MKFLocalElementTimePeriod : HMDManagedObject

@property (retain, nonatomic) MKFLocalBulletinConditionTimePeriod *endCondition;
@property (retain, nonatomic) MKFLocalBulletinConditionTimePeriod *startCondition;


+(id)fetchRequest;


@end


#endif