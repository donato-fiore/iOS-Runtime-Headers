// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTEFFECT_H
#define PTEFFECT_H

@class NSString;
@protocol PTEffectImpl, MTLCommandQueue, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PTFaceAttributesNetwork.h"
#import "PTEffectResources.h"
#import "PTHumanDetections.h"

@interface PTEffect : NSObject {
    id<PTEffectImpl> *_delegate;
    id<MTLCommandQueue> *_metalCommandQueue;
    NSObject<OS_dispatch_queue> *_asyncInitQueue;
    BOOL _asynchronous;
    int _frameId;
    NSInteger _effectType;
    NSInteger _effectTypeNew;
    *OpaqueVTPixelTransferSession _pixelTransferSession;
    PTFaceAttributesNetwork *_faceAttributesNetwork;
    PTEffectResources *_resources;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    NSString *_colorPrimaries;
    ? _colorSize;
    BOOL _asyncInitialization;
    BOOL _prewarmOnly;
    NSInteger _effectQuality;
    NSInteger _effectQualityNew;
    NSInteger _debugType;
    PTHumanDetections *_humanDetections;
    CGFloat _lastFrameTime;
    os_unfair_lock_s _delegateLock;
}


@property NSInteger effectQuality;


+(int)prewarmForMediaserverd;
+(int)prewarmWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSUInteger)arg2 ;
+(void)disableAsynchronousWork;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 availableEffectTypes:(NSUInteger)arg2 activeEffectType:(NSUInteger)arg3 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 availableEffectTypes:(NSUInteger)arg2 activeEffectType:(NSUInteger)arg3 effectQuality:(NSInteger)arg4 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 availableEffectTypes:(NSUInteger)arg2 activeEffectType:(NSUInteger)arg3 prewarmOnly:(BOOL)arg4 effectQuality:(NSInteger)arg5 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSUInteger)arg2 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSUInteger)arg2 effectQuality:(NSInteger)arg3 ;
-(int)render:(struct __CVBuffer *)arg0 detectedObjects:(struct __CFDictionary *)arg1 toColorBuffer:(struct __CVBuffer *)arg2 ;
-(int)render:(struct __CVBuffer *)arg0 detectedObjects:(struct __CFDictionary *)arg1 transform:(struct CGAffineTransform )arg2 toColorBuffer:(struct __CVBuffer *)arg3 ;
-(int)render:(struct __CVBuffer *)arg0 disparity:(struct __CVBuffer *)arg1 detectedObjects:(struct __CFDictionary *)arg2 transform:(struct CGAffineTransform )arg3 toColorBuffer:(struct __CVBuffer *)arg4 ;
-(int)setEffectType:(NSUInteger)arg0 ;
-(int)updateEffectDelegate:(BOOL)arg0 ;
-(int)waitForAsyncInitialization;
-(void)dealloc;
-(void)keepOldDelegateAlive:(id)arg0 ;
-(void)reset;
-(void)setDebug:(NSInteger)arg0 ;


@end


#endif