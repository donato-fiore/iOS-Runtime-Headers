// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNINITIALGRADIENTNODE_H
#define MPSNNINITIALGRADIENTNODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNInitialGradientNode : MPSNNFilterNode



+(id)nodeWithSource:(id)arg0 ;
-(*void)newFilterNode;
-(id)gradientFilterWithSources:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)trainingGraphWithSourceGradient:(id)arg0 nodeHandler:(id)arg1 ;


@end


#endif