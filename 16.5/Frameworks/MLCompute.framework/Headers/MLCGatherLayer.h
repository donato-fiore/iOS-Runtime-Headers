// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCGATHERLAYER_H
#define MLCGATHERLAYER_H



#import "MLCLayer.h"

@interface MLCGatherLayer : MLCLayer

@property (readonly, nonatomic) NSUInteger dimension; // ivar: _dimension


+(id)layerWithDimension:(NSUInteger)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(id)description;
-(id)initWithDimension:(NSUInteger)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif