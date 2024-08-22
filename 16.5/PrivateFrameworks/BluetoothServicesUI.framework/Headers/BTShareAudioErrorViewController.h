// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTSHAREAUDIOERRORVIEWCONTROLLER_H
#define BTSHAREAUDIOERRORVIEWCONTROLLER_H

@class UIButton, NSError, UILabel;


#import "BTShareAudioBaseViewController.h"

@interface BTShareAudioErrorViewController : BTShareAudioBaseViewController

@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) UILabel *internalLabel; // ivar: _internalLabel


-(void)eventDismiss:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif