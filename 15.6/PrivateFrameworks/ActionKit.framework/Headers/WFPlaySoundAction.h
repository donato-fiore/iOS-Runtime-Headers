// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPLAYSOUNDACTION_H
#define WFPLAYSOUNDACTION_H

@class WFAction, AVAudioPlayer, NSString, NSTimer;
@protocol AVAudioPlayerDelegate;



@interface WFPlaySoundAction : WFAction <AVAudioPlayerDelegate>



@property (retain, nonatomic) AVAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *progressTimer; // ivar: _progressTimer
@property (readonly) Class superclass;


-(BOOL)isProgressIndeterminate;
-(id)contentDestinationWithError:(*id)arg0 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)cancel;
-(void)cleanup;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithAudioFileURL:(id)arg0 fileTypeHint:(id)arg1 duckOthers:(BOOL)arg2 ;
-(void)runWithDefaultSound;
-(void)updateProgress;


@end


#endif