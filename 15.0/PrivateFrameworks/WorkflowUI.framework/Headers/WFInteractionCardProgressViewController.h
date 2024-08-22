// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTERACTIONCARDPROGRESSVIEWCONTROLLER_H
#define WFINTERACTIONCARDPROGRESSVIEWCONTROLLER_H

@class UIViewController, SUICProgressEventViewController;



@interface WFInteractionCardProgressViewController : UIViewController

@property (retain, nonatomic) SUICProgressEventViewController *progressEventViewController; // ivar: _progressEventViewController


-(BOOL)_canShowWhileLocked;
-(void)handleEvent:(NSUInteger)arg0 ;
-(void)loadView;


@end


#endif