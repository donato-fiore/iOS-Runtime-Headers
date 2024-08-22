// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCROPOVERLAYWALLPAPERBOTTOMBAR_H
#define PLCROPOVERLAYWALLPAPERBOTTOMBAR_H

@class UIView, _UIBackdropView, _UILegibilityLabel;


#import "PLWallpaperButton.h"

@interface PLCropOverlayWallpaperBottomBar : UIView

@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (readonly, retain, nonatomic) PLWallpaperButton *doCancelButton; // ivar: _doCancelButton
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetBothScreenButton; // ivar: _doSetBothScreenButton
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetButton; // ivar: _doSetButton
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetHomeScreenButton; // ivar: _doSetHomeScreenButton
@property (readonly, retain, nonatomic) PLWallpaperButton *doSetLockScreenButton; // ivar: _doSetLockScreenButton
@property (nonatomic) CGFloat maxToggleWidth; // ivar: _maxToggleWidth
@property (readonly, retain, nonatomic) PLWallpaperButton *motionToggle; // ivar: _motionToggle
@property (nonatomic) BOOL motionToggleHidden; // ivar: _motionToggleHidden
@property (retain, nonatomic) UIView *separatorLine; // ivar: _separatorLine
@property (nonatomic) BOOL shouldOnlyShowHomeScreenButton; // ivar: _shouldOnlyShowHomeScreenButton
@property (nonatomic) BOOL shouldOnlyShowLockScreenButton; // ivar: _shouldOnlyShowLockScreenButton
@property (retain, nonatomic) _UILegibilityLabel *titleLabel; // ivar: _titleLabel


-(CGFloat)widthForToggleText;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_sizeForString:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonPLCropOverlayWallpaperBottomBarInitialization;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
-(void)_layoutSubviewsPad;
-(void)_layoutSubviewsPhone;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg0 ;
-(void)updateForChangedSettings:(id)arg0 ;


@end


#endif