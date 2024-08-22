// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSAVEDROPBOXFILEACTIONUIKITUSERINTERFACE_H
#define WFSAVEDROPBOXFILEACTIONUIKITUSERINTERFACE_H

@class WFActionUserInterface, NSString;
@protocol WFSaveDropboxFileActionUserInterface, WFFileStorageServiceOperation;



@interface WFSaveDropboxFileActionUIKitUserInterface : WFActionUserInterface <WFSaveDropboxFileActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<WFFileStorageServiceOperation> *saveOperation; // ivar: _saveOperation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(id)selectedStorageServiceForName:(id)arg0 ;
-(void)cancel;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)showWithServiceName:(id)arg0 input:(id)arg1 managedLevel:(NSUInteger)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;


@end


#endif