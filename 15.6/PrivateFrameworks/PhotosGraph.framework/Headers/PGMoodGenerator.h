// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMOODGENERATOR_H
#define PGMOODGENERATOR_H

@class PHAssetCollection, PHPhotoLibrary, NSArray;

#import <Foundation/Foundation.h>

#import "PGMoodVector.h"
#import "PGEnrichedMemory.h"
#import "PGMoodGeneratorOptions.h"

@interface PGMoodGenerator : NSObject {
    PHAssetCollection *_assetCollection;
    PHPhotoLibrary *_photoLibrary;
    NSUInteger _suggestedMood;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    PGEnrichedMemory *_enrichedMemory;
    NSArray *_extendedCuratedAssets;
}


@property CGFloat negativeThreshold; // ivar: _negativeThreshold
@property (retain) PGMoodGeneratorOptions *options; // ivar: _options
@property CGFloat positiveThreshold; // ivar: _positiveThreshold


-(NSUInteger)forbiddenMoodsWithGraph:(id)arg0 ;
-(NSUInteger)recommendedMoodsWithGraph:(id)arg0 ;
-(NSUInteger)suggestedMoodWithGraph:(id)arg0 ;
-(id)_moodSources;
-(id)historyWeightedPositiveMoodVectorWithGraph:(id)arg0 ;
-(id)initWithAssetCollection:(id)arg0 photoLibrary:(id)arg1 options:(id)arg2 ;
-(id)initWithEnrichedMemory:(id)arg0 photoLibrary:(id)arg1 options:(id)arg2 ;
-(id)negativeMoodVectorWithGraph:(id)arg0 ;
-(id)positiveMoodVectorWithGraph:(id)arg0 ;
-(void)_processMoodSourcesWithGraph:(id)arg0 ;


@end


#endif