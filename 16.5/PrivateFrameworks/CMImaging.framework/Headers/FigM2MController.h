// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGM2MCONTROLLER_H
#define FIGM2MCONTROLLER_H


#import <Foundation/Foundation.h>


@interface FigM2MController : NSObject {
    ? _cap;
    *__IOSurfaceAccelerator _accelRef;
    BOOL _useCustomCoeff;
    *__CFDictionary _runOptions;
}




-(id)init;
-(int)_transform:(struct __CVBuffer *)arg0 srcRect:(struct CGRect )arg1 dst:(struct __CVBuffer *)arg2 dstRect:(struct CGRect )arg3 symmetricTransform:(unsigned int)arg4 sync_m2m:(BOOL)arg5 ;
-(int)clearHistorgramMode;
-(int)copyHistogram:(struct ? *)arg0 ;
-(int)downsample:(struct __CVBuffer *)arg0 dst:(struct __CVBuffer *)arg1 sync_m2m:(BOOL)arg2 ;
-(int)queryCapabilities;
-(int)setCustomFilter:(int)arg0 alignment:(int)arg1 sourceWidth:(NSUInteger)arg2 sourceHeight:(NSUInteger)arg3 destinationWidth:(NSUInteger)arg4 destinationHeight:(NSUInteger)arg5 luma_param:(float)arg6 chroma_param:(float)arg7 ;
-(int)setCustomFilter:(int)arg0 alignment:(int)arg1 src:(struct __CVBuffer *)arg2 dst:(struct __CVBuffer *)arg3 luma_param:(float)arg4 chroma_param:(float)arg5 ;
-(int)setHistogramMode:(int)arg0 dstRect:(struct CGRect )arg1 ;
-(int)transform:(struct __CVBuffer *)arg0 srcRect:(struct CGRect )arg1 dst:(struct __CVBuffer *)arg2 dstRect:(struct CGRect )arg3 rotate:(int)arg4 flipX:(BOOL)arg5 flipY:(BOOL)arg6 sync_m2m:(BOOL)arg7 ;
-(int)transform:(struct __CVBuffer *)arg0 srcRect:(struct CGRect )arg1 dst:(struct __CVBuffer *)arg2 dstRect:(struct CGRect )arg3 rotate:(int)arg4 sync_m2m:(BOOL)arg5 ;
-(int)transform:(struct __CVBuffer *)arg0 srcRect:(struct CGRect )arg1 dst:(struct __CVBuffer *)arg2 sync_m2m:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif