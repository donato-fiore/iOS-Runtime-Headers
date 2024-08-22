// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCYOLOLOSSLAYER_H
#define MLCYOLOLOSSLAYER_H



#import "MLCLossLayer.h"
#import "MLCYOLOLossDescriptor.h"

@interface MLCYOLOLossLayer : MLCLossLayer

@property (readonly, copy, nonatomic) MLCYOLOLossDescriptor *yoloLossDescriptor; // ivar: _yoloLossDescriptor


+(id)layerWithDescriptor:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithLossDescriptor:(id)arg0 ;
-(id)summarizedDOTDescription;


@end


#endif