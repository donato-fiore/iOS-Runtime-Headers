// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOINPUTNODE_H
#define AVAUDIOINPUTNODE_H

@class NSString;
@protocol AVAudioMixing;


#import "AVAudioIONode.h"

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVoiceProcessingAGCEnabled) BOOL voiceProcessingAGCEnabled;
@property (nonatomic, getter=isVoiceProcessingBypassed) BOOL voiceProcessingBypassed;
@property (nonatomic, getter=isVoiceProcessingInputMuted) BOOL voiceProcessingInputMuted;
@property (nonatomic) float volume;


-(BOOL)setManualRenderingInputPCMFormat:(id)arg0 inputBlock:(id)arg1 ;
-(float)rate;
-(void)setRate:(float)arg0 ;


@end


#endif