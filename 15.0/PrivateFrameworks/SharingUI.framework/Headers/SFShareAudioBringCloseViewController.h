// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSHAREAUDIOBRINGCLOSEVIEWCONTROLLER_H
#define SFSHAREAUDIOBRINGCLOSEVIEWCONTROLLER_H

@class NSMutableArray, UIButton, UILabel, UIImageView;
@protocol OS_dispatch_source;


#import "SFShareAudioBaseViewController.h"

@interface SFShareAudioBringCloseViewController : SFShareAudioBaseViewController {
    NSMutableArray *_cycleImageArray;
    NSObject<OS_dispatch_source> *_cycleImageTimer;
    unsigned int _cycleNextIndex;
}


@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) UIImageView *shareImageView; // ivar: _shareImageView


-(void)_cycleProductImage;
-(void)eventCancel:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif