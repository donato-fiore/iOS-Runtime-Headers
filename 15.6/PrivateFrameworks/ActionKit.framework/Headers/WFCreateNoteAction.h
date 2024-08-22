// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCREATENOTEACTION_H
#define WFCREATENOTEACTION_H

@class WFHandleSystemIntentAction;



@interface WFCreateNoteAction : WFHandleSystemIntentAction



+(id)userInterfaceProtocol;
+(void)getNoteContentFromInput:(id)arg0 includingImages:(BOOL)arg1 actionName:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)inputPassthrough;
-(BOOL)requiresRemoteExecution;
-(BOOL)skipsProcessingHiddenParameters;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)groupParameter;
-(id)inputContentClasses;
-(id)localizedKeyParameterDisplayName;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getOutputFromIntentResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)initializeParameters;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)selectedAppDidChange;
-(void)showUIWithArchivedItems:(id)arg0 isContentManaged:(BOOL)arg1 extensionBundleIdentifier:(id)arg2 ;


@end


#endif