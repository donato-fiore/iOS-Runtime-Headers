// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNSOUNDEFFECTRESOURCECONTROLLER_H
#define MNSOUNDEFFECTRESOURCECONTROLLER_H

@class AVAudioPlayer, NSString;
@protocol AVAudioPlayerDelegate, MNSoundEffectControllerDelegate;

#import <Foundation/Foundation.h>


@interface MNSoundEffectResourceController : NSObject <AVAudioPlayerDelegate>

 {
    NSUInteger _indicatorID;
}


@property (retain, nonatomic) AVAudioPlayer *approach; // ivar: _approach
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNSoundEffectControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVAudioPlayer *leftTurn; // ivar: _leftTurn
@property (readonly, nonatomic) BOOL playing;
@property (retain, nonatomic) AVAudioPlayer *rightTurn; // ivar: _rightTurn
@property (readonly) Class superclass;


-(BOOL)playSound:(NSUInteger)arg0 andReport:(*id)arg1 ;
-(id)_playerForFileName:(id)arg0 andExtension:(id)arg1 ;
-(id)init;
-(void)_audioSessionInterruption:(id)arg0 ;
-(void)_mediaSessionServicesWereLost:(id)arg0 ;
-(void)_mediaSessionServicesWereReset:(id)arg0 ;
-(void)_registerForObservation;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)stop;


@end


#endif