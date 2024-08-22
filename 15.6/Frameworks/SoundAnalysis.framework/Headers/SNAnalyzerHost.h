// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNANALYZERHOST_H
#define SNANALYZERHOST_H

@class NSString;
@protocol SNProcessing, SNAnalyzing, SNTimeConverting;

#import <Foundation/Foundation.h>


@interface SNAnalyzerHost : NSObject <SNProcessing>

 {
    id<SNAnalyzing> *_analyzer;
    id<SNTimeConverting> *_timeConverter;
    id *_resultsHandler;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger requestState; // ivar: _requestState
@property (readonly, nonatomic) id *sharedProcessorConfiguration;
@property (readonly) Class superclass;


+(struct ? )convertTime:(struct ? )arg0 fromBox:(*void)arg1 usingConverter:(id)arg2 ;
+(struct ? )convertTimeRange:(struct ? )arg0 fromBox:(*void)arg1 usingConverter:(id)arg2 ;
-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)clientResultsFromProcessorResults:(id)arg0 ;
// -(id)initWithAnalyzer:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 timeConverter:(id)arg3  ;
-(void)handleAnalyzerCompletion;
-(void)handleAnalyzerError:(id)arg0 ;
-(void)handleDSPGraphPostRenderCallbackFromBox:(*void)arg0 numFrames:(int)arg1 ;
-(void)primeAnalyzerGraph;
-(void)requestDidReturnError:(id)arg0 ;


@end


#endif