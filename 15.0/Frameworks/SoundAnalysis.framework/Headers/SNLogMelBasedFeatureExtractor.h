// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNLOGMELBASEDFEATUREEXTRACTOR_H
#define SNLOGMELBASEDFEATUREEXTRACTOR_H

@class NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>

#import "SNSystemConfiguration.h"
#import "SNLogMelBasedFeatureExtractorConfiguration.h"

@interface SNLogMelBasedFeatureExtractor : NSObject <SNAnalyzing>

 {
    shared_ptr<DSPGraph::Graph> _graph;
    SNSystemConfiguration *_systemConfiguration;
    SNLogMelBasedFeatureExtractorConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger featurePrintType; // ivar: _featurePrintType
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;


@end


#endif