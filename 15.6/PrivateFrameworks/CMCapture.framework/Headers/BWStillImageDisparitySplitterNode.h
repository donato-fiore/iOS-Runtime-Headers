// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGEDISPARITYSPLITTERNODE_H
#define BWSTILLIMAGEDISPARITYSPLITTERNODE_H



#import "BWNode.h"
#import "BWNodeOutput.h"

@interface BWStillImageDisparitySplitterNode : BWNode {
    *id _outputs;
    NSUInteger _numberOfOutputs;
}


@property (readonly, nonatomic) BWNodeOutput *disparityOutput;
@property (readonly, nonatomic) BWNodeOutput *processedOutput;


+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif