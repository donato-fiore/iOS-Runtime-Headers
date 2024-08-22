// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCPHILAYER_H
#define MLCPHILAYER_H



#import "MLCLayer.h"

@interface MLCPhiLayer : MLCLayer



+(id)layerWithControlTreeNode:(id)arg0 sources:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithControlTreeNode:(id)arg0 sources:(id)arg1 resultTensor:(id)arg2 ;


@end


#endif