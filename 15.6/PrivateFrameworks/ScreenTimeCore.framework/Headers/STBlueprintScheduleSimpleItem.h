// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STBLUEPRINTSCHEDULESIMPLEITEM_H
#define STBLUEPRINTSCHEDULESIMPLEITEM_H

@class NSDateComponents;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STBlueprintScheduleSimpleItem : NSObject <NSCopying>



@property (retain, nonatomic) NSDateComponents *endTime; // ivar: _endTime
@property (retain, nonatomic) NSDateComponents *startTime; // ivar: _startTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif