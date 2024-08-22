// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNVOICETRIGGERDETECTOR_H
#define SNVOICETRIGGERDETECTOR_H

@class MLModel, NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>

#import "SNDetectVoiceTriggerRequest.h"
#import "SNProcessVoiceTriggerModelOutput.h"
#import "SNFilterVoiceTriggerResults.h"

@interface SNVoiceTriggerDetector : NSObject <SNAnalyzing>

 {
    MLModel *_model;
    shared_ptr<DSPGraph::Graph> _graph;
    SNDetectVoiceTriggerRequest *_request;
    SNProcessVoiceTriggerModelOutput *_modelOutputFilter;
    SNFilterVoiceTriggerResults *_overlapFilter;
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


@end


#endif