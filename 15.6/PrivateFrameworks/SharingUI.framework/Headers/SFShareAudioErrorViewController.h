// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSHAREAUDIOERRORVIEWCONTROLLER_H
#define SFSHAREAUDIOERRORVIEWCONTROLLER_H

@class UIButton, NSError, UILabel;


#import "SFShareAudioBaseViewController.h"

@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController

@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) UILabel *internalLabel; // ivar: _internalLabel


-(void)eventDismiss:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif