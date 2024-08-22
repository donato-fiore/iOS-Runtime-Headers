// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPENDFILEACTION_H
#define WFAPPENDFILEACTION_H



#import "WFStorageServiceAction.h"

@interface WFAppendFileAction : WFStorageServiceAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)requiresRemoteExecution;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)filenamePlaceholderText;
-(id)minimumSupportedClientVersion;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;
-(void)updatePathPrefix;


@end


#endif