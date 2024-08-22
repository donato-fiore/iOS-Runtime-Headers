// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSOUNDCLASSIFIER_H
#define SNSOUNDCLASSIFIER_H

@class MLModel, NSArray, NSString;
@protocol SNAnalyzing;

#import <Foundation/Foundation.h>


@interface SNSoundClassifier : NSObject <SNAnalyzing>

 {
    MLModel *_model;
    shared_ptr<DSPGraph::Graph> _graph;
    unsigned int _modelBlockSize;
    int _resultsToDiscardCount;
    NSArray *_feedbackConnections;
    NSArray *_classLabelsDenylist;
}


@property (readonly) NSString *classifierIdentifier; // ivar: _classifierIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat overlapFactor; // ivar: _overlapFactor
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;
@property (readonly) ? windowDuration; // ivar: _windowDuration


+(id)new;
+(void)completeTimingInfoInResult:(id)arg0 usingBox:(*void)arg1 modelBlockSize:(unsigned int)arg2 ;
-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithMLModel:(id)arg0 overlapFactor:(CGFloat)arg1 windowDuration:(struct ? )arg2 classifierIdentifier:(id)arg3 error:(*id)arg4 ;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;


@end


#endif