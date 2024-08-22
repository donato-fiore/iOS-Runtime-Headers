// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRACEPLAYER_H
#define MNTRACEPLAYER_H

@class NSHashTable, NSString;
@protocol MNTracePlayerSchedulerDelegate, MNTimeProvider;

#import <Foundation/Foundation.h>

#import "MNTracePlayerScheduler.h"
#import "MNTracePlayerTimelineStream.h"
#import "MNLocation.h"
#import "MNTracePlayerETAUpdater.h"
#import "MNSessionUpdateManager.h"
#import "MNTrace.h"

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider>

 {
    CGFloat _traceStartTimestamp;
    NSHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    MNTracePlayerTimelineStream *_directionsStream;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
}


@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL forceDirectionsResponsesFromTrace; // ivar: _forceDirectionsResponsesFromTrace
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPaused; // ivar: _isPaused
@property (readonly, nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (readonly, nonatomic) CGFloat position;
@property (readonly, nonatomic) MNSessionUpdateManager *sessionUpdater;
@property (nonatomic) BOOL shouldPlayETARequests; // ivar: _shouldPlayETARequests
@property (nonatomic) CGFloat speedMultiplier; // ivar: _speedMultiplier
@property (readonly) Class superclass;
@property (readonly, nonatomic) MNTrace *trace; // ivar: _trace


// -(BOOL)requestDirectionsNearTimestamp:(CGFloat)arg0 withHandler:(id)arg1 errorHandler:(unk)arg2  ;
// -(BOOL)requestDirectionsWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(CGFloat)_responseTimeForRequestAtIndex:(NSUInteger)arg0 ;
-(id)_locationWithCurrentDate:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 outError:(*id)arg1 ;
-(id)initWithTrace:(id)arg0 ;
-(void)_createTimelineStreams;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)jumpToBookmarkAtIndex:(NSUInteger)arg0 ;
-(void)jumpToLocationAtIndex:(NSUInteger)arg0 ;
-(void)jumpToTime:(CGFloat)arg0 ;
-(void)pause;
-(void)removeObserver:(id)arg0 ;
-(void)resume;
-(void)skipByTimeInterval:(CGFloat)arg0 ;
-(void)start;
-(void)startAtLocationIndex:(NSUInteger)arg0 ;
-(void)stop;
-(void)tracePlayerScheduler:(id)arg0 didUpdatePosition:(CGFloat)arg1 ;


@end


#endif