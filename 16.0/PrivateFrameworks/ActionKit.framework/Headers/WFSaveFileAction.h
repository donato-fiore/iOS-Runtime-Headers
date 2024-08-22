// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSAVEFILEACTION_H
#define WFSAVEFILEACTION_H

@protocol WFFileStorageServiceOperation;


#import "WFStorageServiceAction.h"

@interface WFSaveFileAction : WFStorageServiceAction

@property (retain, nonatomic) NSObject<WFFileStorageServiceOperation> *saveOperation; // ivar: _saveOperation


+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)inputsMultipleItems;
-(BOOL)isProgressIndeterminate;
-(BOOL)outputsMultipleItems;
-(BOOL)requiresRemoteExecution;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)filePathKey;
-(id)minimumSupportedClientVersion;
-(id)showPickerKey;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)cancel;
-(void)finishRunningWithError:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 storageService:(id)arg2 subpath:(id)arg3 ;
-(void)runWithStorageService:(id)arg0 directory:(id)arg1 subpath:(id)arg2 input:(id)arg3 ;
-(void)updatePathPrefix;


@end


#endif