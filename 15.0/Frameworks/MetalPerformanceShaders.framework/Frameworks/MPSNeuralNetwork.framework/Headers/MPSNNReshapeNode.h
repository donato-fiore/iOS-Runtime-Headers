// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNRESHAPENODE_H
#define MPSNNRESHAPENODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNReshapeNode : MPSNNFilterNode {
    NSUInteger _resultWidth;
    NSUInteger _resultHeight;
    NSUInteger _resultFeatureChannels;
}




+(id)nodeWithSource:(id)arg0 resultWidth:(NSUInteger)arg1 resultHeight:(NSUInteger)arg2 resultFeatureChannels:(NSUInteger)arg3 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 resultWidth:(NSUInteger)arg1 resultHeight:(NSUInteger)arg2 resultFeatureChannels:(NSUInteger)arg3 ;


@end


#endif