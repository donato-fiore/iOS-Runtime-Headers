// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIUPDATEHIDDIGITIZERINPUT_H
#define _UIUPDATEHIDDIGITIZERINPUT_H

@class NSMutableArray, NSMutableSet;
@protocol _UIUpdateHIDAbstractInput;

#import <Foundation/Foundation.h>


@interface _UIUpdateHIDDigitizerInput : NSObject <_UIUpdateHIDAbstractInput>

 {
    _UIUpdateInputInternal _input;
    NSMutableArray *_events;
    NSMutableSet *_touches;
    NSInteger _eventModelTimeDifference;
    NSInteger _eventModelTimeDifferenceMin;
    NSInteger _eventModelTimeDifferenceMax;
    NSUInteger _periodDuration;
    NSUInteger _sendPeriodDuration;
    BOOL _hasNextEventInformation;
    NSInteger _nextEventReceiveDeadlineTimeDifference;
    NSUInteger _eventPhaseTime;
    BOOL _nextEventExpected;
    ? _eventExpectedProperties;
    ? _eventNotExpectedProperties;
}




-(BOOL)readyForModelTime:(NSUInteger)arg0 readyTime:(*NSUInteger)arg1 ;
-(id)init;
-(struct __IOHIDEvent *)stopEventForModelTime:(NSUInteger)arg0 ;
-(void)addEvent:(struct __IOHIDEvent *)arg0 ;
-(void)removeEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif