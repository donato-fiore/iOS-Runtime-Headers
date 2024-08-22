// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXEVENTPROCESSOR_H
#define AXEVENTPROCESSOR_H

@class NSThread, NSString, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface AXEventProcessor : NSObject {
    BOOL _shouldRunHIDReceiveThreadRunloop;
}


@property (nonatomic) NSUInteger HIDEventFilterMask; // ivar: _HIDEventFilterMask
@property (copy, nonatomic) id *HIDEventHandler; // ivar: _HIDEventHandler
@property (retain, nonatomic) NSThread *HIDEventReceiveThread; // ivar: _HIDEventReceiveThread
@property (retain, nonatomic) NSString *HIDEventTapIdentifier; // ivar: _HIDEventTapIdentifier
@property (nonatomic) int HIDEventTapPriority; // ivar: _HIDEventTapPriority
@property (copy, nonatomic) id *failedToHandleEventInTime; // ivar: _failedToHandleEventInTime
@property (nonatomic, getter=isHandlingHIDEvents) BOOL handlingHIDEvents; // ivar: _handlingHIDEvents
@property (nonatomic, getter=isHandlingSystemEvents) BOOL handlingSystemEvents; // ivar: _handlingSystemEvents
@property (retain, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons; // ivar: _hidActualEventTapEnabledReasons
@property (readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
@property (nonatomic) BOOL ignoreAllSystemEvents; // ivar: _ignoreAllSystemEvents
@property (nonatomic) BOOL shouldNotifyUserEventOccurred; // ivar: _shouldNotifyUserEventOccurred
@property (retain, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons; // ivar: _systemActualEventTapEnabledReasons
@property (copy, nonatomic) id *systemEventHandler; // ivar: _systemEventHandler
@property (readonly, weak, nonatomic) NSArray *systemEventTapEnabledReasons;
@property (retain, nonatomic) NSString *systemEventTapIdentifier; // ivar: _systemEventTapIdentifier
@property (nonatomic) int systemEventTapPriority; // ivar: _systemEventTapPriority


-(id)init;
-(id)initWithHIDTapIdentifier:(id)arg0 HIDEventTapPriority:(int)arg1 systemEventTapIdentifier:(id)arg2 systemEventTapPriority:(int)arg3 ;
-(void)_installHIDEventFilter;
-(void)_installSystemEventFilter;
-(void)_threadStop;
-(void)_uninstallHIDEventFilter;
-(void)_uninstallSystemEventFilter;
-(void)beginHandlingHIDEventsForReason:(id)arg0 ;
-(void)beginHandlingSystemEventsForReason:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)endHandlingHIDEventsForReason:(id)arg0 ;
-(void)endHandlingSystemEventsForReason:(id)arg0 ;
-(void)raiseSystemEventTapPriorityToMaximum;
-(void)restoreSystemEventTapPriorityToDefault;


@end


#endif