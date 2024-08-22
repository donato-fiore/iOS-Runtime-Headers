// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IOGPUMETALMTLEVENT_H
#define _IOGPUMETALMTLEVENT_H

@class NSString;
@protocol MTLEvent, MTLDevice;


#import "IOGPUMTLEvent.h"

@interface _IOGPUMetalMTLEvent : IOGPUMTLEvent <MTLEvent>

 {
    NSUInteger _labelTraceID;
    NSString *_label;
    os_unfair_lock_s _labelLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;
-(id)retainedLabel;
-(void)dealloc;


@end


#endif