// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIEVENTFETCHER_H
#define UIEVENTFETCHER_H

@class NSMutableArray, CADisplayLink, NSMutableDictionary, NSMutableSet;
@protocol UIEventFetcherSink;

#import <Foundation/Foundation.h>

#import "_UIHIDEventSynchronizer.h"

@interface UIEventFetcher : NSObject {
    NSMutableArray *_incomingHIDEventsFiltered;
    *__CFRunLoop _cfRunLoop;
    id *_receiveBlock;
    id *_addToFilteredEventsBlock;
    id *_gameControllerEventFilterGenerator;
    id *_passiveObservationFilterGenerator;
    id *_watchSystemAppFilter;
    NSMutableArray *_eventFilters;
    int _displayLinkIdleTicks;
    CADisplayLink *_displayLink;
    NSInteger _countOfEventsReceivedSinceLastDisplayLinkCallback;
    NSInteger _countOfEventsReceivedInPreviousFrame;
    BOOL _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    CGFloat _lastImportantEventTimestamp;
    CGFloat _lastSignalTimestamp;
    CGFloat _lastSignalEventTimestamp;
    CGFloat _lastFilteredEventTimestamp;
    CGFloat _estimatedDisplayLinkDrift;
    NSInteger _lastSignalType;
    NSUInteger _lastSignalReason;
    BOOL _needsSignalOnDisplayLink;
    CGFloat _commitTimeForTouchEvents;
    CGFloat _beginTimeForTouchEvents;
    CGFloat _deadlineTimeForTouchEvents;
    NSMutableDictionary *_latestMoveDragEventsBySessionID;
    CGFloat _latestMoveDragEventTimestamp;
    CGFloat _latestMoveDragEventResendTimestamp;
    *__CFRunLoopTimer _resendDragEventsTimer;
    NSMutableSet *_contextIDsNeedingHoverEventResend;
    NSMutableDictionary *_latestHoverEventsByContextID;
    _UIHIDEventSynchronizer *_synchronizer;
    id<UIEventFetcherSink> *_eventFetcherSink;
}




-(id)init;
-(void)_receiveHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)displayLinkDidFire:(id)arg0 ;
-(void)resendDragMoveEventsOnTimer:(struct __CFRunLoopTimer *)arg0 withInterval:(CGFloat)arg1 ;
-(void)threadMain;


@end


#endif