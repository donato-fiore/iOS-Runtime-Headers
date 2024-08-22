// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEDETECTORMETADATA_H
#define PLDUPLICATEDETECTORMETADATA_H

@class NSArray, NSSet, NSString;
@protocol PLDuplicateDetector;

#import <Foundation/Foundation.h>


@interface PLDuplicateDetectorMetadata : NSObject <PLDuplicateDetector>

 {
    NSArray *_sourceAssetOIDs;
    NSSet *_combinedLimitedSelectionIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_postProcessDuplicateWithPhotoLibrary:(id)arg0 resultContainer:(id)arg1 error:(*id)arg2 ;
-(id)_combinedIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)arg0 ;
-(id)_fingerprintIsValidPredicate;
-(id)_fingerprintRequestWithPhotoLibrary:(id)arg0 ;
-(id)_fullSizePreviewFingerprintRequestWithPhotoLibrary:(id)arg0 ;
-(id)_fullSizePreviewPredicateWithPhotoLibrary:(id)arg0 ;
-(id)_fullSizePropertiesToFetch;
-(id)_fullsizeFingerprintIsValidFullSizePredicate;
-(id)_fullsizeIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)arg0 ;
-(id)_generateDuplicateContainerFromResults:(id)arg0 fullsizeFingerprintResults:(id)arg1 ;
-(id)_limitedSelectionFullSizePredicateWithPhotoLibrary:(id)arg0 ;
-(id)_limitedSelectionPredicateWithPhotoLibrary:(id)arg0 ;
-(id)_originalsIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)arg0 ;
-(id)_postProcessFetchMetadataWithPhotoLibrary:(id)arg0 resultContainer:(id)arg1 error:(*id)arg2 ;
-(id)_postProcessingRequestWithDuplicateAssetOIDs:(id)arg0 pathManager:(id)arg1 ;
-(id)_predicateWithPhotoLibrary:(id)arg0 ;
-(id)_propertiesToFetch;
-(id)detectDuplicatesWithPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initWithSourceAssetOIDs:(id)arg0 ;
-(void)_addFingerprint:(id)arg0 oid:(id)arg1 map:(id)arg2 ;
-(void)_buildAdjustedFingerprintMapWithPrimaryStoreFullsizeFingerprintResults:(id)arg0 mutableOIDFingerprintMap:(id)arg1 filterOnCPLResourceType:(NSUInteger)arg2 ;


@end


#endif