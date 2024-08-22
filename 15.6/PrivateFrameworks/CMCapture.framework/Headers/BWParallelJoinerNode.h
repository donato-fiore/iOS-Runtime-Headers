// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWPARALLELJOINERNODE_H
#define BWPARALLELJOINERNODE_H

@class NSMutableDictionary;


#import "BWFunnelNode.h"

@interface BWParallelJoinerNode : BWFunnelNode {
    int _inputsCount;
    NSMutableDictionary *_receivedBuffers;
    NSMutableDictionary *_sentErrorCountForID;
}




-(id)initWithNumberOfInputs:(int)arg0 mediaType:(unsigned int)arg1 ;
-(void)dealloc;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif