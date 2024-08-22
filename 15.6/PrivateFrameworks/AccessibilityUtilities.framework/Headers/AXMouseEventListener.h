// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMOUSEEVENTLISTENER_H
#define AXMOUSEEVENTLISTENER_H

@class NSSet, NSHashTable, NSString;
@protocol AXDeviceMonitorDelegate;

#import <Foundation/Foundation.h>

#import "AXDeviceMonitor.h"
#import "AXEventProcessor.h"

@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate>

 {
    AXDeviceMonitor *_deviceMonitor;
    AXEventProcessor *_eventProcessor;
    os_unfair_lock_s _cachedMouseDevicesLock;
    NSSet *_cachedMouseDevices;
    os_unfair_lock_s _observerLock;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) BOOL currentDevicesHaveAssistiveTouchCustomActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_mouseMatching;
+(id)sharedInstance;
-(BOOL)_handleMouseButtonEvent:(id)arg0 ;
-(id)_init;
-(id)discoveredMouseDevices;
-(void)_finishHandlingMouseButtonEvent:(id)arg0 buttonMask:(CGFloat)arg1 creatorHIDServiceClient:(struct __IOHIDServiceClient *)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)beginFilteringButtonEvents;
-(void)dealloc;
-(void)deviceMonitorDidDetectDeviceEvent:(id)arg0 ;
-(void)endFilteringButtonEvents;
-(void)mouseSettingsDidChange;
-(void)removeObserver:(id)arg0 ;


@end


#endif