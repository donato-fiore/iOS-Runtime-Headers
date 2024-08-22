// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSSHARINGPROGRESSOVERLAY_H
#define PUPHOTOSSHARINGPROGRESSOVERLAY_H

@class UIView, UIWindow;



@interface PUPhotosSharingProgressOverlay : UIView {
    BOOL _isShowing;
}


@property (weak, nonatomic) UIWindow *cachedMainWindow; // ivar: _cachedMainWindow
@property (retain, nonatomic) UIView *progressView; // ivar: _progressView


-(id)_grayScaleImageFromImage:(id)arg0 ;
-(id)_mainWindow;
-(id)_screenshotImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installInStatusBarWindow;
-(void)_setupOverlayAnimated:(BOOL)arg0 ;
-(void)_tearDownOverlayAnimated:(BOOL)arg0 ;
-(void)addProgressView:(id)arg0 ;
-(void)setShowing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif