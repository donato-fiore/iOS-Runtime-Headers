// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNDROPOUTNODE_H
#define MPSCNNDROPOUTNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNDropoutNode : MPSNNFilterNode

@property (readonly, nonatomic) float keepProbability; // ivar: _keepProbability
@property (readonly, nonatomic) ? maskStrideInPixels; // ivar: _maskStride
@property (readonly, nonatomic) NSUInteger seed; // ivar: _seed


+(id)nodeWithSource:(id)arg0 ;
+(id)nodeWithSource:(id)arg0 keepProbability:(float)arg1 ;
+(id)nodeWithSource:(id)arg0 keepProbability:(float)arg1 seed:(NSUInteger)arg2 maskStrideInPixels:(struct ? )arg3 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 keepProbability:(float)arg1 ;
-(id)initWithSource:(id)arg0 keepProbability:(float)arg1 seed:(NSUInteger)arg2 maskStrideInPixels:(struct ? )arg3 ;


@end


#endif