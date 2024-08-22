// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCALER_H
#define SISCALER_H


#import <Foundation/Foundation.h>


@interface SIScaler : NSObject {
    *__CVPixelBufferPool _pool;
    *OpaqueVTPixelTransferSession _session;
    CGSize _outputResolution;
    unsigned int _outputPixelFormat;
    NSUInteger _outputBufferBytePerRowAlignment;
    NSUInteger _algorithmKey;
}




-(BOOL)_imageConformsToOutput:(struct __CVBuffer *)arg0 ;
-(BOOL)scaleImage:(struct __CVBuffer *)arg0 outputBuffer:(struct __CVBuffer *)arg1 ;
-(id)initForInputResolution:(struct CGSize )arg0 outputResolution:(struct CGSize )arg1 outputPixelFormat:(unsigned int)arg2 ;
-(id)initForInputResolution:(struct CGSize )arg0 outputResolution:(struct CGSize )arg1 outputPixelFormat:(unsigned int)arg2 mode:(NSUInteger)arg3 ;
-(id)initForOutputResolution:(struct CGSize )arg0 outputPixelFormat:(unsigned int)arg1 mode:(NSUInteger)arg2 ;
-(id)initForOutputResolution:(struct CGSize )arg0 outputPixelFormat:(unsigned int)arg1 mode:(NSUInteger)arg2 algorithmKey:(id)arg3 ;
-(id)initForOutputResolution:(struct CGSize )arg0 outputPixelFormat:(unsigned int)arg1 mode:(NSUInteger)arg2 bytePerRowAlignment:(NSUInteger)arg3 algorithmKey:(id)arg4 ;
-(struct __CVBuffer *)createScaledImage:(struct __CVBuffer *)arg0 ;
-(struct __CVBuffer *)scaleImage:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif