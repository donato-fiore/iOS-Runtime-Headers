// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKHIDSYSTEM_H
#define BKHIDSYSTEM_H

@class NSString;
@protocol BKHIDSystemInterfacing, OS_dispatch_queue, OS_dispatch_mach, BKHIDSystemDelegate, BKHIDEventDispatcherProviding, BKHIDEventProcessor, BKHIDDisplayChangeObserving;

#import <Foundation/Foundation.h>

#import "BKHIDClientConnectionManager.h"
#import "BKHIDEventDeliveryManager.h"
#import "BKHIDEventSenderCache.h"

@interface BKHIDSystem : NSObject <BKHIDSystemInterfacing>

 {
    *__IOHIDEventSystem _HIDEventSystem;
    *__IOHIDEventSystemClient _HIDEventSystemClient;
    NSObject<OS_dispatch_queue> *_gsEventQueue;
}


@property (retain, getter=HIDSystemChannel) NSObject<OS_dispatch_mach> *HIDSystemChannel; // ivar: _HIDSystemChannel
@property (readonly) BKHIDClientConnectionManager *clientConnectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<BKHIDSystemDelegate> *delegate; // ivar: _delegate
@property (readonly) BKHIDEventDeliveryManager *deliveryManager; // ivar: _deliveryManager
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BKHIDEventDispatcherProviding> *dispatcherProvider; // ivar: _dispatcherProvider
@property (readonly, nonatomic) NSObject<BKHIDEventProcessor> *eventProcessor; // ivar: _eventProcessor
@property (getter=isFullyInitialized) BOOL fullyInitialized; // ivar: _fullyInitialized
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BKHIDDisplayChangeObserving> *mainDisplayObserver; // ivar: _mainDisplayObserver
@property (readonly) BKHIDEventSenderCache *senderCache; // ivar: _senderCache
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)IOHIDServicesMatching:(id)arg0 ;
-(id)init;
-(id)systemPropertyForKey:(id)arg0 ;
-(struct __IOHIDEvent *)systemEventOfType:(unsigned int)arg0 matchingEvent:(struct __IOHIDEvent *)arg1 options:(unsigned int)arg2 ;
-(void)_beginHandlingEvents;
-(void)_performSynchronized:(id)arg0 ;
-(void)dealloc;
-(void)injectGSEvent:(struct __GSEvent *)arg0 ;
-(void)injectHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)registerIOHIDServicesCallback:(*unk)arg0 matchingDictionary:(id)arg1 target:(*void)arg2 refCon:(*void)arg3 ;
-(void)setSystemProperty:(id)arg0 forKey:(id)arg1 ;
-(void)startEventProcessor:(id)arg0 mainDisplayObserver:(id)arg1 deliveryManager:(id)arg2 dispatcherProvider:(id)arg3 ;
-(void)startEventRouting;
-(void)startHIDSystem;
-(void)startServerWithChannel:(id)arg0 ;
-(void)unregisterIOHIDServicesCallback:(*unk)arg0 matchingDictionary:(id)arg1 target:(*void)arg2 refCon:(*void)arg3 ;


@end


#endif