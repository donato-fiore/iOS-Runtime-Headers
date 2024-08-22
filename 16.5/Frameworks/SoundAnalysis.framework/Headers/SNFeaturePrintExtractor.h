// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFEATUREPRINTEXTRACTOR_H
#define SNFEATUREPRINTEXTRACTOR_H

@class NSString;
@protocol SNAnalyzing, SNFeaturePrintExtractorProtocol;

#import <Foundation/Foundation.h>


@interface SNFeaturePrintExtractor : NSObject <SNAnalyzing>

 {
    shared_ptr<DSPGraph::Graph> _graph;
    id<SNFeaturePrintExtractorProtocol> *_featureExtractor;
    NSString *_outputFeatureName;
    ? _windowDuration;
    int _resultsToDiscardCount;
    float _overlapFactor;
    NSInteger _featurePrintType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;


@end


#endif