// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIMPORTTOLIGHTROOMACTION_H
#define WFIMPORTTOLIGHTROOMACTION_H

@class WFHandleCustomIntentAction;



@interface WFImportToLightroomAction : WFHandleCustomIntentAction



-(BOOL)populatesInputFromInputParameter;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)generatedIntentWithIdentifier:(id)arg0 input:(id)arg1 processedParameters:(id)arg2 error:(*id)arg3 ;
-(void)initializeParameters;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;


@end


#endif