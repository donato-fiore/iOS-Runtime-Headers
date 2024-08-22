// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCCOMPOSITION_H
#define RCCOMPOSITION_H

@class NSURL, NSArray, NSDate, NSString, NSDictionary;
@protocol NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding;

#import <Foundation/Foundation.h>


@interface RCComposition : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding>



@property (nonatomic) CGFloat cachedComposedAVURLDuration; // ivar: _cachedComposedAVURLDuration
@property (nonatomic) BOOL cachedComposedAVURLDurationIsValid; // ivar: _cachedComposedAVURLDurationIsValid
@property (readonly, nonatomic) NSURL *composedAVURL; // ivar: _composedAVURL
@property (readonly, nonatomic) CGFloat composedDuration;
@property (retain, nonatomic) NSArray *composedFragments; // ivar: _composedFragments
@property (retain, nonatomic) NSObject *composedFragmentsMutex; // ivar: _composedFragmentsMutex
@property (readonly, nonatomic) NSURL *composedWaveformURL; // ivar: _composedWaveformURL
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *decomposedFragments; // ivar: _decomposedFragments
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (retain, nonatomic) NSDictionary *musicMemoMetadata; // ivar: _musicMemoMetadata
@property (nonatomic) BOOL readonly; // ivar: _readonly
@property (retain, nonatomic) NSString *savedRecordingUUID; // ivar: _savedRecordingUUID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg0 ;
+(BOOL)_markCompositionAVURLsBeingModified:(id)arg0 ;
+(BOOL)excludeFromBackup:(id)arg0 error:(*id)arg1 ;
+(BOOL)includeInBackup:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateBackupExclusionFlag:(id)arg0 ;
+(id)_compositionFragmentsFolderForComposedAVURL:(id)arg0 ;
+(id)_compositionLoadedFromMetadataURL:(id)arg0 composedAVURL:(id)arg1 savedRecordingUUID:(id)arg2 creationDate:(id)arg3 createIfNeeded:(BOOL)arg4 ;
+(id)_compositionLoadedFromMetadataURL:(id)arg0 savedRecording:(id)arg1 ;
+(id)_compositionMetadataURLForCompositionBundleURL:(id)arg0 ;
+(id)_unitTestingCompositionWithDecomposedFragments:(id)arg0 ;
+(id)compositionBundleURLForComposedAVURL:(id)arg0 ;
+(id)compositionLoadedForComposedAVURL:(id)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)compositionLoadedForEditingSavedRecording:(id)arg0 error:(*id)arg1 ;
+(id)compositionLoadedForSavedRecording:(id)arg0 ;
+(id)compositionLoadedForSavedRecordingUUID:(id)arg0 ;
+(id)compositionLoadedFromCompositionBundleURL:(id)arg0 ;
+(id)compositionMetadataURLForComposedAVURL:(id)arg0 ;
+(id)compositionWithComposedAVURL:(id)arg0 ;
+(id)uriRepresentationForLegacyComposedAVURL:(id)arg0 ;
+(void)deleteFromFilesystem:(id)arg0 ;
-(BOOL)_enumerateFragmentsForInsertion:(id)arg0 ;
-(BOOL)saveMetadataToDefaultLocation;
-(NSUInteger)_fileSizeOfComposedAssetsIncludingRelatedResources:(BOOL)arg0 ;
-(NSUInteger)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(BOOL)arg0 ;
-(NSUInteger)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg0 ;
-(id)_calculateComposedFragments;
-(id)_compositionAsset:(BOOL)arg0 error:(*id)arg1 ;
-(id)_compositionByReplacingDecomposedFragments:(id)arg0 ;
-(id)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(BOOL)arg0 ;
-(id)_initWithComposedAVURL:(id)arg0 savedRecordingUUID:(id)arg1 creationDate:(id)arg2 title:(id)arg3 musicMemoMetadata:(id)arg4 decomposedFragments:(id)arg5 composedFragments:(id)arg6 ;
-(id)_initWithSavedRecording:(id)arg0 decomposedFragments:(id)arg1 composedFragments:(id)arg2 ;
-(id)composedFragmentsIntersectingTimeRange:(struct ? )arg0 ;
-(id)compositionAssetForExport:(*id)arg0 ;
-(id)compositionByAppendingFragment:(id)arg0 ;
-(id)compositionByClippingToComposedTimeRange:(struct ? )arg0 ;
-(id)compositionByDeletingAndSplittingAtComposedTimeRange:(struct ? )arg0 ;
-(id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg0 ;
-(id)compositionByOverdubbingWithFragment:(id)arg0 ;
-(id)compositionByReloadingFromDefaultMetadataLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryPListRepresentation;
-(id)initWithDictionaryPListRepresentation:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newRandomFragmentWithInsertionTimeRangeInComposition:(struct ? )arg0 pathExtension:(id)arg1 ;
-(id)playableAsset:(*id)arg0 ;
-(id)rcs_repairDecomposedFragmentMetadataIfNecessary;
-(void)_eaccess_saveCompositionAndRecordingDuration:(BOOL)arg0 ;
-(void)_loadMusicMemoMetadata;
-(void)deleteFromFilesystem;
-(void)enumerateOrphanedFragmentsWithBlock:(id)arg0 ;
-(void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(BOOL)arg0 composeWaveform:(BOOL)arg1 canGenerateWaveformByProcessingAVURL:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)recacheComposedDuration;


@end


#endif