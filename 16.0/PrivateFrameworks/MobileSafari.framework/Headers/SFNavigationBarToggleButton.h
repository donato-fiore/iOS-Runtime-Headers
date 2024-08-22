// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFNAVIGATIONBARTOGGLEBUTTON_H
#define SFNAVIGATIONBARTOGGLEBUTTON_H

@class UIImageView, UIView, NSString, UIColor, UIImage, UIPointerInteraction, UIImageSymbolConfiguration;
@protocol UIPointerInteractionDelegate;


#import "SFClickableButton.h"
#import "SFToggleBackgroundView.h"

@interface SFNavigationBarToggleButton : SFClickableButton <UIPointerInteractionDelegate>

 {
    BOOL _liftedForCursor;
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    UIImageView *_secondaryImageView;
    UIImageView *_tertiaryImageView;
    SFToggleBackgroundView *_selectedStateMaskView;
    UIView *_selectedStateFillView;
    UIView *_badgeView;
    NSUInteger _inputMode;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) NSInteger cornerRoundingMode; // ivar: _cornerRoundingMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsLightGlyph; // ivar: _drawsLightGlyph
@property (retain, nonatomic) UIColor *glyphTintColor; // ivar: _glyphTintColor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightsBackground; // ivar: _highlightsBackground
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat insetFromBackground; // ivar: _insetFromBackground
@property (nonatomic) CGFloat minimumSideMargin; // ivar: _minimumSideMargin
@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (weak, nonatomic) UIView *pointerPreviewContainer; // ivar: _pointerPreviewContainer
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // ivar: _preferredSymbolConfiguration
@property (nonatomic) CGFloat resizableBackgroundCornerRadius; // ivar: _resizableBackgroundCornerRadius
@property (retain, nonatomic) UIImage *secondaryImage;
@property (retain, nonatomic) UIColor *secondaryImageColor;
@property (nonatomic) BOOL showsBadge; // ivar: _showsBadge
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *tertiaryImage;
@property (retain, nonatomic) UIColor *tertiaryImageColor;
@property (retain, nonatomic) UIView *tiplessPopoverSourceView; // ivar: _tiplessPopoverSourceView
@property (nonatomic) BOOL usesInsetFromBackground; // ivar: _usesInsetFromBackground


+(id)extensionsImage;
+(id)formatMenuImage;
+(id)readerImage;
+(id)translationImage;
+(struct CGSize )glyphSize;
-(id)initWithImage:(id)arg0 forInputMode:(NSUInteger)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif