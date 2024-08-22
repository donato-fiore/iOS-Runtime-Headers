// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMUTABLESCHEDULETIME_H
#define DNDMUTABLESCHEDULETIME_H



#import "DNDScheduleTime.h"

@interface DNDMutableScheduleTime : DNDScheduleTime

@property (nonatomic) NSUInteger hour;
@property (nonatomic) NSUInteger minute;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif