// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCMATMULLAYER_H
#define MLCMATMULLAYER_H



#import "MLCLayer.h"
#import "MLCMatMulDescriptor.h"

@interface MLCMatMulLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCMatMulDescriptor *descriptor; // ivar: _descriptor


+(id)layerWithDescriptor:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(id)description;
-(id)initWithDescriptor:(id)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif