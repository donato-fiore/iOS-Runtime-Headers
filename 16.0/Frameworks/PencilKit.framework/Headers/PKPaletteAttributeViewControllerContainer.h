// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEATTRIBUTEVIEWCONTROLLERCONTAINER_H
#define PKPALETTEATTRIBUTEVIEWCONTROLLERCONTAINER_H

@class UIViewController;


#import "PKPaletteAttributeViewController.h"

@interface PKPaletteAttributeViewControllerContainer : PKPaletteAttributeViewController

@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController


-(id)initWithContentViewController:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)viewDidLoad;


@end


#endif