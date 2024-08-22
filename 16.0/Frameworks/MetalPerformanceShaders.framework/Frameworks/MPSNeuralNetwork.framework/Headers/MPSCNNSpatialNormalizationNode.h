// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNSPATIALNORMALIZATIONNODE_H
#define MPSCNNSPATIALNORMALIZATIONNODE_H



#import "MPSCNNNormalizationNode.h"

@interface MPSCNNSpatialNormalizationNode : MPSCNNNormalizationNode

@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth


+(id)nodeWithSource:(id)arg0 kernelSize:(NSUInteger)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 kernelSize:(NSUInteger)arg1 ;


@end


#endif