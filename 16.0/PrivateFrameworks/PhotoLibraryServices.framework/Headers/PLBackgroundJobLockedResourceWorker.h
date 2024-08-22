// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBLOCKEDRESOURCEWORKER_H
#define PLBACKGROUNDJOBLOCKEDRESOURCEWORKER_H

@class NSMutableDictionary;


#import "PLBackgroundJobWorker.h"
#import "PLThumbnailManager.h"

@interface PLBackgroundJobLockedResourceWorker : PLBackgroundJobWorker {
    PLThumbnailManager *_thumbnailManager;
    NSMutableDictionary *_userInfo;
}




+(BOOL)_isRecoveringFromTransferForAsset:(id)arg0 pathManager:(id)arg1 mainMarkerURLIfExists:(*id)arg2 lockedMarkerURLIfExists:(*id)arg3 ;
+(BOOL)_removeFilesForAsset:(id)arg0 inBundleScope:(unsigned short)arg1 pathManager:(id)arg2 ;
+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(void)_accessFileForAsset:(id)arg0 cplResourceType:(NSUInteger)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 resourceType:(unsigned int)arg4 utiString:(id)arg5 bundleScope:(unsigned short)arg6 pathManager:(id)arg7 mode:(unsigned char)arg8 handler:(id)arg9 ;
+(void)recoverFromInterruptedJobWithLibrary:(id)arg0 ;
-(BOOL)_cloneResource:(id)arg0 asset:(id)arg1 destinationBundleScope:(unsigned short)arg2 pathManager:(id)arg3 sourceURL:(*id)arg4 destinationURL:(*id)arg5 error:(*id)arg6 ;
-(BOOL)_cloneResourceWithCPLResourceType:(NSUInteger)arg0 version:(unsigned int)arg1 recipeID:(unsigned int)arg2 resourceType:(unsigned int)arg3 utiString:(id)arg4 asset:(id)arg5 destinationBundleScope:(unsigned short)arg6 pathManager:(id)arg7 sourceURL:(*id)arg8 destinationURL:(*id)arg9 error:(*id)arg10 ;
-(BOOL)_eraseTableThumbnailAtIndex:(NSInteger)arg0 managedObjectContext:(id)arg1 pathManager:(id)arg2 ;
-(BOOL)isInterruptible;
-(id)initWithLibraryBundle:(id)arg0 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;


@end


#endif