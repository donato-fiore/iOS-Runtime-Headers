// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBAPENDPOINT_H
#define CBAPENDPOINT_H

@class AFKEndpointInterface;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log;

#import <Foundation/Foundation.h>


@interface CBAPEndpoint : NSObject {
    AFKEndpointInterface *_endpoint;
    NSObject<OS_dispatch_queue> *_epQueue;
    NSObject<OS_dispatch_semaphore> *_dispatchSignal;
    unsigned int _service;
    id *_responseObj;
    BOOL _status;
    unsigned int _timeoutCount;
    NSObject<OS_os_log> *_logHandle;
}




-(BOOL)sendCommand:(int)arg0 inputBuffer:(*void)arg1 inputBufferSize:(NSUInteger)arg2 ;
-(BOOL)setProperty:(id)arg0 property:(id)arg1 ;
-(id)copyProperty:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(unsigned int)findDCPServiceWithName:(id)arg0 ;
-(void)dealloc;
-(void)handleResponse:(*void)arg0 bufferSize:(NSUInteger)arg1 res:(int)arg2 ;


@end


#endif