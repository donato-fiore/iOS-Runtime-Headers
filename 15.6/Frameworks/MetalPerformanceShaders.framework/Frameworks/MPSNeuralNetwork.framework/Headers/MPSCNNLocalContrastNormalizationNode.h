// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNLOCALCONTRASTNORMALIZATIONNODE_H
#define MPSCNNLOCALCONTRASTNORMALIZATIONNODE_H



#import "MPSCNNNormalizationNode.h"

@interface MPSCNNLocalContrastNormalizationNode : MPSCNNNormalizationNode

@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (nonatomic) float p0; // ivar: _p0
@property (nonatomic) float pm; // ivar: _pm
@property (nonatomic) float ps; // ivar: _ps


+(id)nodeWithSource:(id)arg0 kernelSize:(NSUInteger)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 kernelSize:(NSUInteger)arg1 ;


@end


#endif