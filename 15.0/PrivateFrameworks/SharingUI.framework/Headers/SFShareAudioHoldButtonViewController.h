// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSHAREAUDIOHOLDBUTTONVIEWCONTROLLER_H
#define SFSHAREAUDIOHOLDBUTTONVIEWCONTROLLER_H

@class UIButton, UILabel, NSLayoutConstraint, UIImageView;


#import "SFShareAudioBaseViewController.h"
#import "SFMediaPlayerView.h"

@interface SFShareAudioHoldButtonViewController : SFShareAudioBaseViewController

@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (nonatomic) unsigned int colorCode; // ivar: _colorCode
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) NSLayoutConstraint *movieViewHeightConstraint; // ivar: _movieViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *movieViewLeadingConstraint; // ivar: _movieViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *movieViewTrailingConstraint; // ivar: _movieViewTrailingConstraint
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (retain, nonatomic) SFMediaPlayerView *productMovieView; // ivar: _productMovieView
@property (retain, nonatomic) UIImageView *shareImageView; // ivar: _shareImageView


-(void)_updateDeviceVisual:(id)arg0 ;
-(void)eventCancel:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif