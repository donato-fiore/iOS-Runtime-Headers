// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFASKFORINPUTACTION_H
#define WFASKFORINPUTACTION_H

@class WFHandleCustomIntentAction, NSString;



@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (readonly, nonatomic) NSString *defaultAnswer;
@property (readonly, nonatomic) BOOL immediatelyActivateWatchDictation;
@property (readonly, nonatomic) NSString *inputType;
@property (readonly, nonatomic) NSString *promptText;


-(id)appResource;
-(id)datePickerModeFromInputType:(id)arg0 ;
-(id)outputContentClasses;
-(void)finishRunningWithDate:(id)arg0 ;
-(void)finishRunningWithResultText:(id)arg0 ;
-(void)getOutputFromIntentResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif