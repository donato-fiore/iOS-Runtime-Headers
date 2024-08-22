// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYCOMMANDDISCOVERABILITYHUDVIEWCONTROLLER_H
#define UIKEYCOMMANDDISCOVERABILITYHUDVIEWCONTROLLER_H

@class NSArray;


#import "UIViewController.h"
#import "UIKeyCommandDiscoverabilityHUDView.h"

@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController {
    NSArray *_keyCommands;
    *__GSKeyboard _keyboard;
}


@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDView *view;


-(BOOL)_canShowWhileLocked;
-(id)initWithKeyCommands:(id)arg0 keyboard:(struct __GSKeyboard *)arg1 ;
-(void)_updateVisualStyle;
-(void)animateOutWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif