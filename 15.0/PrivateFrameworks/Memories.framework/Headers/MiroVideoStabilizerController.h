// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROVIDEOSTABILIZERCONTROLLER_H
#define MIROVIDEOSTABILIZERCONTROLLER_H

@protocol _TtP8Memories23VideoStabilizerTestable_;

#import <Foundation/Foundation.h>

#import "Project.h"

@interface MiroVideoStabilizerController : NSObject <_TtP8Memories23VideoStabilizerTestable_>



@property (retain, nonatomic) Project *project; // ivar: _project


+(BOOL)testStabilizationAgainWith:(id)arg0 ;
+(id)stabilizerFactory;
+(void)load;
-(BOOL)canGenerateTestMADRecipesForAssets:(id)arg0 ;
-(BOOL)test_applyHomographyTransformForAssets:(id)arg0 ;
-(BOOL)test_cleanApertureRectBasisMatchesPhotosForAssets:(id)arg0 ;
-(BOOL)test_deNormalizedCropRect;
-(BOOL)test_inputMADRecipeToPVTimedStabilizationConfigForAssets:(id)arg0 ;
-(id)candidateAssetsFromAssetCollection:(id)arg0 ;
-(id)candidateAssetsforStabilizationFromProject;
-(id)computeInertiaCamL1Stabilization;
-(id)fetchAndFormatStabilizationMetadata;
-(id)generateTestMADRecipesForAssets:(id)arg0 ;
-(id)proVideoTimedObjectMapFromRecipes:(id)arg0 ;
-(id)requestMediaAnalysisStabilizationService;
-(id)requestStablizationFromInertiaCam:(id)arg0 assetFPS:(float)arg1 cropFraction:(float)arg2 clip:(id)arg3 ;
-(id)timedMetadataFromFrameInstructions:(id)arg0 withClip:(id)arg1 ;
-(void)writeStabilizationDataMovie:(id)arg0 timedStabConfigs:(id)arg1 completion:(id)arg2 ;
-(void)writeStabilizationDataMoviesToFolder:(id)arg0 assetIDMetadataTimedObjects:(id)arg1 completion:(id)arg2 ;


@end


#endif