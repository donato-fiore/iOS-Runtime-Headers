// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOACCELMTLEVENT_H
#define IOACCELMTLEVENT_H


#import <Foundation/Foundation.h>


@interface IOAccelMTLEvent : NSObject {
    *__IOAccelShared _sharedRef;
    unsigned int _eventName;
    NSUInteger _globalTraceObjectID;
}




-(id)initWithShared:(struct __IOAccelShared *)arg0 ;
-(unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 ;
-(unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 ;
-(unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 timeout:(unsigned int)arg2 ;
-(void)dealloc;


@end


#endif