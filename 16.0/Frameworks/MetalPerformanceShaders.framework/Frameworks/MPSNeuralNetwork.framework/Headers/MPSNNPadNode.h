// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNPADNODE_H
#define MPSNNPADNODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNPadNode : MPSNNFilterNode {
    MPSImageCoordinate _paddingSizeBefore;
    MPSImageCoordinate _paddingSizeAfter;
    NSUInteger _edgeMode;
}


@property (nonatomic) float fillValue; // ivar: _fillValue


+(id)nodeWithSource:(id)arg0 paddingSizeBefore:(struct MPSImageCoordinate )arg1 paddingSizeAfter:(struct MPSImageCoordinate )arg2 edgeMode:(NSUInteger)arg3 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 paddingSizeBefore:(struct MPSImageCoordinate )arg1 paddingSizeAfter:(struct MPSImageCoordinate )arg2 edgeMode:(NSUInteger)arg3 ;


@end


#endif