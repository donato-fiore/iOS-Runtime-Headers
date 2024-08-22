// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAUIPEARLGLYPHLABEL_H
#define LAUIPEARLGLYPHLABEL_H

@class UIView, CABackdropLayer, UILabel, UIColor, UIFont, NSString;
@protocol OS_dispatch_source;


#import "LAUIPearlGlyphView.h"

@interface LAUIPearlGlyphLabel : UIView {
    UIView *_container;
    CABackdropLayer *_background;
    UIView *_labelContainer;
    UILabel *_label;
    UIView *_glyphContainer;
    LAUIPearlGlyphView *_glyph;
    map<CALayer *__unsafe_unretained, CALayer *, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, CALayer *>>> _masks;
    vector<UIView *, std::allocator<UIView *>> _labelSnapshots;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIFont *_baseFont;
    CGSize _currentLabelSize;
    CGSize _currentMaximumSize;
    NSObject<OS_dispatch_source> *_visibilityTimer;
    BOOL _inWindow;
    BOOL _textNeedsUpdate;
    BOOL _textUpdateNeedsAnimation;
    BOOL _visible;
    BOOL _visibleNeedsUpdate;
    BOOL _allowDelayedVisibility;
    BOOL _animated;
    BOOL _reduceBlur;
}


@property (nonatomic) BOOL inApplicationContext;
@property (readonly, nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (readonly, nonatomic, getter=isShimmerEnabled) BOOL shimmerEnabled; // ivar: _shimmerEnabled
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyStyle;
-(void)_applyVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateBoundsSizeAnimated:(BOOL)arg0 ;
-(void)_updateFontAnimated:(BOOL)arg0 ;
-(void)_updateGlyphPaused;
-(void)_updateReduceBlurState;
-(void)_updateText;
-(void)_updateVisibilityAnimated:(BOOL)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)boldTextStatusDidChange:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)reduceMotionDidChange:(id)arg0 ;
-(void)reduceTransparencyDidChange:(id)arg0 ;


@end


#endif