// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCSLICELAYER_H
#define MLCSLICELAYER_H

@class NSArray;


#import "MLCLayer.h"

@interface MLCSliceLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *end; // ivar: _end
@property (readonly, copy, nonatomic) NSArray *start; // ivar: _start
@property (readonly, copy, nonatomic) NSArray *stride; // ivar: _stride


+(id)sliceLayerWithStart:(id)arg0 end:(id)arg1 stride:(id)arg2 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isStaticBatchSize;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)resultSizeForDimension:(NSUInteger)arg0 ;
-(id)description;
-(id)initSliceLayerWithStart:(id)arg0 end:(id)arg1 stride:(id)arg2 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif