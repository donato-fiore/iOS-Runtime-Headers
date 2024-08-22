// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CROSSFADEVIEW_H
#define CROSSFADEVIEW_H

@class UIView;



@interface CrossFadeView : UIView

@property (readonly, nonatomic) CGRect endFrame; // ivar: _endFrame
@property (readonly, nonatomic) UIView *endView; // ivar: _endView
@property (nonatomic) BOOL scaleSize; // ivar: _scaleSize
@property (readonly, nonatomic) CGRect startFrame; // ivar: _startFrame
@property (readonly, nonatomic) UIView *startView; // ivar: _startView


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStartView:(id)arg0 endView:(id)arg1 startFrame:(struct CGRect )arg2 endFrame:(struct CGRect )arg3 ;
-(void)animateToEndStateWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)animateToStartStateWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)haltAnimation;
-(void)setToEndState;
-(void)setToStartState;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg0 ;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg0 completion:(id)arg1 ;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg0 ;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg0 completion:(id)arg1 ;


@end


#endif