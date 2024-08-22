// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISLIVEWALLPAPERUIVIEW_H
#define ISLIVEWALLPAPERUIVIEW_H

@class UIGestureRecognizer, NSTimer;


#import "ISBasePlayerUIView.h"
#import "ISLiveWallpaperPlayer.h"

@interface ISLiveWallpaperUIView : ISBasePlayerUIView

@property (nonatomic) CGFloat force; // ivar: _force
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // ivar: _playbackGestureRecognizer
@property (retain, nonatomic) ISLiveWallpaperPlayer *player;
@property (nonatomic) BOOL touching; // ivar: _touching
@property (retain, nonatomic) NSTimer *updateTimer; // ivar: _updateTimer


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_ISLiveWallpaperUIViewCommonInitialization;
-(void)_handlePlaybackRecognizer:(id)arg0 ;
-(void)_handleUpdateTimer;
-(void)_updatePlayer;
-(void)dealloc;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif