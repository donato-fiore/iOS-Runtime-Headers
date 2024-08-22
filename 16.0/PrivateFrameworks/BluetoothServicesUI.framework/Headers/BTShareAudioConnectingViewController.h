// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTSHAREAUDIOCONNECTINGVIEWCONTROLLER_H
#define BTSHAREAUDIOCONNECTINGVIEWCONTROLLER_H

@class UIButton, NSString, UIImageView, UIActivityIndicatorView, UILabel, UIView;


#import "BTShareAudioBaseViewController.h"
#import "BTMediaPlayerView.h"

@interface BTShareAudioConnectingViewController : BTShareAudioBaseViewController {
    unsigned int _productIDActive;
}


@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (nonatomic) unsigned int colorCode; // ivar: _colorCode
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (retain, nonatomic) UIImageView *productImageView; // ivar: _productImageView
@property (retain, nonatomic) BTMediaPlayerView *productMovieView; // ivar: _productMovieView
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