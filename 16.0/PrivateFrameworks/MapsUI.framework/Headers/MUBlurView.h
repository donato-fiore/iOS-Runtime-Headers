// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUBLURVIEW_H
#define MUBLURVIEW_H

@class UIView, NSArray, NSString, UIVisualEffectView, UIColor;



@interface MUBlurView : UIView {
    BOOL _isGaussianBlur;
    CGFloat _blurRadius;
    NSInteger _blurEffectStyle;
}


@property (copy, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (copy, nonatomic) NSString *blurGroupName; // ivar: _blurGroupName
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (retain, nonatomic) UIView *nonBlurView; // ivar: _nonBlurView
@property (copy, nonatomic) UIColor *nonBlurredColor; // ivar: _nonBlurredColor
@property (copy, nonatomic) UIColor *overlayColor; // ivar: _overlayColor
@property (nonatomic) BOOL shouldBlur; // ivar: _shouldBlur
@property (nonatomic) NSUInteger style; // ivar: _style


-(id)initWithBlurEffectStyle:(NSInteger)arg0 ;
-(id)initWithGaussianBlurWithRadius:(CGFloat)arg0 ;
-(void)_setup;
-(void)_transparencyStatusDidChange;
-(void)_update;


@end


#endif