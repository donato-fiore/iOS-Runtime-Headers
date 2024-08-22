// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICPASSWORDLOCKTILEVIEW_H
#define ICPASSWORDLOCKTILEVIEW_H

@class UIView, CALayer, NSString, UILabel;
@protocol CAAnimationDelegate;



@interface ICPasswordLockTileView : UIView <CAAnimationDelegate>



@property (retain, nonatomic) CALayer *backdropLayer; // ivar: _backdropLayer
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *fadeInCompletionHandler; // ivar: _fadeInCompletionHandler
@property (copy, nonatomic) id *fadeOutCompletionHandler; // ivar: _fadeOutCompletionHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocked; // ivar: _isLocked
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) CALayer *lockBase; // ivar: _lockBase
@property (retain, nonatomic) CALayer *lockGroupLayer; // ivar: _lockGroupLayer
@property (retain, nonatomic) CALayer *lockHandle; // ivar: _lockHandle
@property (readonly) Class superclass;


+(id)lockTileView;
-(id)fadeAnimationWithStartAlpha:(CGFloat)arg0 endAlpha:(CGFloat)arg1 beginTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(id)lockAnimationWithBeginTime:(CGFloat)arg0 ;
-(id)unLockAnimationWithBeginTime:(CGFloat)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)layoutSubviews;
-(void)showFadeInAnimationForActivityType:(NSUInteger)arg0 afterDelay:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)showFadeOutAnimationForActivityType:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif