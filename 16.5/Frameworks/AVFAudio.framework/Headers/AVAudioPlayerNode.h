// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOPLAYERNODE_H
#define AVAUDIOPLAYERNODE_H

@class NSString;
@protocol AVAudioMixing;


#import "AVAudioNode.h"

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(id)init;
-(id)nodeTimeForPlayerTime:(id)arg0 ;
-(id)playerTimeForNodeTime:(id)arg0 ;
-(void)callLegacyCompletionHandlerForType:(NSInteger)arg0 legacyHandler:(id)arg1 ;
-(void)didAttachToEngine:(id)arg0 ;
-(void)pause;
-(void)play;
-(void)playAtTime:(id)arg0 ;
-(void)prepareWithFrameCount:(unsigned int)arg0 ;
-(void)scheduleBuffer:(id)arg0 atTime:(id)arg1 options:(NSUInteger)arg2 completionCallbackType:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)scheduleBuffer:(id)arg0 atTime:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)scheduleBuffer:(id)arg0 completionCallbackType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)scheduleBuffer:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleFile:(id)arg0 atTime:(id)arg1 completionCallbackType:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)scheduleFile:(id)arg0 atTime:(id)arg1 completionHandler:(id)arg2 ;
-(void)scheduleSegment:(id)arg0 startingFrame:(NSInteger)arg1 frameCount:(unsigned int)arg2 atTime:(id)arg3 completionCallbackType:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)scheduleSegment:(id)arg0 startingFrame:(NSInteger)arg1 frameCount:(unsigned int)arg2 atTime:(id)arg3 completionHandler:(id)arg4 ;
-(void)stop;


@end


#endif