// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBDUPLICATEDETECTORWORKER_H
#define PLBACKGROUNDJOBDUPLICATEDETECTORWORKER_H

@class NSSet;
@protocol NSCopying;


#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobDuplicateDetectorWorker : PLBackgroundJobWorker {
    NSSet *_additionalAttributesPropertiesToInclude;
    NSSet *_additionalAttributesPropertiesToIncludeForMetadataProcessing;
    NSSet *_managedAssetPropertiesToInclude;
    NSSet *_duplicateAlbumPropertiesToInclude;
}


@property (copy) NSObject<NSCopying> *cancelledWorkItem; // ivar: _cancelledWorkItem


+(BOOL)_isTokenInvalidError:(id)arg0 ;
+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
-(BOOL)_hasCompletedPerceptualProcessingWithLibrary:(id)arg0 ;
-(BOOL)_isFullLibraryWorkItem:(id)arg0 ;
-(BOOL)_processDuplicatesWithLimitedSelection:(id)arg0 requiresFingerprintDedupe:(BOOL)arg1 library:(id)arg2 error:(*id)arg3 continuationHandler:(id)arg4 ;
-(BOOL)_shouldCancelCurrentWorkItem:(id)arg0 ;
-(BOOL)isInterruptible;
-(id)_convertToPLManagedAssetOIDsFromSelectionOIDs:(id)arg0 library:(id)arg1 ;
-(id)_lastDuplicateDetectorProcessingTokenFromLibrary:(id)arg0 ;
-(id)_managedAssetOIDsFromAdditionalAssetAttributesOIDs:(id)arg0 library:(id)arg1 ;
-(id)_managedAssetOIDsFromDuplicateAlbumOIDs:(id)arg0 library:(id)arg1 ;
-(id)_transactionIteratorSinceTokenIfValid:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(id)_validObjectIDFromChange:(id)arg0 entityDescriptionMap:(id)arg1 requiresFingerprintDedupe:(*BOOL)arg2 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)_resetTokenIfRequiredFromLibrary:(id)arg0 ;
-(void)_setLastDuplicateDetectorProcessingToken:(id)arg0 isCompleted:(BOOL)arg1 library:(id)arg2 ;
-(void)_setTokenMarkerWithPrivateData:(id)arg0 value:(BOOL)arg1 wellKnownIdentifier:(NSInteger)arg2 ;
-(void)_setupPropertiesWithLibrary:(id)arg0 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif