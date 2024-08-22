// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSITEICONVIEW_H
#define _SFSITEICONVIEW_H

@class UIView, UIImageView, UILabel, UIColor, WebBookmark, UIImage;
@protocol _SFSiteIconViewUpdateObserver;


#import "_SFHairlineBorderView.h"

@interface _SFSiteIconView : UIView {
    UIImageView *_imageView;
    UIView *_backgroundView;
    UILabel *_monogramLabel;
    NSInteger _state;
    id *_touchIconRequestToken;
    UIColor *_preferredBackgroundColor;
    UIImageView *_shadowView;
    _SFHairlineBorderView *_borderView;
    BOOL _modernImageIsTransparent;
}


@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *leadingImage; // ivar: _leadingImage
@property (nonatomic) BOOL shouldShowDropShadow; // ivar: _shouldShowDropShadow
@property (nonatomic) BOOL shouldUseModernStyling; // ivar: _shouldUseModernStyling
@property (weak, nonatomic) NSObject<_SFSiteIconViewUpdateObserver> *updateObserver; // ivar: _updateObserver


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