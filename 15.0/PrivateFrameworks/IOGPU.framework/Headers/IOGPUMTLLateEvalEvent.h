// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOGPUMTLLATEEVALEVENT_H
#define IOGPUMTLLATEEVALEVENT_H


#import <Foundation/Foundation.h>


@interface IOGPUMTLLateEvalEvent : NSObject {
    *__IOGPUDevice _deviceRef;
    unsigned int _eventName;
    NSUInteger _globalTraceObjectID;
}


@property NSUInteger signaledValue;


-(id)initWithDevice:(struct __IOGPUDevice *)arg0 ;
-(void)dealloc;


@end


#endif