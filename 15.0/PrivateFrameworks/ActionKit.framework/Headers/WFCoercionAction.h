// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOERCIONACTION_H
#define WFCOERCIONACTION_H

@class WFAction;



@interface WFCoercionAction : WFAction



-(BOOL)shouldBeSuggestedAfterAction:(id)arg0 inWorkflow:(id)arg1 ;
-(Class)coercionItemClass;
-(id)outputContentClasses;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif