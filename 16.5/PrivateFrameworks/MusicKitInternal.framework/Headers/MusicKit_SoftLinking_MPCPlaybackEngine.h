// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPCPLAYBACKENGINE_H
#define MUSICKIT_SOFTLINKING_MPCPLAYBACKENGINE_H

@class MPCPlaybackEngine, NSString;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPCPlaybackEngine : NSObject {
    MPCPlaybackEngine *_underlyingPlaybackEngine;
}


@property (nonatomic, getter=isAudioAnalyzerEnabled, setter=musicKit_setAudioAnalyzerEnabled:) BOOL audioAnalyzerEnabled; // ivar: _audioAnalyzerEnabled
@property (nonatomic, getter=isPictureInPictureSupported, setter=musicKit_setPictureInPictureSupported:) BOOL pictureInPictureSupported; // ivar: _pictureInPictureSupported
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (nonatomic, getter=isStateRestorationSupported, setter=musicKit_setStateRestorationSupported:) BOOL stateRestorationSupported; // ivar: _stateRestorationSupported
@property (nonatomic, getter=isSystemMusicApplication, setter=musicKit_setSystemMusicApplication:) BOOL systemMusicApplication; // ivar: _systemMusicApplication
@property (nonatomic, getter=isVideoSupported, setter=musicKit_setVideoSupported:) BOOL videoSupported; // ivar: _videoSupported


-(id)initWithPlayerID:(id)arg0 options:(NSUInteger)arg1 fallbackPlaybackIntent:(id)arg2 ;
-(void)becomeActive;
-(void)restoreStateWithCompletion:(id)arg0 ;
-(void)setAudioAnalyzerEnabled:(BOOL)arg0 ;
-(void)setPictureInPictureSupported:(BOOL)arg0 ;
-(void)setStateRestorationSupported:(BOOL)arg0 ;
-(void)setSystemMusicApplication:(BOOL)arg0 ;
-(void)setVideoSupported:(BOOL)arg0 ;
-(void)start;


@end


#endif