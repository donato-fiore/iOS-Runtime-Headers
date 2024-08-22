// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDCELLBACKGROUNDVIEW_H
#define HUGRIDCELLBACKGROUNDVIEW_H

@class UIView, UIColor, UIVisualEffectView, UIBlurEffect;
@protocol HUBackgroundEffectViewGrouping;


#import "HUGridCellBackgroundDisplayOptions.h"

@interface HUGridCellBackgroundView : UIView

@property (weak, nonatomic) NSObject<HUBackgroundEffectViewGrouping> *backgroundEffectViewGrouper; // ivar: _backgroundEffectViewGrouper
@property (nonatomic) NSUInteger backgroundState; // ivar: _backgroundState
@property (retain, nonatomic) UIColor *backgroundTintColor; // ivar: _backgroundTintColor
@property (retain, nonatomic) UIView *ccHighlightMaterialView; // ivar: _ccHighlightMaterialView
@property (retain, nonatomic) UIView *ccOffMaterialView; // ivar: _ccOffMaterialView
@property (retain, nonatomic) UIView *ccOnMaterialView; // ivar: _ccOnMaterialView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) HUGridCellBackgroundDisplayOptions *displayOptions; // ivar: _displayOptions
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (nonatomic) CGRect normalizedWallpaperRect; // ivar: _normalizedWallpaperRect
@property (retain, nonatomic) UIBlurEffect *overrideBackgroundEffect; // ivar: _overrideBackgroundEffect
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic) BOOL useDefaultCellBackgroundColor; // ivar: _useDefaultCellBackgroundColor


+(id)_sharedBlurEffect;
-(BOOL)_shouldUseCCMaterialView;
-(BOOL)_shouldUsePrecomputedWallpaperContents;
-(BOOL)_shouldUseVisualEffectStyle;
-(id)_normalBackgroundColor;
-(void)_createEffectViewIfNecessary;
-(void)_createHighlightCCMateriaViewIfNecessary;
-(void)_createOffCCMaterialViewIfNecessary;
-(void)_createOnCCMaterialViewIfNecessary;
-(void)_updateBackgroundColor;
-(void)_updateCornerRadius;
-(void)_updateDisplay;
-(void)_updateHighlightView;
-(void)_updateWallpaperContentsRect;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif