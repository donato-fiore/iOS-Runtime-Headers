// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDAEMONREQUESTTIMER_H
#define IDSDAEMONREQUESTTIMER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSDaemonRequestTimer : NSObject {
    NSMutableDictionary *_requestContextMap;
    _opaque_pthread_mutex_t _requestContextMapLock;
}




-(NSInteger)inFlightRequestCount;
-(id)_criticalFindRequestContextWithResponseHandler:(id)arg0 ;
-(id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg0 ;
-(id)init;
-(id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg0 ;
-(id)invalidateTimeoutsAndReturnHandlersForAllRequests;
-(id)scheduleTimeoutWithResponseHandler:(id)arg0 timeoutInterval:(CGFloat)arg1 timeoutBlock:(id)arg2 ;
-(void)_accessRequestContextMapInCriticalSectionWithBlock:(id)arg0 ;
-(void)_criticalInvokeTimeoutBlockForRequestID:(id)arg0 ;
-(void)_handleSystemTimerFired:(id)arg0 ;
-(void)dealloc;


@end


#endif