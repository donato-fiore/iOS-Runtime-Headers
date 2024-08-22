// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHAREAUDIOBASEVIEWCONTROLLER_H
#define SFSHAREAUDIOBASEVIEWCONTROLLER_H

@class UIViewController, UIView, UILabel;


#import "SFShareAudioViewController.h"

@interface SFShareAudioBaseViewController : UIViewController

@property (retain, nonatomic) UIView *cardView; // ivar: _cardView
@property (retain, nonatomic) SFShareAudioViewController *mainController; // ivar: _mainController
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL viewActive; // ivar: _viewActive


-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif