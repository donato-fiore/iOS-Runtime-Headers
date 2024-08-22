// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSALWAYSONPERIODICTIMELINE_H
#define BLSALWAYSONPERIODICTIMELINE_H

@class NSDate;


#import "BLSAlwaysOnTimeline.h"

@interface BLSAlwaysOnPeriodicTimeline : BLSAlwaysOnTimeline {
    CGFloat _periodicInterval;
    NSDate *_periodicStart;
}




-(NSInteger)requestedFidelityForStartEntryInDateInterval:(id)arg0 withPreviousEntry:(id)arg1 ;
-(id)initWithUpdateInterval:(CGFloat)arg0 startDate:(id)arg1 identifier:(id)arg2 configure:(id)arg3 ;
-(id)unconfiguredEntriesForDateInterval:(id)arg0 previousEntry:(id)arg1 ;


@end


#endif