// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK2DSKELETONRAWESPRESSORESULT_H
#define ABPK2DSKELETONRAWESPRESSORESULT_H


#import <Foundation/Foundation.h>

#import "ABPKMLImageData.h"
#import "ABPKImageData.h"

@interface ABPK2DSkeletonRawEspressoResult : NSObject {
    ? _heatMapShape;
    ? _heatMapStrides;
    ? _affinityMapShape;
    ? _affinityMapStrides;
}


@property (readonly, nonatomic) *__CVBuffer affinityMapBuffer; // ivar: _affinityMapBuffer
@property ? affinityMapShape;
@property ? affinityMapStrides;
@property (readonly, nonatomic) *__CVBuffer heatMapBuffer; // ivar: _heatMapBuffer
@property ? heatMapShape;
@property ? heatMapStrides;
@property (readonly, nonatomic) ABPKMLImageData *imageDataForNeuralNetwork; // ivar: _imageDataForNeuralNetwork
@property (readonly, nonatomic) ABPKImageData *inputImageData; // ivar: _inputImageData
@property (readonly, nonatomic) NSInteger rotationNeeded; // ivar: _rotationNeeded


-(id)initWithHeatMapBuffer:(struct __CVBuffer *)arg0 heatMapShape:(NSInteger)arg1 heatMapStridesrotationNeeded;
-(id)initWithHeatMapBuffer:(struct __CVBuffer *)arg0 heatMapShape:(struct __CVBuffer *)arg1 heatMapStrides:(NSInteger)arg2 affinityMapBufferaffinityMapShapeaffinityMapStridesrotationNeeded;
-(id)initWithMLImage:(id)arg0 originalImageData:(id)arg1 heatMapBuffer:(struct __CVBuffer *)arg2 heatMapShape:(NSInteger)arg3 heatMapStridesrotationNeeded;
-(id)initWithMLImage:(id)arg0 originalImageData:(id)arg1 heatMapBuffer:(struct __CVBuffer *)arg2 heatMapShape:(struct __CVBuffer *)arg3 heatMapStrides:(NSInteger)arg4 affinityMapBufferaffinityMapShapeaffinityMapStridesrotationNeeded;


@end


#endif