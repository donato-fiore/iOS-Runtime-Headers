// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSALWAYSONFREQUENCYPERMINUTETIMELINE_H
#define BLSALWAYSONFREQUENCYPERMINUTETIMELINE_H

@class NSCalendar;


#import "BLSAlwaysOnTimeline.h"

@interface BLSAlwaysOnFrequencyPerMinuteTimeline : BLSAlwaysOnTimeline {
    NSCalendar *_calendar;
    NSInteger _frequencyPerMinute;
}




-(NSInteger)requestedFidelityForStartEntryInDateInterval:(id)arg0 withPreviousEntry:(id)arg1 ;
-(id)initWithPerMinuteUpdateFrequency:(NSInteger)arg0 identifier:(id)arg1 configure:(id)arg2 ;
-(id)unconfiguredEntriesForDateInterval:(id)arg0 previousEntry:(id)arg1 ;


@end


#endif