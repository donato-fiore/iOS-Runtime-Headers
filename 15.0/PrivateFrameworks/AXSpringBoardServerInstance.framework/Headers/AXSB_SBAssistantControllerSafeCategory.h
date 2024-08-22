// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSB_SBASSISTANTCONTROLLERSAFECATEGORY_H
#define AXSB_SBASSISTANTCONTROLLERSAFECATEGORY_H

@class super;



@interface AXSB_SBAssistantControllerSafeCategory : super



+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg0 ;
-(BOOL)_axSiriDismissalIsForAssistiveTouch;
-(id)_axSiriDismissalOptions;
-(void)_axCancelDismissSiriForAssistiveTouch;
-(void)_axDismissSiriForAssistiveTouch;
-(void)_axScheduleDismissSiriForAssistiveTouch;
-(void)_axSetSiriDismissalIsForAssistiveTouch:(BOOL)arg0 ;
-(void)_axSetSiriDismissalOptions:(id)arg0 ;
-(void)dismissAssistantViewIfNecessaryWithDismissalOptions:(id)arg0 ;


@end


#endif