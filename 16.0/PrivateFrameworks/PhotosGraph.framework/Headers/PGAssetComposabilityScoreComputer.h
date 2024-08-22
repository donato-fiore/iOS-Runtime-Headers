// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGASSETCOMPOSABILITYSCORECOMPUTER_H
#define PGASSETCOMPOSABILITYSCORECOMPUTER_H

@class PHPhotoLibrary, CLSSimilarStacker;

#import <Foundation/Foundation.h>


@interface PGAssetComposabilityScoreComputer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    CLSSimilarStacker *_similarStacker;
    BOOL _computeDiptychScores;
    BOOL _computeTriptychScores;
}




-(CGFloat)bestDistanceWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(CGFloat)composabilityScoreWithAssetDistance:(CGFloat)arg0 andDistance:(CGFloat)arg1 andDistance:(CGFloat)arg2 baseSceneprintVersion:(NSUInteger)arg3 ;
-(CGFloat)composabilityScoreWithAssetDistance:(CGFloat)arg0 baseSceneprintVersion:(NSUInteger)arg1 ;
-(CGFloat)identicalSimilarityThresholdWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(CGFloat)semanticalSimilarityThresholdWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(id)composabilityScoresOfAssetsForLocalIdentifiers:(id)arg0 ;
-(id)initForTesting;
-(id)initWithPhotoLibrary:(id)arg0 options:(id)arg1 ;


@end


#endif