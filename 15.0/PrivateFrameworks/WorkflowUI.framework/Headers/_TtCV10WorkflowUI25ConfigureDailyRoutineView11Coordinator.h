// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCV10WORKFLOWUI25CONFIGUREDAILYROUTINEVIEW11COORDINATOR_H
#define _TTCV10WORKFLOWUI25CONFIGUREDAILYROUTINEVIEW11COORDINATOR_H

@protocol WFDailyRoutineShortcutSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV10WorkflowUI25ConfigureDailyRoutineView11Coordinator : NSObject <WFDailyRoutineShortcutSetupViewControllerDelegate>

 {
    ? userInterface;
    ? rootNavigator;
    ? completion;
}




-(id)init;
-(void)dailyRoutineShortcutSetupViewController:(id)arg0 didFinishWithShortcut:(id)arg1 trigger:(id)arg2 ;
-(void)dailyRoutineShortcutSetupViewControllerDidCancel:(id)arg0 ;


@end


#endif