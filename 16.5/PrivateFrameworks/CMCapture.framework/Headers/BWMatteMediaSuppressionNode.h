// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMATTEMEDIASUPPRESSIONNODE_H
#define BWMATTEMEDIASUPPRESSIONNODE_H



#import "BWNode.h"

@interface BWMatteMediaSuppressionNode : BWNode {
    unsigned int _behavior;
}




+(void)initialize;
-(id)initWithBehavior:(unsigned int)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif