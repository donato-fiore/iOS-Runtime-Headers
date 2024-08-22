// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIPEARLMOVIELOOPVIEW_H
#define BKUIPEARLMOVIELOOPVIEW_H

@class UIView, AVAsset, UIImageView, AVPlayer, UIImage;



@interface BKUIPearlMovieLoopView : UIView

@property (retain, nonatomic) AVAsset *assets; // ivar: _assets
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) UIImage *selfPortraite; // ivar: _selfPortraite


+(Class)layerClass;
-(BOOL)portrait;
-(id)initWithFrame:(struct CGRect )arg0 player:(id)arg1 asset:(id)arg2 ;
-(id)selfPortrait;
-(void)hideAVPlayerReplaceWithSnapshot;
-(void)setAlphaHideOnZero:(CGFloat)arg0 ;
-(void)unhideAVPlayerRemoveSnapshot;


@end


#endif