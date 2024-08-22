// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPQUERYRESULTSQUEUE_H
#define SPQUERYRESULTSQUEUE_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPQueryResultsQueue : NSObject

@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) BOOL hasPausedResults;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableDictionary *jobs; // ivar: _jobs
@property (nonatomic) BOOL live; // ivar: _live
@property (nonatomic) NSInteger pausedCount; // ivar: _pausedCount
@property (nonatomic) BOOL shared; // ivar: _shared
@property (nonatomic) *__SIResultQueue siResultsQueue; // ivar: _siResultsQueue
@property (nonatomic) BOOL tracked; // ivar: _tracked


+(id)findResultsQueueWithIdentifier:(id)arg0 ;
+(id)sharedInstanceDispatchQueue:(id)arg0 ;
+(void)startTrackingResultsQueue:(id)arg0 ;
+(void)stopTrackingResultsQueueWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dispatchQueue:(id)arg1 ;
-(void)_processResults;
-(void)_scheduleWakeupForced:(BOOL)arg0 ;
-(void)_startTracking;
-(void)_stopTracking;
-(void)addJob:(id)arg0 ;
-(void)cancel;
-(void)cancelJob:(id)arg0 ;
-(void)dealloc;
-(void)pauseResults;
-(void)resumeResults;
-(void)resumeResultsIfSystemInGoodState;


@end


#endif