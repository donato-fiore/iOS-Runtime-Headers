// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNDETECTORHEAD_H
#define SNDETECTORHEAD_H

@class NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>

#import "SNDetectorHeadConfiguration.h"

@interface SNDetectorHead : NSObject <SNAnalyzing>

 {
    SNDetectorHeadConfiguration *_configuration;
    NSString *_detectorBoxName;
    shared_ptr<DSPGraph::Graph> _graph;
    NSString *_inputFeatureName;
    NSString *_outputConfidenceFeatureName;
    NSString *_outputDetectedFeatureName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


+(void)completeTimingInfoInResult:(id)arg0 windowLengthFrames:(unsigned int)arg1 usingBox:(*void)arg2 ;
-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;


@end


#endif