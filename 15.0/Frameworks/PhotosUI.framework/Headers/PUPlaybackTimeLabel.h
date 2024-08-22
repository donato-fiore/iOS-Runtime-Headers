// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPLAYBACKTIMELABEL_H
#define PUPLAYBACKTIMELABEL_H

@class UIView, UILabel;



@interface PUPlaybackTimeLabel : UIView

@property (readonly, nonatomic) UIView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) UILabel *_label; // ivar: __label
@property (nonatomic, setter=_setNeedsUpdateBackground:) BOOL _needsUpdateBackground; // ivar: __needsUpdateBackground
@property (nonatomic, setter=_setNeedsUpdateLabel:) BOOL _needsUpdateLabel; // ivar: __needsUpdateLabel
@property (nonatomic) ? currentPlaybackTime; // ivar: _currentPlaybackTime
@property (nonatomic) NSInteger format; // ivar: _format
@property (nonatomic) ? playbackDuration; // ivar: _playbackDuration


-(BOOL)_needsUpdate;
-(id)_labelTextWithFormat:(NSInteger)arg0 elapsedInterval:(CGFloat)arg1 remainingInterval:(CGFloat)arg2 ;
-(id)_stringFromTimeInterval:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_maximumLabelSizeWithDuration:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateBackground;
-(void)_invalidateLabel;
-(void)_setNeedsUpdate;
-(void)_updateBackgroundIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLabelIfNeeded;
-(void)layoutSubviews;


@end


#endif