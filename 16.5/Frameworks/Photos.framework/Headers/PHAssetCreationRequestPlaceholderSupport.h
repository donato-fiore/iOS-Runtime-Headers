// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETCREATIONREQUESTPLACEHOLDERSUPPORT_H
#define PHASSETCREATIONREQUESTPLACEHOLDERSUPPORT_H

@class PLClientServerTransaction, NSXPCConnection;


#import "PHAssetCreationRequest.h"

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest {
    PLClientServerTransaction *_serverTransaction;
    NSInteger _placeholderCreationMode;
    BOOL _downloadSourceMode_shouldBakeInAdjustments;
    BOOL _downloadSourceMode_shouldFlattenLivePhoto;
    BOOL _downloadSourceMode_shouldCopyLocationData;
}


@property (readonly, weak, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection


-(BOOL)_regenerateResourcesWithLocationDataRemoved:(id)arg0 sourceExternalResources:(id)arg1 photoLibrary:(id)arg2 error:(*id)arg3 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg0 inPhotoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg0 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg0 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(unsigned short)_bundleScopeForPlaceholderAsset;
-(void)_updateManagedAssetAfterResourceDownload:(id)arg0 ;
-(void)changeFailedOnClientWithLibrary:(id)arg0 error:(id)arg1 ;
-(void)changeFailedOnDaemonWithLibrary:(id)arg0 error:(id)arg1 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg0 ;


@end


#endif