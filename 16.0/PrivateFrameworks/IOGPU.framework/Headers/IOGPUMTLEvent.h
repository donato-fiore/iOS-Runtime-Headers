// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOGPUMTLEVENT_H
#define IOGPUMTLEVENT_H


#import <Foundation/Foundation.h>


@interface IOGPUMTLEvent : NSObject {
    *__IOGPUDevice _deviceRef;
    unsigned int _eventName;
    NSUInteger _globalTraceObjectID;
}


@property (nonatomic) BOOL enableBarrier; // ivar: _enableBarrier


-(id)initWithDevice:(struct __IOGPUDevice *)arg0 ;
-(unsigned int)_encodeIOGPUKernelSignalEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 ;
-(unsigned int)_encodeIOGPUKernelWaitEventCommandArgs:(struct IOGPUKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 timeout:(unsigned int)arg2 ;
-(void)dealloc;


@end


#endif