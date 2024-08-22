// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCULAYERRENDERER_H
#define BCULAYERRENDERER_H

@class NSHashTable, CARenderer;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface BCULayerRenderer : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSHashTable *_operations;
    CARenderer *_renderer;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_queue;
    BOOL _suspended;
}




-(id)init;
-(id)initWithSuspended:(BOOL)arg0 ;
// -(id)newOperationWithPriority:(float)arg0 renderLayer:(id)arg1 completion:(unk)arg2  ;
// -(id)newOperationWithPriority:(float)arg0 waitForCPUSynchronization:(BOOL)arg1 logKey:(id)arg2 renderLayer:(id)arg3 completion:(unk)arg4  ;
-(void)_disconnectLayer:(id)arg0 ;
-(void)_processOperations;
-(void)_startOperation:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif