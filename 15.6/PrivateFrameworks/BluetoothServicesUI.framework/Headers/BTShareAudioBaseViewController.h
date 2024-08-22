// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BTSHAREAUDIOBASEVIEWCONTROLLER_H
#define BTSHAREAUDIOBASEVIEWCONTROLLER_H

@class UIViewController, UIView, UILabel;


#import "BTShareAudioViewController.h"

@interface BTShareAudioBaseViewController : UIViewController

@property (retain, nonatomic) UIView *cardView; // ivar: _cardView
@property (retain, nonatomic) BTShareAudioViewController *mainController; // ivar: _mainController
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL viewActive; // ivar: _viewActive


-(void)_handleMenuButton:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif