// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFNETMONITOR_H
#define HMFNETMONITOR_H

@class NSString;
@protocol HMFLogging, HMFNetMonitorDelegate;


#import "HMFObject.h"
#import "HMFNetAddress.h"

@interface HMFNetMonitor : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    BOOL _reachable;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFNetMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HMFNetAddress *netAddress; // ivar: _netAddress
@property (readonly) NSUInteger reachabilityPath;
@property (getter=isReachable) BOOL reachable;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithNetAddress:(id)arg0 ;
-(id)initWithNetService:(id)arg0 ;


@end


#endif