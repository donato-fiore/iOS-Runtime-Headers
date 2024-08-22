// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGETDROPBOXFILEACTION_H
#define WFGETDROPBOXFILEACTION_H



#import "WFStorageServiceAction.h"

@interface WFGetDropboxFileAction : WFStorageServiceAction



+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)isProgressIndeterminate;
-(BOOL)multipleSelectionEnabled;
-(BOOL)outputsMultipleItems;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)filePathKey;
-(id)filenamePlaceholderText;
-(id)showPickerKey;
-(id)storageService;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 storageService:(id)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg0 path:(id)arg1 input:(id)arg2 storageService:(id)arg3 ;
-(void)updateVisibleParameters;


@end


#endif