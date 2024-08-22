// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMEDIAANALYSISMOVIEHIGHLIGHTSPRODUCER_H
#define PXSTORYMEDIAANALYSISMOVIEHIGHLIGHTSPRODUCER_H

@protocol PXStoryMovieHighlightsProducer, OS_dispatch_queue, OS_os_log, PXStoryMediaAnalyzer;

#import <Foundation/Foundation.h>


@interface PXStoryMediaAnalysisMovieHighlightsProducer : NSObject <PXStoryMovieHighlightsProducer>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_results_queue;
    NSObject<OS_os_log> *_log;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSObject<PXStoryMediaAnalyzer> *mediaAnalyzer; // ivar: _mediaAnalyzer


-(id)_requestMovieCurationForAssets:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)requestMovieHighlightsForAssets:(id)arg0 partialCollection:(id)arg1 options:(NSUInteger)arg2 resultHandler:(id)arg3 ;
-(void)_requestMovieHighlightsForAssets:(id)arg0 partialCollection:(id)arg1 options:(NSUInteger)arg2 resultHandler:(id)arg3 ;
-(void)waitUntilScheduled;


@end


#endif