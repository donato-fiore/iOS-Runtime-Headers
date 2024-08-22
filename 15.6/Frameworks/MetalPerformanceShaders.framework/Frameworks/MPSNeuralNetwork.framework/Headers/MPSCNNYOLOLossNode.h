// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNYOLOLOSSNODE_H
#define MPSCNNYOLOLOSSNODE_H



#import "MPSNNFilterNode.h"
#import "MPSCNNYOLOLossDescriptor.h"
#import "MPSNNLabelsNode.h"

@interface MPSCNNYOLOLossNode : MPSNNFilterNode {
    MPSCNNYOLOLossDescriptor *_descriptor;
}


@property (readonly, retain, nonatomic) MPSNNLabelsNode *inputLabels; // ivar: _labels


+(id)nodeWithSource:(id)arg0 lossDescriptor:(id)arg1 ;
-(*void)newFilterNode;
-(id)gradientFilterWithSources:(id)arg0 ;
-(id)initWithSource:(id)arg0 lossDescriptor:(id)arg1 ;
-(id)trainingGraphWithSourceGradient:(id)arg0 nodeHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif