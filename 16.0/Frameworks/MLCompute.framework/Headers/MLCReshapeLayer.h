// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCRESHAPELAYER_H
#define MLCRESHAPELAYER_H

@class NSArray;


#import "MLCLayer.h"

@interface MLCReshapeLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *shape; // ivar: _shape


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layerWithShape:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isStaticBatchSize;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)deviceMemorySizeForForward;
-(NSUInteger)deviceMemorySizeWithOptimizer:(id)arg0 device:(id)arg1 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithShape:(id)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif