// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV10WORKFLOWUI32CONFIGURESUGGESTEDAUTOMATIONVIEW11COORDINATOR_H
#define _TTCV10WORKFLOWUI32CONFIGURESUGGESTEDAUTOMATIONVIEW11COORDINATOR_H

@protocol VCUIShortcutViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV10WorkflowUI32ConfigureSuggestedAutomationView11Coordinator : NSObject <VCUIShortcutViewControllerDelegate>

 {
    ? userInterface;
    ? rootNavigator;
    ? completion;
}




-(id)init;
-(void)shortcutViewController:(id)arg0 didCreateShortcut:(id)arg1 ;
-(void)shortcutViewController:(id)arg0 didCreateShortcut:(id)arg1 withTrigger:(id)arg2 ;
-(void)shortcutViewControllerDidCancel:(id)arg0 ;


@end


#endif