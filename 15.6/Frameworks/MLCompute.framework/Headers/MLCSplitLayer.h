// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCSPLITLAYER_H
#define MLCSPLITLAYER_H

@class NSArray;


#import "MLCLayer.h"

@interface MLCSplitLayer : MLCLayer

@property (readonly, nonatomic) NSUInteger dimension; // ivar: _dimension
@property (readonly, nonatomic) NSUInteger splitCount; // ivar: _splitCount
@property (readonly, copy, nonatomic) NSArray *splitSectionLengths; // ivar: _splitSectionLengths


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layerWithSplitCount:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
+(id)layerWithSplitSectionLengths:(id)arg0 dimension:(NSUInteger)arg1 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 ;
-(BOOL)isStaticBatchSize;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)deviceMemorySizeWithOptimizer:(id)arg0 device:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSplitCount:(NSUInteger)arg0 splitSectionLengths:(id)arg1 dimension:(NSUInteger)arg2 ;
-(id)summarizedDOTDescription;


@end


#endif