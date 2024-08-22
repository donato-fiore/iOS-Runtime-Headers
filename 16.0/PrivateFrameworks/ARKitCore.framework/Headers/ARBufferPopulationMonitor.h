// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARBUFFERPOPULATIONMONITOR_H
#define ARBUFFERPOPULATIONMONITOR_H

@protocol OS_dispatch_queue, ARBufferPopulationMonitorDelegate;

#import <Foundation/Foundation.h>

#import "ARBufferPopulationRegistry.h"

@interface ARBufferPopulationMonitor : NSObject {
    ARBufferPopulationRegistry *_bufferPopulationRegistry;
    os_unfair_lock_s _bufferPopulationRegistryLock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    *__IOSurfaceNotifier _surfaceNotifier;
    NSObject<OS_dispatch_queue> *_surfaceNotifierCallbackQueue;
    *void _weakReferenceForSurfaceNotifierCallback;
}


@property (readonly, nonatomic) NSUInteger count;
@property (weak, nonatomic) NSObject<ARBufferPopulationMonitorDelegate> *delegate; // ivar: _delegate


-(NSUInteger)countWithLabel:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)emitEndSignpost:(int)arg0 surfaceID:(NSUInteger)arg1 count:(NSUInteger)arg2 timestamp:(CGFloat)arg3 ;
-(void)emitStartSignpost:(int)arg0 surfaceID:(NSUInteger)arg1 count:(NSUInteger)arg2 timestamp:(CGFloat)arg3 ;
-(void)trackDataBuffer:(struct __CVBuffer *)arg0 ;
-(void)trackDataBuffer:(struct __CVBuffer *)arg0 withLabel:(id)arg1 timestamp:(CGFloat)arg2 signpostType:(int)arg3 ;
-(void)trackPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)trackPixelBuffer:(struct __CVBuffer *)arg0 withLabel:(id)arg1 timestamp:(CGFloat)arg2 signpostType:(int)arg3 ;
-(void)trackSurface:(struct __IOSurface *)arg0 ;
-(void)trackSurface:(struct __IOSurface *)arg0 withLabel:(id)arg1 timestamp:(CGFloat)arg2 signpostType:(int)arg3 ;
-(void)updateBufferPopulationRegistryWithReleasedSurfaceID:(unsigned int)arg0 ;


@end


#endif