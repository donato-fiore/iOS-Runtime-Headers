// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AR2DSKELETONRAWESPRESSORESULT_H
#define AR2DSKELETONRAWESPRESSORESULT_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>

#import "ARImageData.h"

@interface AR2DSkeletonRawEspressoResult : NSObject <ARResultData>

 {
    ? _heatMapShape;
    ? _heatMapStrides;
    ? _affinityMapShape;
    ? _affinityMapStrides;
}


@property (readonly, nonatomic) *__CVBuffer affinityMapBuffer; // ivar: _affinityMapBuffer
@property ? affinityMapShape;
@property ? affinityMapStrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CVBuffer heatMapBuffer; // ivar: _heatMapBuffer
@property ? heatMapShape;
@property ? heatMapStrides;
@property (readonly, nonatomic) ARImageData *imageDataForNeuralNetwork; // ivar: _imageDataForNeuralNetwork
@property (readonly, nonatomic) ARImageData *inputImageData; // ivar: _inputImageData
@property (readonly, nonatomic) CGSize regionOfInterest; // ivar: _regionOfInterest
@property (readonly, nonatomic) NSInteger rotationNeeded; // ivar: _rotationNeeded
@property (readonly) Class superclass;


-(id)initWithMLImage:(id)arg0 originalImageData:(id)arg1 rotationNeeded:(NSInteger)arg2 regionOfInterest:(struct CGSize )arg3 heatMapBuffer:(struct __CVBuffer *)arg4 heatMapShape:(struct __CVBuffer *)arg5 heatMapStridesaffinityMapBufferaffinityMapShapeaffinityMapStrides;
-(id)initWithMLImage:(id)arg0 originalImageData:(id)arg1 rotationNeeded:(NSInteger)arg2 regionOfInterest:(struct CGSize )arg3 heatMapBuffer:(struct __CVBuffer *)arg4 heatMapShapeheatMapStrides;


@end


#endif