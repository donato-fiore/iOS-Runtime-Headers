// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMMTLCOMMANDQUEUE_H
#define CMMTLCOMMANDQUEUE_H

@class NSString;
@protocol MTLCommandQueueSPI, MTLCommandQueue, OS_dispatch_queue, MTLDevice;

#import <Foundation/Foundation.h>

#import "CMMTLDevice.h"
#import "InterceptConfig.h"

@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI>

 {
    CMMTLDevice *_cmDevice;
    id<MTLCommandQueue> *_commandQueue;
    InterceptConfig *_interceptConfig;
}


@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled;
@property (nonatomic, getter=getStatLocations) NSUInteger StatLocations;
@property (nonatomic, getter=getStatOptions) NSUInteger StatOptions;
@property int backgroundTrackingPID;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property BOOL executionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isOpenGLQueue;
@property (copy) NSString *label;
@property (readonly) NSUInteger maxCommandBufferCount;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSUInteger qosLevel;
@property BOOL skipRender;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCMMTLDevice:(id)arg0 ;
-(id)initWithCMMTLDevice:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithCMMTLDevice:(id)arg0 maxCommandBufferCount:(NSUInteger)arg1 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif