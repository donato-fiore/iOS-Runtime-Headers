// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLATTERVIEW_H
#define MKPLATTERVIEW_H

@class UIView, UIImageView, NSString, UIColor, UIFont;


#import "MKVibrantView.h"

@interface MKPlatterView : UIView {
    UIImageView *_glyphImageView;
    MKVibrantView *_platterView;
}


@property (retain, nonatomic) NSString *glyph; // ivar: _glyph
@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (retain, nonatomic) UIFont *glyphFont; // ivar: _glyphFont
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) BOOL showPlatterBackground;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateGlyph;


@end


#endif