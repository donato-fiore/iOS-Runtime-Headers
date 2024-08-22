// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STBLUEPRINTSCHEDULEREPRESENTATION_H
#define STBLUEPRINTSCHEDULEREPRESENTATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "STBlueprintScheduleSimpleItem.h"

@interface STBlueprintScheduleRepresentation : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *customScheduleItems; // ivar: _customScheduleItems
@property (retain, nonatomic) STBlueprintScheduleSimpleItem *simpleSchedule; // ivar: _simpleSchedule


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif