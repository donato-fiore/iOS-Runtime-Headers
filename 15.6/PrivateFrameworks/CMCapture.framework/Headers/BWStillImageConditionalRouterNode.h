// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGECONDITIONALROUTERNODE_H
#define BWSTILLIMAGECONDITIONALROUTERNODE_H



#import "BWFanOutNode.h"

@interface BWStillImageConditionalRouterNode : BWFanOutNode {
    id *_shouldEmitSampleBufferDecisionProvider;
}




+(void)initialize;
-(id)initWithRoutingConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif