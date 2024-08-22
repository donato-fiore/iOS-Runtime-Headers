// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOOUTPUTNODE_H
#define AVAUDIOOUTPUTNODE_H



#import "AVAudioIONode.h"

@interface AVAudioOutputNode : AVAudioIONode



-(BOOL)setManualRenderingPCMFormat:(id)arg0 maximumFrameCount:(unsigned int)arg1 ;
-(id)manualRenderingFormat;
-(unsigned int)manualRenderingMaximumFrameCount;


@end


#endif