// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFDOWNLOADSICONVIEW_H
#define _SFDOWNLOADSICONVIEW_H

@class UIView, UIImageView, UIImage;



@interface _SFDownloadsIconView : UIView {
    UIView *_circleContainerView;
    UIImageView *_circleImageView;
    UIView *_arrowContainerView;
    UIImageView *_arrowImageView;
    BOOL _suppressesPixelAlignment;
    BOOL _pulsing;
}


@property (retain, nonatomic) UIImage *arrowImage;
@property (retain, nonatomic) UIImage *circleImage;
@property (nonatomic) CGFloat iconScale; // ivar: _iconScale
@property (nonatomic) BOOL suppressesPixelAlignment;


-(id)_makeSpringAnimationWithDelay:(CGFloat)arg0 offset:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_finishedPulsing;
-(void)_setPulsing:(BOOL)arg0 ;
-(void)_setUp;
-(void)_updateSuppressesPixelAlignment;
-(void)layoutSubviews;
-(void)pulse;


@end


#endif