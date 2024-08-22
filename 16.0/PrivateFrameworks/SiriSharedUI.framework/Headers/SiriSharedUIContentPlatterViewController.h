// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUICONTENTPLATTERVIEWCONTROLLER_H
#define SIRISHAREDUICONTENTPLATTERVIEWCONTROLLER_H

@class UIViewController, NSArray;


#import "SiriSharedUIContentPlatterView.h"

@interface SiriSharedUIContentPlatterViewController : UIViewController

@property (readonly, nonatomic) SiriSharedUIContentPlatterView *contentPlatterView;
@property (retain, nonatomic) NSArray *contentViewControllers; // ivar: _contentViewControllers


-(BOOL)_canShowWhileLocked;
-(void)appendSeparatorToViewControllers:(id)arg0 forNextViewController:(id)arg1 ;
-(void)loadView;


@end


#endif