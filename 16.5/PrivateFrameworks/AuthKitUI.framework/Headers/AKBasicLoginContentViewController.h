// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKBASICLOGINCONTENTVIEWCONTROLLER_H
#define AKBASICLOGINCONTENTVIEWCONTROLLER_H

@class UIViewController;


#import "AKBasicLoginContentViewControllerContainerView.h"

@interface AKBasicLoginContentViewController : UIViewController

@property (readonly, nonatomic) AKBasicLoginContentViewControllerContainerView *contentContainerView;


-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif