// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BTSHAREAUDIOBRINGCLOSEVIEWCONTROLLER_H
#define BTSHAREAUDIOBRINGCLOSEVIEWCONTROLLER_H

@class NSMutableArray, UIImageView, UIButton, UILabel, UIView;
@protocol OS_dispatch_source;


#import "BTShareAudioBaseViewController.h"

@interface BTShareAudioBringCloseViewController : BTShareAudioBaseViewController {
    NSMutableArray *_cycleImageArray;
    NSObject<OS_dispatch_source> *_cycleImageTimer;
    unsigned int _cycleNextIndex;
}


@property (retain, nonatomic) UIImageView *bannerImageView; // ivar: _bannerImageView
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) UIView *productImageContainerView; // ivar: _productImageContainerView
@property (retain, nonatomic) UIImageView *shareImageView; // ivar: _shareImageView


-(void)_cycleProductImage;
-(void)eventCancel:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif