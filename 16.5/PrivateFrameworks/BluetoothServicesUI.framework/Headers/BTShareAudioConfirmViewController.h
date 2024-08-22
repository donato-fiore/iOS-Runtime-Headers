// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTSHAREAUDIOCONFIRMVIEWCONTROLLER_H
#define BTSHAREAUDIOCONFIRMVIEWCONTROLLER_H

@class UIButton, NSString, UIImageView;


#import "BTShareAudioBaseViewController.h"
#import "BTMediaPlayerView.h"

@interface BTShareAudioConfirmViewController : BTShareAudioBaseViewController

@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (nonatomic) unsigned int colorCode; // ivar: _colorCode
@property (retain, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (retain, nonatomic) UIImageView *productImageView; // ivar: _productImageView
@property (retain, nonatomic) BTMediaPlayerView *productMovieView; // ivar: _productMovieView
@property (retain, nonatomic) UIImageView *shareImageView; // ivar: _shareImageView


-(void)_updateDeviceVisual:(id)arg0 ;
-(void)eventCancel:(id)arg0 ;
-(void)eventPermanentButton:(id)arg0 ;
-(void)eventTemporarilyShareButton:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif