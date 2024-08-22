// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMMTLCOMMANDBUFFER_H
#define CMMTLCOMMANDBUFFER_H

@class NSMutableString, NSString, NSError, NSDictionary, NSMutableDictionary;
@protocol MTLCommandBufferSPI, MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLLogContainer;

#import <Foundation/Foundation.h>

#import "CMMTLCommandQueue.h"
#import "InterceptConfig.h"

@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI>

 {
    NSMutableString *_cmLabel;
    CMMTLCommandQueue *_cmCommandQueue;
    id<MTLCommandBuffer> *_commandBuffer;
    BOOL _unretained;
}


@property (readonly) CGFloat GPUEndTime;
@property (readonly) CGFloat GPUStartTime;
@property (readonly) NSObject<MTLCommandQueue> *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSError *error;
@property (readonly) NSUInteger errorOptions;
@property (readonly) NSUInteger globalTraceObjectID;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) InterceptConfig *interceptConfig; // ivar: _interceptConfig
@property (readonly) CGFloat kernelEndTime;
@property (readonly) CGFloat kernelStartTime;
@property (copy) NSString *label;
@property (readonly, nonatomic, getter=getListIndex) NSUInteger listIndex;
@property (readonly) NSObject<MTLLogContainer> *logs;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) BOOL retainedReferences;
@property (readonly) NSUInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCMMTLCommandQueue:(id)arg0 unretained:(BOOL)arg1 ;
-(void)commit;
-(void)forwardInvocation:(id)arg0 ;
-(void)waitUntilCompleted;
-(void)waitUntilScheduled;


@end


#endif