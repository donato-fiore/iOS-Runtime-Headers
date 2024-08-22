// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICPROGRESSDEBUGVIEWCONTROLLER_H
#define SUICPROGRESSDEBUGVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString, NSProgress;
@protocol SUICProgressIndicatorViewControllerDataSource;


#import "SUICProgressIndicatorViewController.h"
#import "SUICProgressStateMachine.h"

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource>

 {
    SUICProgressIndicatorViewController *_indicatorViewController;
    UIButton *_eventGeneratorButton;
    SUICProgressStateMachine *_stateMachine;
    NSUInteger _testEventLoopCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg0 ;
-(void)_eventGeneratorButtonTouchedUpInside:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif