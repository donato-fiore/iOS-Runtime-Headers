// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCROPOVERLAYPREVIEWBOTTOMBAR_H
#define PLCROPOVERLAYPREVIEWBOTTOMBAR_H

@class UIView, UIButton;



@interface PLCropOverlayPreviewBottomBar : UIView

@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (readonly, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) UIButton *fileResizingButton; // ivar: _fileResizingButton
@property (readonly, nonatomic) UIButton *playbackButton; // ivar: _playbackButton


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
-(void)_updateBackgroundStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;


@end


#endif