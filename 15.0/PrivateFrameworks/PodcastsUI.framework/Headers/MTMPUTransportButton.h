// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMPUTRANSPORTBUTTON_H
#define MTMPUTRANSPORTBUTTON_H

@class UIButton, CALayer, NSString, UIColor, UIImage;
@protocol MTMPUTransportButton;


#import "MTMPUTransportButtonEventHandler.h"

@interface MTMPUTransportButton : UIButton <MTMPUTransportButton>

 {
    MTMPUTransportButtonEventHandler *_transportButtonEventHandler;
    CALayer *_selectionIndicatorLayer;
}


@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *disabledColor; // ivar: _disabledColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightedColor; // ivar: _highlightedColor
@property (retain, nonatomic) UIColor *regularColor; // ivar: _regularColor
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (nonatomic) BOOL shouldInferColorsFromTintColor; // ivar: _shouldInferColorsFromTintColor
@property (nonatomic) BOOL shouldShowBackgroundForSelectedState; // ivar: _shouldShowBackgroundForSelectedState
@property (readonly) Class superclass;
@property (readonly, nonatomic) MTMPUTransportButtonEventHandler *transportButtonEventHandler;
@property (retain, nonatomic) UIImage *transportButtonImage; // ivar: _transportButtonImage
@property (nonatomic) NSInteger transportButtonImageViewContentMode;


+(id)_stringForDisplayedSkipInterval:(CGFloat)arg0 ;
+(id)defaultDisabledColor;
+(id)defaultHighlightedColor;
+(id)defaultRegularColor;
+(id)defaultSelectedColor;
+(id)skipIntervalImageForInterval:(CGFloat)arg0 baseImage:(id)arg1 font:(id)arg2 scale:(CGFloat)arg3 ;
+(id)transportButton;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldTrack;
-(BOOL)wantsCustomHighlightAppearance;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateDisabledTransportButtonImage;
-(void)_updateHighlightedTransportButtonImage;
-(void)_updateRegularTransportButtonImage;
-(void)_updateSelectedTransportButtonImage;
-(void)applyTransportButtonLayoutAttributes:(struct ? )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif