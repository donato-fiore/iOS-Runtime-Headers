// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIHEARTRATESTATUSVIEW_H
#define FIUIHEARTRATESTATUSVIEW_H

@class UIView, NSString, NSBundle, UIImageView;


#import "FIUIAnimatingSpriteImageView.h"

@interface FIUIHeartRateStatusView : UIView {
    NSString *_heartSpriteImageName;
    NSInteger _heartSpriteImageFrameCount;
    NSInteger _heartSpriteImageColumnCount;
    NSBundle *_resourceBundle;
    NSUInteger _state;
    CGFloat _beatsPerMinute;
    BOOL _delayedStartMeasuringAnimation;
    BOOL _isBeatingHeart;
}


@property (retain, nonatomic) FIUIAnimatingSpriteImageView *animatingImageView; // ivar: _animatingImageView
@property (nonatomic) BOOL animationsSuspended; // ivar: _animationsSuspended
@property (retain, nonatomic) UIImageView *fullHeartImageView; // ivar: _fullHeartImageView
@property (retain, nonatomic) UIImageView *reloadArrowView; // ivar: _reloadArrowView
@property (retain, nonatomic) UIImageView *reloadOutlineView; // ivar: _reloadOutlineView


-(id)_loadHeartMeasuringImage;
-(id)initWithFrame:(struct CGRect )arg0 heartFilledImageName:(id)arg1 heartSpriteImageName:(id)arg2 spriteFrameCount:(NSInteger)arg3 spriteColumnCount:(NSInteger)arg4 resourceBundle:(id)arg5 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_beatFullHeartOnce;
-(void)_finishedHeartbeat;
-(void)_resumeAnimations;
-(void)_startBeatingHeart;
-(void)_startMeasuringAnimationAnimated:(BOOL)arg0 ;
-(void)_suspendAnimations;
-(void)layoutSubviews;
-(void)setBeatsPerMinute:(CGFloat)arg0 ;
-(void)setReloadArrowImage:(id)arg0 ;
-(void)setReloadHeartOutlineImage:(id)arg0 ;
-(void)setState:(NSUInteger)arg0 ;
-(void)unloadAnimationAssets;


@end


#endif