// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCREDUCTIONLAYER_H
#define MLCREDUCTIONLAYER_H

@class NSArray;


#import "MLCLayer.h"

@interface MLCReductionLayer : MLCLayer

@property (readonly, nonatomic) NSUInteger dimension;
@property (readonly, nonatomic) NSArray *dimensions; // ivar: _dimensions
@property (readonly, nonatomic) int reductionType; // ivar: _reductionType


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layerWithReductionType:(int)arg0 dimension:(NSUInteger)arg1 ;
+(id)layerWithReductionType:(int)arg0 dimensions:(id)arg1 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithReduceType:(int)arg0 dimensions:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif