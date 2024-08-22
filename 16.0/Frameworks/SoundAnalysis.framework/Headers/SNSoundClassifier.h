// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSOUNDCLASSIFIER_H
#define SNSOUNDCLASSIFIER_H

@class NSSet, NSString;
@protocol SNAnalyzing, SNMLModel;

#import <Foundation/Foundation.h>


@interface SNSoundClassifier : NSObject <SNAnalyzing>

 {
    id<SNMLModel> *_model;
    shared_ptr<DSPGraph::Graph> _graph;
    unsigned int _modelBlockSize;
    int _resultsToDiscardCount;
    NSSet *_classLabelsDenylist;
    CGFloat _overlapFactor;
    NSString *_classifierIdentifier;
    ? _windowDuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void resultsBox;
@property (readonly) Class superclass;


+(id)new;
-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)resultsFromBox:(*void)arg0 renderedWithFrameCount:(int)arg1 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;


@end


#endif