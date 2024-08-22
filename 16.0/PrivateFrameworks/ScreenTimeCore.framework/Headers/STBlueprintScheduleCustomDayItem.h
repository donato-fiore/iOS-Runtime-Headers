// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STBLUEPRINTSCHEDULECUSTOMDAYITEM_H
#define STBLUEPRINTSCHEDULECUSTOMDAYITEM_H

@class NSDateComponents;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STBlueprintScheduleCustomDayItem : NSObject <NSCopying>



@property (nonatomic) NSUInteger day; // ivar: _day
@property (retain, nonatomic) NSDateComponents *endTime; // ivar: _endTime
@property (retain, nonatomic) NSDateComponents *startTime; // ivar: _startTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif