// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCSOFTMAXLAYER_H
#define MLCSOFTMAXLAYER_H



#import "MLCLayer.h"

@interface MLCSoftmaxLayer : MLCLayer

@property (readonly, nonatomic) NSUInteger dimension; // ivar: _dimension
@property (readonly, nonatomic) int operation; // ivar: _operation


+(id)layerWithOperation:(int)arg0 ;
+(id)layerWithOperation:(int)arg0 dimension:(NSUInteger)arg1 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(id)description;
-(id)initWithSoftmaxOperation:(int)arg0 dimension:(NSUInteger)arg1 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif