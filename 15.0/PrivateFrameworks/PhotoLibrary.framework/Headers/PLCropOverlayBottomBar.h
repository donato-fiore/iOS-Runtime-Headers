// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCROPOVERLAYBOTTOMBAR_H
#define PLCROPOVERLAYBOTTOMBAR_H

@class UIView;


#import "PLCropOverlayPreviewBottomBar.h"
#import "PLCropOverlayWallpaperBottomBar.h"

@interface PLCropOverlayBottomBar : UIView

@property (retain, nonatomic) UIView *cameraBottomBar; // ivar: _cameraBottomBar
@property (nonatomic, getter=isInPopover) BOOL inPopover; // ivar: _inPopover
@property (nonatomic, getter=isPlayingVideo) BOOL playingVideo; // ivar: _playingVideo
@property (retain, nonatomic) PLCropOverlayPreviewBottomBar *previewBottomBar; // ivar: _previewBottomBar
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar; // ivar: _wallpaperBottomBar


-(BOOL)_isEditingStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPLCropOverlayBottomBarInitialization;
-(void)_updateBottomBars;
-(void)_updatePreviewBottomBarForPlaybackState;
-(void)_updateStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(void)togglePlaybackState;


@end


#endif