// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSHAREAUDIOCONFIRMVIEWCONTROLLER_H
#define SFSHAREAUDIOCONFIRMVIEWCONTROLLER_H

@class MTMaterialView, UIButton, UIImageView;


#import "SFShareAudioBaseViewController.h"
#import "SFMediaPlayerView.h"

@interface SFShareAudioConfirmViewController : SFShareAudioBaseViewController {
    MTMaterialView *_confirmButtonMaterialView;
}


@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (nonatomic) unsigned int colorCode; // ivar: _colorCode
@property (retain, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (retain, nonatomic) UIImageView *productImageView; // ivar: _productImageView
@property (retain, nonatomic) SFMediaPlayerView *productMovieView; // ivar: _productMovieView
@property (retain, nonatomic) UIImageView *shareImageView; // ivar: _shareImageView


-(void)_updateDeviceVisual:(id)arg0 ;
-(void)eventCancel:(id)arg0 ;
-(void)eventConfirm:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif