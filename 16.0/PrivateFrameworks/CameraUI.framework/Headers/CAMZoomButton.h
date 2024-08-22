// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMZOOMBUTTON_H
#define CAMZOOMBUTTON_H

@class UIControl, UIImageView, UIView;
@protocol CAMZoomButtonDelegate;


#import "CAMZoomFactorLabel.h"

@interface CAMZoomButton : UIControl

@property (retain, nonatomic) UIImageView *_accessoryBackgroundView; // ivar: __accessoryBackgroundView
@property (retain, nonatomic) UIImageView *_accessoryImageView; // ivar: __accessoryImageView
@property (readonly, nonatomic) UIImageView *_backgroundImageView; // ivar: __backgroundImageView
@property (readonly, nonatomic) UIImageView *_circleImageView; // ivar: __circleImageView
@property (readonly, nonatomic) UIView *_contentContainerView; // ivar: __contentContainerView
@property (readonly, nonatomic) CAMZoomFactorLabel *_zoomFactorLabel; // ivar: __zoomFactorLabel
@property (readonly, nonatomic) UIImageView *_zoomSymbolView; // ivar: __zoomSymbolView
@property (nonatomic) BOOL abbreviateAndEnlargeText; // ivar: _abbreviateAndEnlargeText
@property (readonly, nonatomic) CGRect accessoryFrame;
@property (nonatomic) NSInteger accessoryState; // ivar: _accessoryState
@property (nonatomic) NSInteger contentType; // ivar: _contentType
@property (weak, nonatomic) NSObject<CAMZoomButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic, setter=_setHighlightingTransform:) CGAffineTransform highlightingTransform; // ivar: _highlightingTransform
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic, getter=isOverPlatter) BOOL overPlatter; // ivar: _overPlatter
@property (nonatomic) BOOL shouldHideBackground; // ivar: _shouldHideBackground
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets
@property (nonatomic) BOOL useLeadingZero;
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor
@property (nonatomic) NSInteger zoomSymbol; // ivar: _zoomSymbol


+(BOOL)_useOutline;
+(BOOL)shouldUseLargeButtonSizeForContentSize:(id)arg0 ;
+(CGFloat)circleDiameterForContentSize:(id)arg0 ;
+(CGFloat)fontSizeForContentSize:(id)arg0 ;
+(id)textForZoomFactor:(CGFloat)arg0 showZoomFactorSymbol:(BOOL)arg1 ;
+(id)textForZoomFactor:(CGFloat)arg0 showZoomFactorSymbol:(BOOL)arg1 useLeadingZero:(BOOL)arg2 ;
-(CGFloat)_backgroundImageDiameterForContentSize:(id)arg0 ;
-(CGFloat)_circleLineWidthForContentSize:(id)arg0 ;
-(id)_createBackgroundImageForContentSize:(id)arg0 ;
-(id)_createBackgroundImageForContentSize:(id)arg0 color:(id)arg1 ;
-(id)_createCircleImageForContentSize:(id)arg0 ;
-(id)_imageForZoomSymbol:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_highlightingTransformForHighlighted:(BOOL)arg0 ;
-(struct CGAffineTransform )_transformForEnlargeText:(BOOL)arg0 orientation:(NSInteger)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonCAMZoomButtonInitialization;
-(void)_createZoomSymbolViewIfNecessary;
-(void)_performHighlightAnimation;
-(void)_updateAccessoryAlphas;
-(void)_updateAccessoryBackgroundView;
-(void)_updateBackgroundImageViewAlpha;
-(void)_updateForContentSize;
-(void)_updateZoomFactorLabel;
-(void)_updateZoomSymbolViewAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif