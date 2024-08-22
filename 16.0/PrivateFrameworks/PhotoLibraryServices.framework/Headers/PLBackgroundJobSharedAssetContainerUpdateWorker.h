// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBSHAREDASSETCONTAINERUPDATEWORKER_H
#define PLBACKGROUNDJOBSHAREDASSETCONTAINERUPDATEWORKER_H



#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobSharedAssetContainerUpdateWorker : PLBackgroundJobWorker



+(BOOL)_isTokenInvalidError:(id)arg0 ;
+(BOOL)_updateSharingCompositionForMemoriesContainingAssetIDs:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(BOOL)_updateSharingCompositionForSuggestionsContainingAssetIDs:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(BOOL)performWorkOnAllItemsInContext:(id)arg0 withError:(*id)arg1 ;
+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(id)_lastProcessingTokenFromLibrary:(id)arg0 ;
+(id)_memoriesContainingAssetIds:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)_suggestionsContainingAssetIds:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)_transactionIteratorSinceTokenIfValid:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
+(void)_setLastProcessingToken:(id)arg0 library:(id)arg1 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;


@end


#endif