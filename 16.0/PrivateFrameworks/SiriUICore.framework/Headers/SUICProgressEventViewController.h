// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICPROGRESSEVENTVIEWCONTROLLER_H
#define SUICPROGRESSEVENTVIEWCONTROLLER_H

@class NSString, NSProgress;
@protocol SUICProgressIndicatorViewControllerDataSource;


#import "SUICProgressIndicatorViewController.h"
#import "SUICProgressStateMachine.h"

@interface SUICProgressEventViewController : SUICProgressIndicatorViewController <SUICProgressIndicatorViewControllerDataSource>

 {
    SUICProgressStateMachine *_stateMachine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg0 ;
-(void)handleEvent:(NSUInteger)arg0 ;


@end


#endif