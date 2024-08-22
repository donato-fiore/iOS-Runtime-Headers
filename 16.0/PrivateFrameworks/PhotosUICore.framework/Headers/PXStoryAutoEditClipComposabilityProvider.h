// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYAUTOEDITCLIPCOMPOSABILITYPROVIDER_H
#define PXSTORYAUTOEDITCLIPCOMPOSABILITYPROVIDER_H

@class NSError;
@protocol PXStoryComposabilityResults, OS_os_log, PXStoryChapterCollection, PXStoryAutoEditComposabilityScorer, PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXStoryAutoEditClipComposabilityProvider : NSObject {
    id<PXStoryComposabilityResults> *_similarityScoreResults;
    id<PXStoryComposabilityResults> *_cropScoreResults;
    id<PXStoryComposabilityResults> *_composabilityResults;
    NSObject<OS_os_log> *_log;
}


@property (readonly, nonatomic) NSObject<PXStoryChapterCollection> *chapterCollection; // ivar: _chapterCollection
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSObject<PXStoryAutoEditComposabilityScorer> *cropQualityScorer; // ivar: _cropQualityScorer
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets; // ivar: _displayAssets
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSObject<PXStoryAutoEditComposabilityScorer> *similarityScorer; // ivar: _similarityScorer


-(id)diagnosticDescription;
-(id)initWithDisplayAssets:(id)arg0 chapterCollection:(id)arg1 ;
-(id)results;
-(struct ? )composabilityScoresForDisplayAssetIndex:(NSUInteger)arg0 ;
-(void)_computeComposabilityScores;


@end


#endif