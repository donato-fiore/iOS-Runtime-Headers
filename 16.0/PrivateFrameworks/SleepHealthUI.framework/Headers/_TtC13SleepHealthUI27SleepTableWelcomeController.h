// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SLEEPHEALTHUI27SLEEPTABLEWELCOMECONTROLLER_H
#define _TTC13SLEEPHEALTHUI27SLEEPTABLEWELCOMECONTROLLER_H

@class OBTableWelcomeController;



@interface _TtC13SleepHealthUI27SleepTableWelcomeController : OBTableWelcomeController {
    ? observerContext;
    ? contentSizeKeyPath;
    ? heightConstraint;
    ? hasSystemMargins;
    ? resizeAnimationDuration;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif