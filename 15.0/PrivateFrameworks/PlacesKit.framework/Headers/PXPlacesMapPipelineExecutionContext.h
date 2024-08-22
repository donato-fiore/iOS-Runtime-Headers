// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPPIPELINEEXECUTIONCONTEXT_H
#define PXPLACESMAPPIPELINEEXECUTIONCONTEXT_H

@class NSDate, NSMutableSet, NSMutableDictionary, NSArray, NSMapTable;

#import <Foundation/Foundation.h>

#import "PXPlacesMapViewPort.h"

@interface PXPlacesMapPipelineExecutionContext : NSObject {
    NSDate *_start;
    NSMutableSet *_dataSources;
    NSMutableDictionary *_timerStartDataSource;
    NSMutableDictionary *_timerStopDataSource;
    NSMutableDictionary *_timerStartPipeline;
    NSMutableDictionary *_timerStopPipeline;
    NSDate *_timerStartPlanResultsExecution;
    NSDate *_timerStopPlanResultsExecution;
    id *_completionHandler;
    BOOL _stopped;
    NSArray *_callstack;
}


@property (readonly) NSMapTable *changesForDataSources; // ivar: _changesForDataSources
@property (readonly) NSArray *dataSources;
@property (readonly) CGFloat duration; // ivar: _duration
@property (retain) NSArray *updatePlanResults; // ivar: _updatePlanResults
@property (retain) PXPlacesMapViewPort *viewPort; // ivar: _viewPort


-(id)initWithViewPort:(id)arg0 completionHandler:(id)arg1 ;
-(void)addDataSources:(id)arg0 changesForDataSources:(id)arg1 ;
-(void)start;
-(void)startTimerForDataSource:(id)arg0 ;
-(void)startTimerForExecutionOfPlanResults;
-(void)startTimerForPipeline:(id)arg0 ;
-(void)stop;
-(void)stopTimerForDataSource:(id)arg0 ;
-(void)stopTimerForExecutionOfPlanResults;
-(void)stopTimerForPipeline:(id)arg0 ;


@end


#endif