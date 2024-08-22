// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCOBJECT_H
#define VCOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VCDispatchTimer.h"

@interface VCObject : NSObject {
    id *_reportingAgent;
    VCDispatchTimer *_timeoutTimer;
    _opaque_pthread_mutex_t _mutex;
    _opaque_pthread_mutex_t _timeoutMutex;
}


@property (retain, nonatomic) NSString *logPrefix; // ivar: _logPrefix
@property (nonatomic) *opaqueRTCReporting reportingAgent;


-(id)init;
-(void)dealloc;
-(void)lock;
-(void)startDeallocTimer;
-(void)startDeallocTimerWithTimeout:(unsigned int)arg0 ;
-(void)startTerminationTimer:(unsigned int)arg0 ;
-(void)startTimeoutTimer;
-(void)stopTerminationTimer;
-(void)stopTimeoutTimer;
-(void)unlock;


@end


#endif