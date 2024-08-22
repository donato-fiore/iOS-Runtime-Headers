// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSTARTCALLACTION_H
#define WFSTARTCALLACTION_H

@class WFHandleSystemIntentAction;



@interface WFStartCallAction : WFHandleSystemIntentAction



-(BOOL)isRunningOniPad;
-(BOOL)shouldOpenAppThroughSiriForIntent:(id)arg0 intentResponse:(id)arg1 ;
-(BOOL)skipsProcessingHiddenParameters;
-(NSInteger)callCapability;
-(NSInteger)preferredCallProvider;
-(id)airplaneModeError;
-(id)appConfigurationRequiredError;
-(id)callingServiceNotAvailableError;
-(id)contactNotSupportedByAppErrorForContacts:(id)arg0 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)errorFromConfirmResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromHandleResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromResolutionResult:(id)arg0 forSlot:(id)arg1 onIntent:(id)arg2 ;
-(id)errorFromStartCallResponse:(id)arg0 intent:(id)arg1 ;
-(id)generatedIntentWithIdentifier:(id)arg0 input:(id)arg1 processedParameters:(id)arg2 error:(*id)arg3 ;
-(id)icon;
-(id)intentDescriptorFromParameterState;
-(id)localizedCallServiceName;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)supportedIdentifiers;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;


@end


#endif