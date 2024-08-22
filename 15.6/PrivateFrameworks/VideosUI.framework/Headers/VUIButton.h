// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIBUTTON_H
#define VUIBUTTON_H

@class UIControl, UIColor, NSString, UIView, VUIImageView, NSShadow;
@protocol UIPointerInteractionDelegate, VUILabelBaselineProtocol;


#import "VUILabel.h"

@interface VUIButton : UIControl <UIPointerInteractionDelegate, VUILabelBaselineProtocol>



@property (retain, nonatomic) UIColor *adjustmentModeNormalTintColor; // ivar: _adjustmentModeNormalTintColor
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (retain, nonatomic) UIView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) VUIImageView *backgroundImagesViewDefaultState; // ivar: _backgroundImagesViewDefaultState
@property (retain, nonatomic) VUIImageView *backgroundImagesViewHighlightedState; // ivar: _backgroundImagesViewHighlightedState
@property (retain, nonatomic) UIColor *buttonBackgroundColor; // ivar: _buttonBackgroundColor
@property (nonatomic) NSUInteger buttonType; // ivar: _buttonType
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (nonatomic) BOOL hasDisclaimerText; // ivar: _hasDisclaimerText
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) UIColor *imageHighlightColor; // ivar: _imageHighlightColor
@property (nonatomic) UIEdgeInsets imageMargin; // ivar: _imageMargin
@property (nonatomic) CGFloat imageMaxHeight; // ivar: _imageMaxHeight
@property (nonatomic) CGFloat imageMaxWidth; // ivar: _imageMaxWidth
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (nonatomic) BOOL imageTrailsTextContent; // ivar: _imageTrailsTextContent
@property (retain, nonatomic) VUIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) VUIImageView *imagesViewDefaultState; // ivar: _imagesViewDefaultState
@property (retain, nonatomic) VUIImageView *imagesViewHighlightedState; // ivar: _imagesViewHighlightedState
@property (nonatomic) BOOL isTintColorAndBackgroundColorSaturated; // ivar: _isTintColorAndBackgroundColorSaturated
@property (nonatomic) CGFloat maxHeight; // ivar: _maxHeight
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (nonatomic) CGFloat minWidth; // ivar: _minWidth
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (copy, nonatomic) id *selectActionHandler; // ivar: _selectActionHandler
@property (retain, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (readonly) Class superclass;
@property (retain, nonatomic) VUILabel *textContentView; // ivar: _textContentView
@property (nonatomic) CGFloat width; // ivar: _width


-(BOOL)_hasBackgroundImage;
-(BOOL)_hasImage;
-(BOOL)_hasTitle;
-(BOOL)scalesLargeContentImage;
-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)topMarginToLabel:(id)arg0 withBaselineMargin:(CGFloat)arg1 ;
-(CGFloat)topMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)vui_baselineOffsetFromBottom;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 interfaceStyle:(NSUInteger)arg1 ;
-(id)largeContentImage;
-(id)largeContentTitle;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )_centerWithViewSize:(struct CGSize )arg0 withParentSize:(struct CGSize )arg1 ;
-(struct CGRect )_pointerShapeRect;
-(struct CGSize )_computeSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )_imageSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_configure;
-(void)_setupBarButtonItem;
-(void)_setupPrimaryWithUberBackdropView;
-(void)_updateLayout;
-(void)configureWithLayoutProperties;
-(void)layoutSubviews;
-(void)revertTintColor;
-(void)saturateTintColorAndBackgroundColor;
-(void)setBackgroundImage:(id)arg0 forHighlightedState:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setScrolledNonUberPercentage:(CGFloat)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)setVuiBackgroundColor:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_prepareForReuse;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif