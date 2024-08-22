// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMZOOMFACTORLABEL_H
#define CAMZOOMFACTORLABEL_H

@class UIView, UILabel, UIImageView, UIColor;



@interface CAMZoomFactorLabel : UIView

@property (readonly, nonatomic) UILabel *_label; // ivar: __label
@property (retain, nonatomic) UIImageView *_minimizedGlyph; // ivar: __minimizedGlyph
@property (nonatomic) BOOL minimized; // ivar: _minimized
@property (nonatomic) BOOL preferDefaultSizing; // ivar: _preferDefaultSizing
@property (nonatomic) BOOL showZoomFactorSymbol; // ivar: _showZoomFactorSymbol
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL useLeadingZero; // ivar: _useLeadingZero
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor


+(id)_minimizedImageWithScale:(CGFloat)arg0 ;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateFont;
-(void)_updateLabelText;
-(void)_updateMinimizedGlyph;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif