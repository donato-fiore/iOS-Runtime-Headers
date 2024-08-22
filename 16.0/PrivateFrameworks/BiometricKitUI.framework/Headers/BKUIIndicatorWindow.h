// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIINDICATORWINDOW_H
#define BKUIINDICATORWINDOW_H

@class UIWindow;


#import "BKUIIndicatorViewController.h"

@interface BKUIIndicatorWindow : UIWindow

@property (retain, nonatomic) BKUIIndicatorViewController *indicatorController; // ivar: _indicatorController
@property (nonatomic) BOOL shouldShow; // ivar: _shouldShow


+(id)instanceWithWindowScene:(id)arg0 ;
-(id)backgroundColor;


@end


#endif