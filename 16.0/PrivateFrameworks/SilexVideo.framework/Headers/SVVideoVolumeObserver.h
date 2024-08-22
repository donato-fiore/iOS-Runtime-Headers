// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVVIDEOVOLUMEOBSERVER_H
#define SVVIDEOVOLUMEOBSERVER_H

@class AVAudioSession, NSString;
@protocol SVVideoPlaybackObserver, SVVideoVolumeObserving;

#import <Foundation/Foundation.h>

#import "SVKeyValueObserver.h"
#import "SVPlaybackCoordinator.h"

@interface SVVideoVolumeObserver : NSObject <SVVideoPlaybackObserver, SVVideoVolumeObserving>



@property (readonly, weak, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=onMuteStateChange:) id *muteStateChangeBlock; // ivar: _muteStateChangeBlock
@property (readonly, nonatomic) BOOL muted; // ivar: _muted
@property (readonly, nonatomic) SVKeyValueObserver *outputVolumeObserver; // ivar: _outputVolumeObserver
@property (readonly, weak, nonatomic) SVPlaybackCoordinator *playbackCoordinator; // ivar: _playbackCoordinator
@property (readonly) Class superclass;
@property (readonly, nonatomic) float volume; // ivar: _volume
@property (copy, nonatomic, setter=onVolumeChange:) id *volumeChangeBlock; // ivar: _volumeChangeBlock


-(id)initWithPlaybackCoordinator:(id)arg0 audioSession:(id)arg1 ;
-(void)onMuteStateChange:(id)arg0 ;
-(void)onVolumeChange:(id)arg0 ;
-(void)playbackCoordinatorMuteStateChanged:(id)arg0 ;
-(void)updateWithVolume:(float)arg0 muted:(BOOL)arg1 ;
-(void)volumeChanged:(float)arg0 ;


@end


#endif