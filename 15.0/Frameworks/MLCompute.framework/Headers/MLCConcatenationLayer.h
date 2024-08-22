// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCCONCATENATIONLAYER_H
#define MLCCONCATENATIONLAYER_H



#import "MLCLayer.h"

@interface MLCConcatenationLayer : MLCLayer

@property (readonly, nonatomic) NSUInteger dimension; // ivar: _dimension


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layer;
+(id)layerWithDimension:(NSUInteger)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isStaticBatchSize;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDimension:(NSUInteger)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif