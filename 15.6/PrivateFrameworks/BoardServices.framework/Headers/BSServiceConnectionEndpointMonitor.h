// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSSERVICECONNECTIONENDPOINTMONITOR_H
#define BSSERVICECONNECTIONENDPOINTMONITOR_H

@class NSDictionary, NSMutableSet, NSString;
@protocol BSServiceMonitor, BSInvalidatable, BSServiceConnectionEndpointMonitorDelegate;

#import <Foundation/Foundation.h>

#import "BSServiceManager.h"

@interface BSServiceConnectionEndpointMonitor : NSObject <BSServiceMonitor, BSInvalidatable>

 {
    BSServiceManager *_manager;
    os_unfair_lock_s _lock;
    id<BSServiceConnectionEndpointMonitorDelegate> *_lock_delegate;
    NSDictionary *_lock_endpointToEnvironments;
    NSMutableSet *_lock_serialCallOut_endpoints;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    os_unfair_lock_s _registrationLock;
    id<BSInvalidatable> *_registrationLock_assertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BSServiceConnectionEndpointMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;


+(id)monitorForService:(id)arg0 ;
-(id)endpointsForEnvironment:(id)arg0 ;
-(id)init;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)serialCallOut_didUpdateEndpointEnvironments:(id)arg0 ;


@end


#endif