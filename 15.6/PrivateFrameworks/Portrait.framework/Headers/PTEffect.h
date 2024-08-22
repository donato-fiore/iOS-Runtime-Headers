// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTEFFECT_H
#define PTEFFECT_H

@protocol MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "PTEffect.h"

@interface PTEffect : NSObject {
    PTEffect *_delegate;
    id<MTLCommandQueue> *_metalCommandQueue;
    BOOL _asynchronous;
    int _frameId;
    *OpaqueVTPixelTransferSession _pixelTransferSession;
    BOOL _prewarmOnly;
}


@property NSInteger effectQuality; // ivar: _effectQuality


+(int)prewarmForMediaserverd;
+(int)prewarmWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 effectQuality:(NSInteger)arg3 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 prewarmOnly:(BOOL)arg3 ;
-(int)render:(struct __CVBuffer *)arg0 detectedObjects:(struct __CFDictionary *)arg1 toColorBuffer:(struct __CVBuffer *)arg2 ;
-(void)dealloc;
-(void)reset;


@end


#endif