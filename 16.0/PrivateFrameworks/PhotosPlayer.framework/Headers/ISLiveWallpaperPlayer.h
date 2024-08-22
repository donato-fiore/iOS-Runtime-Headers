// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISLIVEWALLPAPERPLAYER_H
#define ISLIVEWALLPAPERPLAYER_H



#import "ISBasePlayer.h"
#import "ISDisplayLink.h"

@interface ISLiveWallpaperPlayer : ISBasePlayer {
    ? _videoDuration;
    CGFloat _smoothedVelocity;
}


@property (nonatomic, setter=_setActive:) BOOL _active; // ivar: __active
@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink; // ivar: __displayLink
@property (nonatomic, setter=_setPlayRate:) float _playRate; // ivar: __playRate
@property (nonatomic, getter=_isSeeking, setter=_setSeeking:) BOOL _seeking; // ivar: __seeking
@property (nonatomic) CGFloat force; // ivar: _force
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isTouching) BOOL touching; // ivar: _touching


-(void)_handleDidFinishSeeking:(BOOL)arg0 ;
-(void)_seekVideoToBeginning;
-(void)_seekVideoToEnd;
-(void)_update;
-(void)_updatePlayer;
-(void)didPerformChanges;
-(void)setPlayerItem:(id)arg0 ;
-(void)statusDidChange;


@end


#endif