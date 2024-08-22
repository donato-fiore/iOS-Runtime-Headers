// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCONTINUOUSBUTTON_H
#define PKCONTINUOUSBUTTON_H

@class UIButton, UIImage, NSMutableSet, UIColor, CAFilter, CAShapeLayer, _UIBackdropView, UIActivityIndicatorView;



@interface PKContinuousButton : UIButton {
    ? _configuration;
    UIImage *_image;
    NSMutableSet *_disabledImageStates;
    UIColor *_overrideTitleColor;
    CAFilter *_highlightFilter;
    UIColor *_normalInputColor;
    UIColor *_highlightInputColor;
    UIColor *_selectedInputColor;
    UIColor *_disabledInputColor;
    UIColor *_appliedInputColor;
    CAShapeLayer *_layer;
    _UIBackdropView *_backdropView;
    NSInteger _backdropStyle;
    BOOL _updatingBackdropSettings;
    BOOL _highlighted;
    BOOL _selected;
    BOOL _enabled;
    CGSize _boundsSize;
    UIActivityIndicatorView *_activityIndicatorView;
    UIColor *_activityIndicatorColor;
}


@property (nonatomic) BOOL blurDisabled; // ivar: _blurDisabled
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner


+(Class)layerClass;
+(id)_filterInputColorForEffect:(NSInteger)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(struct ? )arg0 ;
-(id)initWithCornerRadius:(CGFloat)arg0 effect:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pk_childrenForAppearance;
-(void)_accessibilitySettingsDidChange:(id)arg0 ;
-(void)_createHighlightFilterIfNecessary;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateBackdropSettings;
-(void)_updateColor;
-(void)_updateFilter;
-(void)_updateTitleColor;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImageEnabled:(BOOL)arg0 forState:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)updateActivityIndicatorColorWithColor:(id)arg0 ;
-(void)updateImageView;
-(void)updateTitleColorWithColor:(id)arg0 ;
-(void)updateWithImage:(id)arg0 ;


@end


#endif