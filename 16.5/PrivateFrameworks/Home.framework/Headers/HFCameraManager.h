// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERAMANAGER_H
#define HFCAMERAMANAGER_H

@class NSError, HMCameraProfile, NSString, NSDate, NSMapTable;
@protocol HFAccessoryObserver, HFCameraObserver, HFExecutionEnvironmentObserver, NACancelable;

#import <Foundation/Foundation.h>

#import "HFExecutionEnvironment.h"

@interface HFCameraManager : NSObject <HFAccessoryObserver, HFCameraObserver, HFExecutionEnvironmentObserver>



@property (retain, nonatomic) NSError *cachedStreamError; // ivar: _cachedStreamError
@property (readonly, weak, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, nonatomic, getter=isContinuousStreamingEnabled) BOOL continuousStreamingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFExecutionEnvironment *executionEnvironment; // ivar: _executionEnvironment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRegisteredForEvents; // ivar: _isRegisteredForEvents
@property (retain, nonatomic) NSObject<NACancelable> *nextSnapshotEvent; // ivar: _nextSnapshotEvent
@property (readonly, nonatomic, getter=arePeriodicSnapshotsEnabled) BOOL periodicSnapshotsEnabled;
@property (nonatomic) NSUInteger snapshotErrorCount; // ivar: _snapshotErrorCount
@property (retain, nonatomic) NSDate *snapshotErrorDate; // ivar: _snapshotErrorDate
@property (readonly, nonatomic) NSMapTable *snapshotRequesters; // ivar: _snapshotRequesters
@property (readonly, nonatomic) NSMapTable *streamRequesters; // ivar: _streamRequesters
@property (readonly) Class superclass;


-(BOOL)_hasSnapshotRequesters;
-(BOOL)_hasStreamRequesters;
-(CGFloat)_snapshotTimeInterval;
-(id)_nextSnapshotDate;
-(id)initWithCameraProfile:(id)arg0 ;
-(void)_beginContinuousStreaming;
-(void)_beginPeriodicSnapshots;
-(void)_cancelNextSnapshotEvent;
-(void)_dispatchStreamStateUpdate;
-(void)_endContinuousStreaming;
-(void)_endPeriodicSnapshots;
-(void)_scheduleNextSnapshotEventWithPreviousError:(id)arg0 ;
-(void)_startStreaming;
-(void)_stopStreaming;
-(void)_updateEventRegistration;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)beginContinuousStreamingWithRequester:(id)arg0 ;
-(void)beginPeriodicSnapshotsWithRequester:(id)arg0 ;
-(void)cameraSnapshotControl:(id)arg0 didTakeSnapshot:(id)arg1 error:(id)arg2 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg0 ;
-(void)cameraStreamControl:(id)arg0 didStopStreamWithError:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg0 ;
-(void)cameraUserSettingsDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)endContinuousStreamingWithRequester:(id)arg0 ;
-(void)endPeriodicSnapshotsWithRequester:(id)arg0 ;
-(void)executionEnvironmentDidBecomeActive:(id)arg0 ;
-(void)executionEnvironmentDidBecomeOccluded:(id)arg0 ;
-(void)executionEnvironmentDidBecomeVisible:(id)arg0 ;
-(void)executionEnvironmentWillResignActive:(id)arg0 ;


@end


#endif