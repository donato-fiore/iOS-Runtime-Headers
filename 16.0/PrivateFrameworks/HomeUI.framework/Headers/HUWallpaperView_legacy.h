// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUWALLPAPERVIEW_LEGACY_H
#define HUWALLPAPERVIEW_LEGACY_H

@class UIView, CABackdropLayer, NSString, UIVisualEffectView, HFWallpaperSlice;
@protocol HUBackgroundEffectViewGrouping;



@interface HUWallpaperView_legacy : UIView <HUBackgroundEffectViewGrouping>



@property (readonly, nonatomic) CABackdropLayer *backdropLayer;
@property (retain, nonatomic) NSString *blurGroupName; // ivar: _blurGroupName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView
@property (retain, nonatomic) UIView *wallpaperContentView; // ivar: _wallpaperContentView
@property (retain, nonatomic) HFWallpaperSlice *wallpaperSlice; // ivar: _wallpaperSlice


+(id)_sharedBlurEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )normalizedWallpaperRectForFrameInWindowSpace:(struct CGRect )arg0 ;
-(void)_updateVisualEffectView;
-(void)backgroundEffectAddCaptureDependent:(id)arg0 forBackgroundEffectIdentifier:(id)arg1 ;
-(void)backgroundEffectRemoveCaptureDependent:(id)arg0 forBackgroundEffectIdentifier:(id)arg1 ;
-(void)updateConstraints;


@end


#endif