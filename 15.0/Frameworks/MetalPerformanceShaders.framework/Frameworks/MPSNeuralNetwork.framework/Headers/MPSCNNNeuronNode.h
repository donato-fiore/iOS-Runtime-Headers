// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNNEURONNODE_H
#define MPSCNNNEURONNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNNeuronNode : MPSNNFilterNode {
    int _type;
}


@property (readonly, nonatomic) float a; // ivar: _a
@property (readonly, nonatomic) float b; // ivar: _b
@property (readonly, nonatomic) float c; // ivar: _c


+(id)nodeWithSource:(id)arg0 descriptor:(id)arg1 ;
-(*void)newFilterNode;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithSource:(id)arg0 type:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;


@end


#endif