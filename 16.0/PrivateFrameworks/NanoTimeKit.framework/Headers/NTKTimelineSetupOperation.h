// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKTIMELINESETUPOPERATION_H
#define NTKTIMELINESETUPOPERATION_H

@class NSDate, CLKComplicationTimelineEntry, CLKComplicationTemplate;


#import "NTKTimelineDataOperation.h"

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation {
    NSDate *_endDate;
    NSUInteger _privacyBehavior;
    NSUInteger _timelineAnimationBehavior;
    CLKComplicationTimelineEntry *_currentEntry;
    CLKComplicationTemplate *_alwaysOnTemplate;
}


@property (copy, nonatomic) id *handler; // ivar: _handler


-(void)_cancel;
-(void)_getAlwaysOnTemplate;
-(void)_getCurrentEntry;
-(void)_getEndDate;
-(void)_getPrivacyBehavior;
-(void)_getTimelineAnimationBehavior;
-(void)_invokeHandler;
-(void)_start;


@end


#endif