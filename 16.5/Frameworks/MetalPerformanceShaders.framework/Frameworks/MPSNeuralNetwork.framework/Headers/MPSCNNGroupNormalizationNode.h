// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNGROUPNORMALIZATIONNODE_H
#define MPSCNNGROUPNORMALIZATIONNODE_H

@class NSString;
@protocol MPSNNTrainableNode, MPSCNNGroupNormalizationDataSource;


#import "MPSNNFilterNode.h"

@interface MPSCNNGroupNormalizationNode : MPSNNFilterNode <MPSNNTrainableNode>

 {
    id<MPSCNNGroupNormalizationDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger trainingStyle; // ivar: _trainingStyle


+(id)nodeWithSource:(id)arg0 dataSource:(id)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 dataSource:(id)arg1 ;
-(void)dealloc;


@end


#endif