// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTEFFECT_H
#define PTEFFECT_H

@protocol MTLCommandQueue, OS_os_log;

#import <Foundation/Foundation.h>

#import "PTEffect.h"

@interface PTEffect : NSObject {
    PTEffect *_delegate;
    id<MTLCommandQueue> *_metalCommandQueue;
    BOOL _asynchronous;
    NSObject<OS_os_log> *_log;
    NSUInteger _sid;
    int _frameId;
}


@property NSInteger effectQuality; // ivar: _effectQuality


+(int)prewarmForMediaserverd;
+(int)prewarmWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 ;
-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 effectQuality:(NSInteger)arg3 ;
-(int)render:(struct __CVBuffer *)arg0 detectedObjects:(struct __CFDictionary *)arg1 toColorBuffer:(struct __CVBuffer *)arg2 ;
-(void)reset;


@end


#endif