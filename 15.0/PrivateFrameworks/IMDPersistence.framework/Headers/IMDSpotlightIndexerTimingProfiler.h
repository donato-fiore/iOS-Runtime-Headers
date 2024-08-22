// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDSPOTLIGHTINDEXERTIMINGPROFILER_H
#define IMDSPOTLIGHTINDEXERTIMINGPROFILER_H

@class NSArray, NSMutableArray, NSMutableSet, IMTimingCollection;

#import <Foundation/Foundation.h>


@interface IMDSpotlightIndexerTimingProfiler : NSObject

@property (retain, nonatomic) NSArray *abortedTimers; // ivar: _abortedTimers
@property (retain, nonatomic) NSMutableArray *runTimers; // ivar: _runTimers
@property (retain, nonatomic) NSMutableSet *runningTimers; // ivar: _runningTimers
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) IMTimingCollection *timingCollection; // ivar: _timingCollection


-(void)abortCurrentTimers;
-(void)logResults:(BOOL)arg0 ;
-(void)startMainTimerWithExpectedTimeoutInterval:(CGFloat)arg0 ;
-(void)startTimingForKey:(id)arg0 ;
-(void)startTimingForKey:(id)arg0 iteration:(NSInteger)arg1 ;
-(void)stopMainTimerAndLogAfterFailure;
-(void)stopMainTimerAndLogAfterSuccess;
-(void)stopProfilingAfterIndexersBailed;
-(void)stopTimingForKey:(id)arg0 ;
-(void)stopTimingForKey:(id)arg0 iteration:(NSInteger)arg1 ;


@end


#endif