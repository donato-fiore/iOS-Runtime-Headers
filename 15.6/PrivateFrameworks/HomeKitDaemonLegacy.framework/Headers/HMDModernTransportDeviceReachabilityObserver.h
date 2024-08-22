// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVER_H
#define HMDMODERNTRANSPORTDEVICEREACHABILITYOBSERVER_H

@class HMFObject, NSMapTable, NSString;
@protocol HMDModernRemoteMessageTransportReachabilityDelegate;



@interface HMDModernTransportDeviceReachabilityObserver : HMFObject <HMDModernRemoteMessageTransportReachabilityDelegate>

 {
    os_unfair_lock_s _lock;
    NSMapTable *_deviceToListenersMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)isDeviceReachable:(id)arg0 ;
-(void)addListener:(id)arg0 forDevice:(id)arg1 ;
-(void)removeListener:(id)arg0 forDevice:(id)arg1 ;
-(void)transport:(id)arg0 device:(id)arg1 didAppearReachable:(BOOL)arg2 ;


@end


#endif