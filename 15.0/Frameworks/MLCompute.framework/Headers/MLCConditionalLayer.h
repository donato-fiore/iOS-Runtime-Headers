// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCCONDITIONALLAYER_H
#define MLCCONDITIONALLAYER_H



#import "MLCLayer.h"
#import "MLCGraph.h"

@interface MLCConditionalLayer : MLCLayer

@property (readonly, retain, nonatomic) MLCGraph *falseBranch; // ivar: _falseBranch
@property (readonly, retain, nonatomic) MLCGraph *trueBranch; // ivar: _trueBranch


+(id)layerWithTrueBranch:(id)arg0 falseBranch:(id)arg1 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(NSUInteger)resultSizeForOutputIndex:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithTrueBranch:(id)arg0 falseBranch:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg0 ;


@end


#endif