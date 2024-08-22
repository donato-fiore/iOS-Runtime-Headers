// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCONTEXT_H
#define PVCONTEXT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PVContext : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion; // ivar: _faceAlgorithmUmbrellaVersion
@property (nonatomic) float faceClusteringAgeThreshold; // ivar: _faceClusteringAgeThreshold
@property (nonatomic) BOOL faceClusteringDisabled; // ivar: _faceClusteringDisabled
@property (nonatomic) float faceClusteringJunkThreshold; // ivar: _faceClusteringJunkThreshold
@property (nonatomic) float faceClusteringThreshold; // ivar: _faceClusteringThreshold
@property (nonatomic) float faceMergeFaceprintDistanceThreshold; // ivar: _faceMergeFaceprintDistanceThreshold
@property (nonatomic) float facePrimarySuggestionsThreshold; // ivar: _facePrimarySuggestionsThreshold
@property (nonatomic) NSUInteger maxFaceCountForClustering; // ivar: _maxFaceCountForClustering
@property (nonatomic) NSUInteger minFaceCountToTriggerClustering; // ivar: _minFaceCountToTriggerClustering
@property (nonatomic) NSUInteger minimumFaceGroupSizeForCreatingMergeCandidates; // ivar: _minimumFaceGroupSizeForCreatingMergeCandidates
@property (nonatomic) NSUInteger minimumSuggestionSize; // ivar: _minimumSuggestionSize
@property (nonatomic) BOOL personBuilderMergeCandidatesDisabled; // ivar: _personBuilderMergeCandidatesDisabled
@property (nonatomic) BOOL personBuildingDisabled; // ivar: _personBuildingDisabled
@property (nonatomic) BOOL quarantineTwinsOnAssetEnabled; // ivar: _quarantineTwinsOnAssetEnabled
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion; // ivar: _sceneAlgorithmUmbrellaVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif