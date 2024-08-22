// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    NSInteger _requestState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)adaptToSystemConfiguration:(id)arg0 error:(*id)arg1 ;


@end


#endif