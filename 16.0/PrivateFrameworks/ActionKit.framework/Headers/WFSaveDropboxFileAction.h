// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSAVEDROPBOXFILEACTION_H
#define WFSAVEDROPBOXFILEACTION_H

@protocol WFSaveDropboxFileActionUserInterface, WFFileStorageServiceOperation;


#import "WFStorageServiceAction.h"

@interface WFSaveDropboxFileAction : WFStorageServiceAction

@property (retain, nonatomic) NSObject<WFSaveDropboxFileActionUserInterface> *actionUserInterface; // ivar: _actionUserInterface
@property (retain, nonatomic) NSObject<WFFileStorageServiceOperation> *saveOperation; // ivar: _saveOperation


+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)inputsMultipleItems;
-(BOOL)isProgressIndeterminate;
-(BOOL)outputsMultipleItems;
-(id)filePathKey;
-(id)showPickerKey;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)storageService;
-(void)cancel;
-(void)finishRunningWithError:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg0 path:(id)arg1 input:(id)arg2 storageService:(id)arg3 ;


@end


#endif