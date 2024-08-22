// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXDISCLAIMERCONTENTVIEWCONTROLLER_H
#define PRXDISCLAIMERCONTENTVIEWCONTROLLER_H

@class NSString;


#import "PRXCardContentViewController.h"
#import "PRXDisclaimerContentView.h"
#import "PRXAction.h"

@interface PRXDisclaimerContentViewController : PRXCardContentViewController

@property (readonly, nonatomic) PRXDisclaimerContentView *contentView;
@property (copy, nonatomic) NSString *disclaimer; // ivar: _disclaimer
@property (retain, nonatomic) PRXAction *moreInfoAction; // ivar: _moreInfoAction


-(void)_updateDisclaimerLabel;
-(void)_updateMoreInfoButton;
-(void)viewDidLoad;


@end


#endif