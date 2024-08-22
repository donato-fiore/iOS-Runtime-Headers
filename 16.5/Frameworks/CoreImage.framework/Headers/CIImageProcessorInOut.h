// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIIMAGEPROCESSORINOUT_H
#define CIIMAGEPROCESSORINOUT_H

@protocol MTLTexture, MTLDevice;

#import <Foundation/Foundation.h>

#import "CIContext.h"

@interface CIImageProcessorInOut : NSObject {
    *__IOSurface _surface;
    BOOL _usesSRGB;
    *void _context;
    id<MTLTexture> *_mtlTexture;
    BOOL _surfaceLocked;
    CIContext *_metalContext;
    NSUInteger _digest;
}


@property (readonly, nonatomic) NSUInteger bytesPerRow;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger digest;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) CGRect region; // ivar: _region
@property (readonly, nonatomic) *__IOSurface surface;
@property (readonly, nonatomic) BOOL usesSRGBTransferFunction;


-(id)debugDescription;
-(id)description;
-(id)initWithSurface:(struct __IOSurface *)arg0 texture:(struct Texture )arg1 digest:(NSUInteger)arg2 allowSRGB:(BOOL)arg3 bounds:(struct CGRect )arg4 context:(*void)arg5 ;
-(void)dealloc;


@end


#endif