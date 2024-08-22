// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSINGLETRACKAUDIOPROCESSOR_H
#define MPCSINGLETRACKAUDIOPROCESSOR_H

@protocol MPCSingleTrackAudioProcessing;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface MPCSingleTrackAudioProcessor : NSObject <MPCSingleTrackAudioProcessing>

 {
    *opaqueMTAudioProcessingTap _audioProcessingTap;
}


@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) NSObject<MPCSingleTrackAudioProcessing> *selfRef; // ivar: _selfRef


-(BOOL)configureQueueItem:(id)arg0 ;
-(BOOL)shouldAttachAudioTapToItem:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(unsigned int)creationFlags;
-(void)_createAudioTap;
-(void)_destroyAudioTap;
-(void)dealloc;
-(void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg0 ;
-(void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg0 maxFrames:(NSInteger)arg1 processingFormat:(struct AudioStreamBasicDescription *)arg2 ;
-(void)processTap:(struct opaqueMTAudioProcessingTap *)arg0 sampleIndex:(NSInteger)arg1 numberFrames:(NSInteger)arg2 flags:(unsigned int)arg3 audioBufferList:(struct AudioBufferList *)arg4 numberFramesOut:(*NSInteger)arg5 flagsOut:(*unsigned int)arg6 ;
-(void)recreateAudioTap;
-(void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg0 ;


@end


#endif