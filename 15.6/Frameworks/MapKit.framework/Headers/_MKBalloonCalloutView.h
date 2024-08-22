// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKBALLOONCALLOUTVIEW_H
#define _MKBALLOONCALLOUTVIEW_H

@class UIView, UIImageView, UIVisualEffectView, UIColor, UIImage;


#import "MKCalloutView.h"
#import "_MKBezierPathView.h"

@interface _MKBalloonCalloutView : MKCalloutView {
    UIView *_shadowView;
    UIView *_containerView;
    UIImageView *_balloonBodyImageView;
    UIImageView *_tailView;
    UIView *_innerBackgroundView;
    UIImageView *_imageView;
    CGSize _intrinsicSize;
    CGSize _shadowSize;
    CGFloat _croppedImageScale;
    UIImageView *_contentViewMaskView;
    UIView *_backgroundView;
    _MKBezierPathView *_backgroundShapeView;
    UIVisualEffectView *_backgroundVisualEffectView;
    BOOL _centerAnnotationWhenOffscreen;
    BOOL _dismissed;
}


@property (copy, nonatomic) UIColor *balloonTintColor; // ivar: _balloonTintColor
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (copy, nonatomic) UIColor *innerStrokeColor; // ivar: _innerStrokeColor
@property (nonatomic) BOOL originatesAsSmallBalloon; // ivar: _originatesAsSmallBalloon
@property (nonatomic) BOOL showsArrow; // ivar: _showsArrow
@property (nonatomic) CGFloat smallBalloonScale; // ivar: _smallBalloonScale
@property (copy, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(BOOL)calloutContainsPoint:(struct CGPoint )arg0 ;
-(CGFloat)_innerDiameter;
-(id)initWithAnnotationView:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGRect )_centerFrame;
-(struct CGRect )_idealFrame;
-(struct CGSize )intrinsicContentSize;
-(void)_commonInit;
-(void)_configureForArrowStateWithDuration:(CGFloat)arg0 ;
-(void)_handleTapOnCallout:(id)arg0 ;
-(void)_showAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)_updateCroppedImage;
-(void)_updateStyle;
-(void)didMoveToWindow;
-(void)dismissAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)hideCalloutAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)layoutSubviews;
-(void)showAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)showCalloutAnimated:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithNewCalloutOffset;


@end


#endif