// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCDROPOUTLAYER_H
#define MLCDROPOUTLAYER_H



#import "MLCLayer.h"

@interface MLCDropoutLayer : MLCLayer

@property (readonly, nonatomic) float rate; // ivar: _rate
@property (readonly, nonatomic) NSUInteger seed; // ivar: _seed


+(id)layerWithRate:(float)arg0 seed:(NSUInteger)arg1 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(id)description;
-(id)initWithRate:(float)arg0 seed:(NSUInteger)arg1 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif