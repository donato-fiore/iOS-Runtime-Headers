// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALBULLETINCONDITIONTIMEPERIOD_H
#define MKFLOCALBULLETINCONDITIONTIMEPERIOD_H



#import "MKFLocalBulletinCondition.h"
#import "MKFLocalElementTimePeriod.h"

@interface MKFLocalBulletinConditionTimePeriod : MKFLocalBulletinCondition

@property (retain, nonatomic) MKFLocalElementTimePeriod *endElement;
@property (retain, nonatomic) MKFLocalElementTimePeriod *startElement;


+(id)fetchRequest;


@end


#endif