// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNSCALENODE_H
#define MPSNNSCALENODE_H

@protocol MPSImageTransformProvider;


#import "MPSNNFilterNode.h"

@interface MPSNNScaleNode : MPSNNFilterNode {
    id<MPSImageTransformProvider> *_transformProvider;
    ? _size;
}




+(id)nodeWithSource:(id)arg0 outputSize:(struct ? )arg1 ;
+(id)nodeWithSource:(id)arg0 transformProvider:(id)arg1 outputSize:(struct ? )arg2 ;
-(id)debugDescription;
-(id)initWithSource:(id)arg0 outputSize:(struct ? )arg1 ;
-(id)initWithSource:(id)arg0 transformProvider:(id)arg1 outputSize:(struct ? )arg2 ;
-(id)privateInitWithSource:(id)arg0 transformProvider:(id)arg1 outputSize:(struct ? )arg2 ;
-(void)dealloc;


@end


#endif