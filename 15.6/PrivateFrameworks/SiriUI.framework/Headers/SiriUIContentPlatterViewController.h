// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICONTENTPLATTERVIEWCONTROLLER_H
#define SIRIUICONTENTPLATTERVIEWCONTROLLER_H

@class UIViewController, NSArray;


#import "SiriUIContentPlatterView.h"

@interface SiriUIContentPlatterViewController : UIViewController

@property (readonly, nonatomic) SiriUIContentPlatterView *contentPlatterView;
@property (retain, nonatomic) NSArray *contentViewControllers; // ivar: _contentViewControllers


-(BOOL)_canShowWhileLocked;
-(void)loadView;


@end


#endif