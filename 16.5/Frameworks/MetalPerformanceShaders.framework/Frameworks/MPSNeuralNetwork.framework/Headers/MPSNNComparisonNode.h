// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNCOMPARISONNODE_H
#define MPSNNCOMPARISONNODE_H



#import "MPSNNBinaryArithmeticNode.h"

@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode

@property (nonatomic) NSUInteger comparisonType; // ivar: _comparisonType


-(*void)newFilterNode;
-(Class)gradientClass;


@end


#endif