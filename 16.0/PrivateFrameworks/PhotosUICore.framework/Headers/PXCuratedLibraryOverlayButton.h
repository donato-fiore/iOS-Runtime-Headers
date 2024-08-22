// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYOVERLAYBUTTON_H
#define PXCURATEDLIBRARYOVERLAYBUTTON_H

@class UIButton, NSString, UIView, UILabel, UIImageView, UIVisualEffectView, UIPointerInteraction;
@protocol UIPointerInteractionDelegate, PXGReusableView;


#import "PXCuratedLibraryOverlayButtonConfiguration.h"

@interface PXCuratedLibraryOverlayButton : UIButton <UIPointerInteractionDelegate, PXGReusableView>



@property (retain, nonatomic) NSString *axLabel; // ivar: _axLabel
@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UILabel *customCaptionLabel; // ivar: _customCaptionLabel
@property (retain, nonatomic) UIImageView *customIconImageView; // ivar: _customIconImageView
@property (retain, nonatomic) UIView *customSolidBackgroundView; // ivar: _customSolidBackgroundView
@property (retain, nonatomic) UILabel *customTitleLabel; // ivar: _customTitleLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSizeCalculationButton; // ivar: _isSizeCalculationButton
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData; // ivar: _userData


+(BOOL)usesButtonSystem;
+(id)buttonSizeCache;
+(id)defaultTitleColor;
+(id)defaultTitleFont;
+(id)roundedCornerMaskImage:(struct ? )arg0 size:(struct CGSize )arg1 ;
+(id)titleSizeCache;
+(struct CGSize )_sizeOfTitle:(id)arg0 withFont:(id)arg1 ;
+(struct CGSize )sizeWithConfiguration:(id)arg0 ;
+(void)_getSize:(struct CGSize *)arg0 titleFrame:(struct CGRect *)arg1 captionFrame:(struct CGRect *)arg2 iconFrame:(struct CGRect *)arg3 forConfiguration:(id)arg4 title:(id)arg5 ;
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accessibilitySettingsChanged:(id)arg0 ;
-(void)_performAction:(id)arg0 ;
-(void)_performMenuAction:(id)arg0 ;
-(void)_platformSpecificViewSetup;
-(void)_setupViews;
-(void)_updateBackgroundView;
-(void)_updateButtonSystemWithConfiguration:(id)arg0 ;
-(void)_updateButtonWithConfiguration:(id)arg0 ;
-(void)_updateEffectView;
-(void)_updateEffectViewBackgroundStyle;
-(void)becomeReusable;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif