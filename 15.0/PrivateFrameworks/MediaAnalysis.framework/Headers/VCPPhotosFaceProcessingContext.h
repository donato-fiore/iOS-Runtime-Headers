// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPHOTOSFACEPROCESSINGCONTEXT_H
#define VCPPHOTOSFACEPROCESSINGCONTEXT_H


#import <Foundation/Foundation.h>


@interface VCPPhotosFaceProcessingContext : NSObject

@property NSUInteger advancedStatusMergeCandidateLimit; // ivar: _advancedStatusMergeCandidateLimit
@property NSUInteger advancedStatusVerifiedPersonLimit; // ivar: _advancedStatusVerifiedPersonLimit
@property BOOL clusterIncludeTorsoOnlyFaces; // ivar: _clusterIncludeTorsoOnlyFaces
@property float faceClusteringAgeThreshold; // ivar: _faceClusteringAgeThreshold
@property BOOL faceClusteringDisabled; // ivar: _faceClusteringDisabled
@property float faceClusteringJunkThreshold; // ivar: _faceClusteringJunkThreshold
@property float faceClusteringThreshold; // ivar: _faceClusteringThreshold
@property float faceMergeFaceprintDistanceThreshold; // ivar: _faceMergeFaceprintDistanceThreshold
@property float facePrimarySuggestionsThreshold; // ivar: _facePrimarySuggestionsThreshold
@property NSUInteger maxFaceCountForClustering; // ivar: _maxFaceCountForClustering
@property NSUInteger minFaceCountToTriggerClustering; // ivar: _minFaceCountToTriggerClustering
@property NSUInteger minimumFaceGroupSizeForCreatingMergeCandidates; // ivar: _minimumFaceGroupSizeForCreatingMergeCandidates
@property NSUInteger minimumSuggestionSize; // ivar: _minimumSuggestionSize
@property BOOL personBuilderMergeCandidatesDisabled; // ivar: _personBuilderMergeCandidatesDisabled
@property BOOL personBuildingDisabled; // ivar: _personBuildingDisabled
@property int processingVersion; // ivar: _processingVersion
@property BOOL quarantineTwinsOnAssetEnabled; // ivar: _quarantineTwinsOnAssetEnabled
@property BOOL suggestionsLogEnabled; // ivar: _suggestionsLogEnabled


+(BOOL)_includeTorsoOnlyFaces;
+(id)contextWithPhotoLibrary:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif