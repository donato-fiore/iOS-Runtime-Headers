// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCCOMPARISONLAYER_H
#define MLCCOMPARISONLAYER_H



#import "MLCLayer.h"

@interface MLCComparisonLayer : MLCLayer

@property (readonly, nonatomic) int operation; // ivar: _operation


+(BOOL)supportsDataType:(int)arg0 onDevice:(id)arg1 ;
+(id)layerWithOperation:(int)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithOperation:(int)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif