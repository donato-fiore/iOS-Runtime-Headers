// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTARTTIMERACTION_H
#define WFSTARTTIMERACTION_H

@class WFHandleSystemIntentAction;



@interface WFStartTimerAction : WFHandleSystemIntentAction



-(BOOL)prefersActionAttribution;
-(BOOL)skipsProcessingHiddenParameters;
-(BOOL)takeSessionKitAssertionIfNeededWithError:(*id)arg0 ;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;


@end


#endif