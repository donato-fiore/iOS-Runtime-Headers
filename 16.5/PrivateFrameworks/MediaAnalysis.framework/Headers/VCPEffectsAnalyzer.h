// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPEFFECTSANALYZER_H
#define VCPEFFECTSANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPEffectsAnalyzer : NSObject {
    BOOL _hasFaceOrPet;
}




+(BOOL)isAutoLoopFramworkAvailable;
+(BOOL)usePHAssetScene;
+(id)gatingResultKeyToIndex;
+(id)gatingTypeKeys;
+(id)getResultIndex:(id)arg0 ;
-(NSUInteger)generateStatsToBeCollectedFrom:(id)arg0 ;
-(id)initWithAnalysisResults:(id)arg0 ;
-(id)initWithFlagHasFaceOrPet:(BOOL)arg0 ;
-(id)matchingNodeForSceneClassification:(id)arg0 inSceneNames:(id)arg1 ;
-(id)performanSceneClassificationOfImageFileAtURL:(id)arg0 ;
// -(int)analyzeAsset:(id)arg0 onDemand:(BOOL)arg1 cancel:(id)arg2 statsFlags:(unk)arg3 results:(*NSUInteger)arg4  ;
-(int)enumerateMatchingScenesOfAsset:(id)arg0 forLongExposureUsingBlock:(id)arg1 ;
-(void)reportLivePhotoEffectAnalysisResults:(id)arg0 ;


@end


#endif