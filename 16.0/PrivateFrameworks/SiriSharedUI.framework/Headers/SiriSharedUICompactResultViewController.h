// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUICOMPACTRESULTVIEWCONTROLLER_H
#define SIRISHAREDUICOMPACTRESULTVIEWCONTROLLER_H

@class UIViewController;


#import "SiriSharedUICompactResultView.h"
#import "SiriSharedUIContentPlatterViewController.h"

@interface SiriSharedUICompactResultViewController : UIViewController

@property (readonly, nonatomic) SiriSharedUICompactResultView *compactResultView;
@property (copy, nonatomic) SiriSharedUIContentPlatterViewController *contentPlatterViewController; // ivar: _contentPlatterViewController


-(BOOL)_canShowWhileLocked;
-(void)loadView;


@end


#endif