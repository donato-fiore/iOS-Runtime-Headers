// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNCROSSCHANNELNORMALIZATIONNODE_H
#define MPSCNNCROSSCHANNELNORMALIZATIONNODE_H



#import "MPSCNNNormalizationNode.h"

@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode

@property (nonatomic) NSUInteger kernelSizeInFeatureChannels; // ivar: _kernelSizeInFeatureChannels


+(id)nodeWithSource:(id)arg0 kernelSize:(NSUInteger)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 kernelSize:(NSUInteger)arg1 ;


@end


#endif