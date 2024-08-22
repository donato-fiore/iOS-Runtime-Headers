// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGETURNSTILENODE_H
#define BWSTILLIMAGETURNSTILENODE_H



#import "BWNode.h"
#import "BWStillImageCoordinatorNode.h"

@interface BWStillImageTurnstileNode : BWNode {
    BWStillImageCoordinatorNode *_stillImageCoordinator;
}




+(void)initialize;
-(id)initWithStillImageCoordinator:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif