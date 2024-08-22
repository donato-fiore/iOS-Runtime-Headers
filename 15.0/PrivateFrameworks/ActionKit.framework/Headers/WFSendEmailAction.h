// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSENDEMAILACTION_H
#define WFSENDEMAILACTION_H

@class WFHandleCustomIntentAction;



@interface WFSendEmailAction : WFHandleCustomIntentAction

@property (nonatomic, getter=isContentManaged) BOOL contentManaged; // ivar: _contentManaged


+(id)userInterfaceProtocol;
-(BOOL)checkManagementLevel:(id)arg0 error:(*id)arg1 ;
-(BOOL)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg0 ;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)requiresRemoteExecution;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg0 forParameter:(id)arg1 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)generatedAccessResourceNode;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id)requiredResourcesForIntentAvailableResource;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)showsWhenRunIfApplicable;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)generateBodyFromCollection:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateEmailFromInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateFilesFromCollection:(id)arg0 completion:(id)arg1 ;
-(void)getRecipientsFromParameterValue:(id)arg0 completion:(id)arg1 ;
-(void)handleWatchResponse:(id)arg0 ;
-(void)prepareEmailContentFromInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif