// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTPYRAMIDRGB_H
#define PTPYRAMIDRGB_H

@class NSArray;
@protocol MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>


@interface PTPyramidRGB : NSObject {
    id<MTLComputePipelineState> *_gaussian3x3DownscaleRGB;
    id<MTLComputePipelineState> *_bicubicDownscale;
}


@property (nonatomic) BOOL bicubic; // ivar: _bicubic
@property (retain, nonatomic) NSObject<MTLTexture> *rgbaPyramid; // ivar: _rgbaPyramid
@property (retain, nonatomic) NSArray *rgbaPyramidArray; // ivar: _rgbaPyramidArray


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 pixelFormat:(NSUInteger)arg4 ;
-(int)updatePyramid:(id)arg0 offset:(int)arg1 ;


@end


#endif