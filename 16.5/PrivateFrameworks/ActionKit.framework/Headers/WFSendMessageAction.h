// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSENDMESSAGEACTION_H
#define WFSENDMESSAGEACTION_H

@class WFHandleSystemIntentAction;



@interface WFSendMessageAction : WFHandleSystemIntentAction



+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)canSendAttachmentsWithIntentHandler:(id)arg0 runningInSiri:(BOOL)arg1 showWhenRun:(BOOL)arg2 ;
-(BOOL)isMessagesAppSelected;
-(BOOL)isPhotoOrVideo:(id)arg0 ;
-(BOOL)opensInApp;
-(BOOL)shouldForceHandleInSiri:(id)arg0 ;
-(BOOL)skipsProcessingHiddenParameters;
-(id)actionForAppIdentifier:(id)arg0 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)generatedResourceNodes;
-(id)localizedKeyParameterDisplayName;
-(id)minimumSupportedClientVersion;
-(id)recipientsParameter;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getContentFromInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)getINMessageAttachmentsFromInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)getRecipients:(id)arg0 ;
-(void)handleWatchResponse:(id)arg0 ;
-(void)initializeParameters;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;
-(void)selectedAppDidChange;


@end


#endif