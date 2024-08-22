// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICPROGRESSINDICATORVIEWCONTROLLER_H
#define SUICPROGRESSINDICATORVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SUICProgressStateMachineObserving, SUICProgressIndicatorViewControllerDataSource;


#import "SUICProgressIndicatorView.h"

@interface SUICProgressIndicatorViewController : UIViewController <SUICProgressStateMachineObserving>



@property (weak, nonatomic) NSObject<SUICProgressIndicatorViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_progressIndicatorView, setter=_setProgressIndicatorView:) SUICProgressIndicatorView *progressIndicatorView; // ivar: _progressIndicatorView
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldAcceptEventsFromStateMachine:(id)arg0 ;
-(id)_stateMachine;
-(void)loadView;
-(void)progressStateMachine:(id)arg0 didTransitionToState:(NSUInteger)arg1 fromState:(NSUInteger)arg2 forEvent:(NSUInteger)arg3 ;
-(void)progressStateMachine:(id)arg0 ignoredEvent:(NSUInteger)arg1 ;


@end


#endif