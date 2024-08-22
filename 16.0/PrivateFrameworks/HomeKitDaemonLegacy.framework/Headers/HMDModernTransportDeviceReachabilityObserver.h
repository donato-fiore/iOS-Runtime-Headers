// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVER_H
#define HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVER_H

@class HMFObject, NSMapTable, NSMutableArray, HMFTimer, NSString;
@protocol HMFTimerDelegate, HMDRemoteMessageTransportReachabilityDelegate, HMDTimerProvider, HMDDateProvider;



@interface HMDModernTransportDeviceReachabilityObserver : HMFObject <HMFTimerDelegate, HMDRemoteMessageTransportReachabilityDelegate>

 {
    os_unfair_lock_s _lock;
    NSMapTable *_deviceToListenersMap;
    NSMutableArray *_devicesWithPendingUnreachability;
    id<HMDTimerProvider> *_timerProvider;
    id<HMDDateProvider> *_dateProvider;
    HMFTimer *_debounceTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithTimerProvider:(id)arg0 dateProvider:(id)arg1 ;
-(id)isDeviceAddressReachable:(id)arg0 ;
-(void)_clearUnreachablePendingForContext:(id)arg0 ;
-(void)_evaluateDebounceTimer;
-(void)_notifyListeners:(id)arg0 address:(id)arg1 isReachable:(BOOL)arg2 ;
-(void)_serviceExpiredUnreachableDevices;
-(void)_setUnreachablePendingForContext:(id)arg0 ;
-(void)addListener:(id)arg0 forDeviceAddress:(id)arg1 ;
-(void)removeListener:(id)arg0 forDeviceAddress:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;
-(void)transport:(id)arg0 idsIdentifier:(id)arg1 didAppearReachable:(BOOL)arg2 ;


@end


#endif