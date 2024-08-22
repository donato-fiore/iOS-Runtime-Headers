// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSHAREAUDIOCONNECTINGVIEWCONTROLLER_H
#define SFSHAREAUDIOCONNECTINGVIEWCONTROLLER_H

@class UIButton, UIImageView, UIActivityIndicatorView, UILabel, UIView;


#import "SFShareAudioBaseViewController.h"
#import "SFMediaPlayerView.h"

@interface SFShareAudioConnectingViewController : SFShareAudioBaseViewController {
    unsigned int _productIDActive;
}


@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (nonatomic) unsigned int colorCode; // ivar: _colorCode
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (retain, nonatomic) UIImageView *productImageView; // ivar: _productImageView
@property (retain, nonatomic) SFMediaPlayerView *productMovieView; // ivar: _productMovieView
@property (retain, nonatomic) UIActivityIndicatorView *progressActivity; // ivar: _progressActivity
@property (retain, nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (retain, nonatomic) UIView *progressView; // ivar: _progressView
@property (retain, nonatomic) UIImageView *shareImageView; // ivar: _shareImageView


-(void)_updateDeviceVisual:(id)arg0 ;
-(void)_updateForDeviceInfo;
-(void)eventCancel:(id)arg0 ;
-(void)sessionProgressEvent:(int)arg0 info:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif