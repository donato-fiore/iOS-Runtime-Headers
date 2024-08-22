// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREPIXELCONVERTER_H
#define FIGCAPTUREPIXELCONVERTER_H


#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"
#import "BWVideoFormat.h"

@interface FigCapturePixelConverter : NSObject {
    *OpaqueVTPixelTransferSession _transferSession;
    BOOL _alwaysUseHardwareForConversion;
    BWPixelBufferPool *_pool;
    *opaqueCMFormatDescription _outputFormatDescription;
    int _poolCapacity;
    BOOL _prefetchPool;
}


@property (readonly, nonatomic) BWVideoFormat *outputFormat; // ivar: _outputFormat


+(void)initialize;
-(?)convertPixelBuffer:(?)arg0 cropRect:(?)arg1 allocateOutputFromBufferPooloutputPixelBuffer;
-(?)convertSampleBuffer:(?)arg0 cropRectoutputSampleBuffer;
-(id)init;
-(id)initWithPrefetchPool:(BOOL)arg0 ;
-(int)updateOutputPixelFormat:(unsigned int)arg0 dimensions:(struct ? )arg1 poolCapacity:(int)arg2 colorSpaceProperties:(int)arg3 alwaysUseHardwareForConversion:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif