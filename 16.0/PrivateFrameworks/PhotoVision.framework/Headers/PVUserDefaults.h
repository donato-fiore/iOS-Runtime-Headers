// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVUSERDEFAULTS_H
#define PVUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface PVUserDefaults : NSObject



+(BOOL)_boolValueForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
+(BOOL)faceClusteringDisabled;
+(BOOL)faceIDModelAlwaysRebuild;
+(BOOL)isBlacklistDisabled;
+(BOOL)personBuilderMergeCandidatesDisabled;
+(BOOL)personBuildingDisabled;
+(BOOL)quarantineTwinsOnAssetEnabled;
+(BOOL)suggestionsLogEnabled;
+(CGFloat)_doubleValueForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
+(NSUInteger)advancedStatusMergeCandidateLimit;
+(NSUInteger)advancedStatusVerifiedPersonLimit;
+(NSUInteger)faceIDModelRebuildPeriod;
+(NSUInteger)maxFaceCountForClustering;
+(NSUInteger)minFaceCountToTriggerClustering;
+(NSUInteger)minimumFaceGroupSizeForCreatingMergeCandidates;
+(NSUInteger)minimumSuggestionSize;
+(float)_floatValueForKey:(id)arg0 defaultValue:(float)arg1 ;
+(float)faceClusteringAgeThreshold;
+(float)faceClusteringJunkThreshold;
+(float)faceClusteringThreshold;
+(float)faceIDModelClassificationThreshold;
+(float)faceMergeFaceprintDistanceThreshold;
+(float)facePrimarySuggestionsThreshold;
+(int)_intValueForKey:(id)arg0 defaultValue:(int)arg1 ;
+(unsigned int)faceAlgorithmUmbrellaVersion;
+(unsigned int)sceneAlgorithmUmbrellaVersion;


@end


#endif