// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGASSETCOMPOSABILITYSCORECOMPUTER_H
#define PGASSETCOMPOSABILITYSCORECOMPUTER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface PGAssetComposabilityScoreComputer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    BOOL _computeDiptychScores;
    BOOL _computeTriptychScores;
}


@property (readonly) CGFloat bestDistance;
@property (readonly) CGFloat identicalSimilarityThreshold; // ivar: _identicalSimilarityThreshold
@property (readonly) CGFloat semanticalSimilarityThreshold; // ivar: _semanticalSimilarityThreshold


-(CGFloat)_distanceBetweenSceneprint:(id)arg0 andSceneprint:(id)arg1 ;
-(CGFloat)composabilityScoreWithAssetDistance:(CGFloat)arg0 ;
-(CGFloat)composabilityScoreWithAssetDistance:(CGFloat)arg0 andDistance:(CGFloat)arg1 andDistance:(CGFloat)arg2 ;
-(id)composabilityScoresOfAssetsForLocalIdentifiers:(id)arg0 ;
-(id)initForTesting;
-(id)initWithPhotoLibrary:(id)arg0 options:(id)arg1 ;
-(id)sceneprintWithAsset:(id)arg0 ;


@end


#endif