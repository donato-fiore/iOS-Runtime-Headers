// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNBATCHNORMALIZATIONNODE_H
#define MPSCNNBATCHNORMALIZATIONNODE_H

@class NSString;
@protocol MPSNNTrainableNode, MPSCNNBatchNormalizationDataSource;


#import "MPSNNFilterNode.h"

@interface MPSCNNBatchNormalizationNode : MPSNNFilterNode <MPSNNTrainableNode>

 {
    id<MPSCNNBatchNormalizationDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger trainingStyle; // ivar: _trainingStyle


+(id)nodeWithSource:(id)arg0 dataSource:(id)arg1 ;
-(*void)newFilterNode;
-(BOOL)calculateStatistics;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 dataSource:(id)arg1 ;
-(id)resultStates;
-(id)sourceStates;
-(void)dealloc;


@end


#endif