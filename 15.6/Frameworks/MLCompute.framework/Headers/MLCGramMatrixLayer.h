// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCGRAMMATRIXLAYER_H
#define MLCGRAMMATRIXLAYER_H



#import "MLCLayer.h"

@interface MLCGramMatrixLayer : MLCLayer

@property (readonly, nonatomic) float scale; // ivar: _scale


+(id)layerWithScale:(float)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(NSUInteger)resultSizeFromSourceSizes:(id)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithScaleFactor:(float)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif