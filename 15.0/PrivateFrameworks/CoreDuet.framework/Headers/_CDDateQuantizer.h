// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDDATEQUANTIZER_H
#define _CDDATEQUANTIZER_H

@class NSCalendar, NSDate, NSDateComponents;

#import <Foundation/Foundation.h>


@interface _CDDateQuantizer : NSObject {
    NSCalendar *_calendar;
    NSInteger _dayStartHour;
    NSDate *_currentDay;
    NSDateComponents *_currentQuantizationOffsetComponents;
}






@end


#endif