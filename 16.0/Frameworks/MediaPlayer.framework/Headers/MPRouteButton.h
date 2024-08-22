// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPROUTEBUTTON_H
#define MPROUTEBUTTON_H

@class UIControl, UIImageView, UIImage, NSArray, UIFont, UIColor, NSString;


#import "MPRouteLabel.h"
#import "MPAVRoute.h"

@interface MPRouteButton : UIControl {
    MPRouteLabel *_routeLabel;
    UIImageView *_accessoryImageView;
    CGFloat _alphaOverride;
}


@property (retain, nonatomic) UIImage *accessoryImage;
@property (nonatomic) CGFloat accessoryImageSpacing; // ivar: _accessoryImageSpacing
@property (readonly, nonatomic) NSArray *contentViews;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) BOOL forcesUppercaseText;
@property (nonatomic) UIEdgeInsets hitRectInsets; // ivar: _hitRectInsets
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (retain, nonatomic) MPAVRoute *route;
@property (nonatomic) NSInteger routeLabelAxis; // ivar: _routeLabelAxis
@property (nonatomic, getter=isRouteLabelHidden) BOOL routeLabelHidden; // ivar: _routeLabelHidden
@property (readonly, copy, nonatomic) NSString *routeTitle; // ivar: _routeTitle


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif