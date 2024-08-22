// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOFILLPLAYERVIEW_H
#define SXVIDEOFILLPLAYERVIEW_H

@class UIView;


#import "SXAVPlayer.h"
#import "SXPlayerLayer.h"
#import "SXImageView.h"
#import "SXVideoResource.h"

@interface SXVideoFillPlayerView : UIView

@property (nonatomic) NSUInteger fillMode; // ivar: _fillMode
@property (nonatomic) BOOL hasRequestedPlayback; // ivar: _hasRequestedPlayback
@property (retain, nonatomic) SXAVPlayer *player; // ivar: _player
@property (retain, nonatomic) SXPlayerLayer *playerLayer; // ivar: _playerLayer
@property (nonatomic) BOOL shouldLoop; // ivar: _shouldLoop
@property (retain, nonatomic) SXImageView *stillImageView; // ivar: _stillImageView
@property (retain, nonatomic) SXVideoResource *videoResource; // ivar: _videoResource


-(id)initWithVideoResource:(id)arg0 imageView:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)playIfPossible;
-(void)reset;
-(void)switchToPlayer;


@end


#endif