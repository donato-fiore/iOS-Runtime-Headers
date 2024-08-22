// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BTSHAREAUDIOHOLDBUTTONVIEWCONTROLLER_H
#define BTSHAREAUDIOHOLDBUTTONVIEWCONTROLLER_H

@class UIButton, UILabel, UIImageView, UIView;


#import "BTShareAudioBaseViewController.h"
#import "BTMediaPlayerView.h"

@interface BTShareAudioHoldButtonViewController : BTShareAudioBaseViewController

@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (nonatomic) unsigned int colorCode; // ivar: _colorCode
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (retain, nonatomic) UIImageView *productImageView; // ivar: _productImageView
@property (retain, nonatomic) UIView *productMovieContainerView; // ivar: _productMovieContainerView
@property (retain, nonatomic) BTMediaPlayerView *productMovieView; // ivar: _productMovieView
@property (retain, nonatomic) UIImageView *shareImageView; // ivar: _shareImageView


-(id)_holdImageForPID:(unsigned int)arg0 colorCode:(unsigned int)arg1 ;
-(void)_updateDeviceVisual:(id)arg0 ;
-(void)eventCancel:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif