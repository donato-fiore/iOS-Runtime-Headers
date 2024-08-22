// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDAILYROUTINESHORTCUTSETUPTRIGGERVIEWCONTROLLER_H
#define WFDAILYROUTINESHORTCUTSETUPTRIGGERVIEWCONTROLLER_H

@class OBWelcomeController, WFDailyRoutineShortcutSetupTriggerBuilder;
@protocol WFDailyRoutineShortcutSetupTriggerViewControllerDelegate;



@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController

@property (weak, nonatomic) NSObject<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupTriggerBuilder *trigger; // ivar: _trigger


-(id)initWithTrigger:(id)arg0 ;
-(void)didSelectAddTriggerButton;
-(void)didSelectSkipButton;


@end


#endif