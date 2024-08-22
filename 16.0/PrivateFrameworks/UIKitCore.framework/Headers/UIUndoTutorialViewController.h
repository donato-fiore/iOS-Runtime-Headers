// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIUNDOTUTORIALVIEWCONTROLLER_H
#define UIUNDOTUTORIALVIEWCONTROLLER_H



#import "UIViewController.h"
#import "UIUndoTutorialView.h"

@interface UIUndoTutorialViewController : UIViewController

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) UIUndoTutorialView *tutorialView; // ivar: _tutorialView


-(BOOL)_canShowWhileLocked;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)doneButtonPressed;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif