// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTPYRAMIDYUV_H
#define PTPYRAMIDYUV_H

@class NSArray;
@protocol MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>


@interface PTPyramidYUV : NSObject {
    id<MTLComputePipelineState> *_gaussian3x3Downscale;
}


@property (retain, nonatomic) NSObject<MTLTexture> *chromaPyramid; // ivar: _chromaPyramid
@property (retain, nonatomic) NSArray *chromaPyramidArray; // ivar: _chromaPyramidArray
@property (retain, nonatomic) NSObject<MTLTexture> *lumaPyramid; // ivar: _lumaPyramid
@property (retain, nonatomic) NSArray *lumaPyramidArray; // ivar: _lumaPyramidArray


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 pixelFormatLuma:(NSUInteger)arg4 pixelFormatChroma:(NSUInteger)arg5 ;
-(int)gaussian3x3Pyramid2Channels:(id)arg0 pyramid:(id)arg1 offset:(int)arg2 ;
-(int)updatePyramid:(id)arg0 offsetLuma:(int)arg1 offsetChroma:(int)arg2 ;
-(int)updatePyramidBlitEncoder:(id)arg0 offsetLuma:(int)arg1 offsetChroma:(int)arg2 ;


@end


#endif