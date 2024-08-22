// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOIONODE_H
#define AVAUDIOIONODE_H



#import "AVAudioNode.h"

@interface AVAudioIONode : AVAudioNode

@property (readonly, nonatomic) *OpaqueAudioComponentInstance audioUnit;
@property (readonly, nonatomic) CGFloat presentationLatency;
@property (readonly, nonatomic, getter=isVoiceProcessingEnabled) BOOL voiceProcessingEnabled;


-(BOOL)enableManualRenderingMode:(NSInteger)arg0 isInput:(BOOL)arg1 ;
-(BOOL)enableRealtimeRenderingModeWithIOUnit:(*void)arg0 isInput:(BOOL)arg1 forceIOUnitReset:(BOOL)arg2 ;
-(BOOL)isInManualRenderingMode;
-(NSInteger)manualRenderingMode;
-(id)initWithIOUnit:(*void)arg0 isInput:(BOOL)arg1 ;
-(void)didAttachToEngine:(id)arg0 ;
-(void)didDetachFromEngine:(id)arg0 error:(*id)arg1 ;


@end


#endif