// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDUPLICATEDETECTOREXACTPIXEL_H
#define PLDUPLICATEDETECTOREXACTPIXEL_H

@class NSArray, NSMutableSet, NSString;
@protocol PLDuplicateDetector;

#import <Foundation/Foundation.h>


@interface PLDuplicateDetectorExactPixel : NSObject <PLDuplicateDetector>

 {
    NSArray *_sourceAssetOIDs;
    NSMutableSet *_processedOIDs;
    NSMutableSet *_processedHashes;
    BOOL _enableEXIFDataAccess;
    BOOL _enableScreenshotProcessing;
    BOOL _disablePostProcessing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_postProcessDuplicateWithPhotoLibrary:(id)arg0 resultContainer:(id)arg1 error:(*id)arg2 ;
-(id)_excludedSceneprintsPredicateWithPhotoLibrary:(id)arg0 ;
-(id)_generateDuplicateContainerFromProcessedHashOIDMap:(id)arg0 oidHashMap:(id)arg1 ;
-(id)_generateDuplicateContainerFromResults:(id)arg0 ;
-(id)_hashesFromLimitedSelectionWithPhotoLibrary:(id)arg0 ;
-(id)_limitedSelectionPredicateWithPhotoLibrary:(id)arg0 ;
-(id)_postProcessFetchMetadataWithPhotoLibrary:(id)arg0 resultContainer:(id)arg1 error:(*id)arg2 ;
-(id)_postProcessSortOIDs:(id)arg0 oidMetadataMap:(id)arg1 sortKey:(id)arg2 ;
-(id)_postProcessingRequestAssetsFromDuplicateAssetOIDs:(id)arg0 ;
-(id)_postProcessingRequestWithDuplicateAssetOIDs:(id)arg0 ;
-(id)_predicateWithPhotoLibrary:(id)arg0 ;
-(id)_propertiesToFetch;
-(id)_sceneprintRequestWithPhotoLibrary:(id)arg0 ;
-(id)detectDuplicatesWithPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initWithSourceAssetOIDs:(id)arg0 ;
-(void)_addKey:(id)arg0 value:(id)arg1 map:(id)arg2 ;
-(void)_postProcessDuplicateSubGroupWithResult:(id)arg0 metatadataMap:(id)arg1 metadataKey:(id)arg2 subGroupSplitDecisionBlock:(id)arg3 ;
-(void)_updateDuplicateAssetOIDResults:(id)arg0 forAssetOID:(id)arg1 relatedProcessedHashOIDMap:(id)arg2 oidHashMap:(id)arg3 ;
-(void)_updateDuplicateAssetOIDResults:(id)arg0 forHash:(id)arg1 relatedProcessedHashOIDMap:(id)arg2 oidHashMap:(id)arg3 ;


@end


#endif