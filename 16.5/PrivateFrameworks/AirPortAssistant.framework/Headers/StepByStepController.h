// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STEPBYSTEPCONTROLLER_H
#define STEPBYSTEPCONTROLLER_H

@class NSDictionary;
@protocol AutoGuessSetup, StepByStepUIDelegateResult, StepByStepUIDelegate;


#import "AssistantCallbackController.h"

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult>

 {
    *StepByStepContext _stepByStepContext;
}


@property NSObject<StepByStepUIDelegate> *delegate; // ivar: _delegate
@property (retain) NSDictionary *restoreRecommendation; // ivar: _restoreRecommendation


+(id)stepByStepController;
-(id)init;
-(int)cancelStepByStep;
-(int)resume;
-(int)setupFromAutoguessRecommendation:(id)arg0 withOptions:(id)arg1 ;
-(int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg0 ;
-(void)dealloc;
-(void)stepByStepNextStepResult:(int)arg0 withOptions:(id)arg1 ;


@end


#endif