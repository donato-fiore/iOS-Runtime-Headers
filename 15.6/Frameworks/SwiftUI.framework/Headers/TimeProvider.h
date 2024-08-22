// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIMEPROVIDER_H
#define TIMEPROVIDER_H

@class NSDateFormatter, NSMutableArray, NSDate;


#import "BaseDateProvider.h"

@interface TimeProvider : BaseDateProvider {
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_sizingFallbackBlocks;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date


-(id)_sessionTextForIndex:(NSInteger)arg0 ;
-(id)_timeTextWithDropMinutes:(BOOL)arg0 dropDesignator:(BOOL)arg1 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 locale:(id)arg2 timeZone:(id)arg3 ;


@end


#endif