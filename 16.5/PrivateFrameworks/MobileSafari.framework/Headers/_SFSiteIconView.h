// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSITEICONVIEW_H
#define _SFSITEICONVIEW_H

@class UIView, UIImageView, UIVisualEffectView, UILabel, UIColor, UIVisualEffect, UIAction, WebBookmark, UIImage, NSString;
@protocol _SFSiteIconViewUpdateObserver;


#import "_SFHairlineBorderView.h"

@interface _SFSiteIconView : UIView {
    UIImageView *_imageView;
    UIVisualEffectView *_backgroundView;
    UILabel *_monogramLabel;
    NSInteger _state;
    id *_touchIconRequestToken;
    UIColor *_preferredBackgroundColor;
    UIVisualEffect *_preferredBackgroundEffect;
    UIImageView *_shadowView;
    _SFHairlineBorderView *_borderView;
    BOOL _imageIsTransparent;
}


@property (copy, nonatomic) UIAction *action; // ivar: _action
@property (nonatomic) BOOL allowsDropShadow; // ivar: _allowsDropShadow
@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *leadingImage; // ivar: _leadingImage
@property (weak, nonatomic) NSObject<_SFSiteIconViewUpdateObserver> *updateObserver; // ivar: _updateObserver
@property (copy, nonatomic) NSString *visualEffectGroupName;


-(BOOL)usesVibrantAppearance;
-(CGFloat)_monogramFontSize;
-(NSInteger)_inferredIconSize;
-(id)_effectiveBackgroundColor;
-(id)_glyphConfiguration;
-(id)_tintedFolderImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cancelTouchIconRequest;
-(void)_displayDefaultFolderIcon;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setGlyph:(id)arg0 withBackgroundColor:(id)arg1 ;
-(void)_setGlyph:(id)arg0 withBackgroundEffect:(id)arg1 ;
-(void)_setMonogramWithString:(id)arg0 backgroundColor:(id)arg1 ;
-(void)_setSiteIcon:(id)arg0 withBackgroundColor:(id)arg1 ;
-(void)_setState:(NSInteger)arg0 ;
-(void)_updateGlyphConfiguration;
-(void)_updateMonogramLabelSizeAndFont;
-(void)_updateSiteIconViewWithTouchIconResponse:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateBookmarkData;


@end


#endif