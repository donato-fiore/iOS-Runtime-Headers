// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERICONVIEW_H
#define CKBROWSERICONVIEW_H

@class UIView, CADisplayLink, UIImage;



@interface CKBrowserIconView : UIView

@property (nonatomic) BOOL animating; // ivar: _animating
@property (nonatomic) CGFloat animationEndPercentComplete; // ivar: _animationEndPercentComplete
@property (nonatomic) CGFloat animationStartPercentComplete; // ivar: _animationStartPercentComplete
@property (nonatomic) CGFloat animationStartTime; // ivar: _animationStartTime
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (nonatomic) CGFloat percentComplete; // ivar: _percentComplete


+(id)_pieImageForPercentComplete:(CGFloat)arg0 size:(struct CGSize )arg1 center:(struct CGPoint )arg2 radius:(CGFloat)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_onDisplayLink:(id)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif