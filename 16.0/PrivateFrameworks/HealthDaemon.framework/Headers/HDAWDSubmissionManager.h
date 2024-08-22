// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAWDSUBMISSIONMANAGER_H
#define HDAWDSUBMISSIONMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol HDProfileReadyObserver, HDDiagnosticObject, HDAnalyticsSubmissionCoordinatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HDAWDPeriodicAction.h"
#import "HDProfile.h"

@interface HDAWDSubmissionManager : NSObject <HDProfileReadyObserver, HDDiagnosticObject, HDAnalyticsSubmissionCoordinatorDelegate>

 {
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSMutableArray *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    _HDAWDPeriodicAction *_fitnessDailyAction;
    BOOL _started;
    int _fitnessDailyCollectionEnabledNotifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (copy, nonatomic) id *testHandler; // ivar: _testHandler


-(BOOL)_setInt64:(NSInteger)arg0 keyPrefix:(id)arg1 profile:(id)arg2 date:(id)arg3 error:(*id)arg4 ;
-(BOOL)aggregateDatabaseSizeStats:(id)arg0 ;
-(BOOL)isFitnessDailyCollectionEnabled;
-(BOOL)runTask:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_int64ForKeyPrefix:(id)arg0 profile:(id)arg1 date:(*id)arg2 error:(*id)arg3 ;
-(NSInteger)_manuallyEnteredTypesCountWithTransaction:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_nonAppleSourcesWithDataSince:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)_activitySummaryForActivityCacheIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_updateDeltaToInt64:(NSInteger)arg0 forKey:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 timeInterval:(CGFloat)arg4 error:(*id)arg5 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(id)motionToken;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;
-(void)resetTask:(id)arg0 ;
-(void)updateFitnessDailyCollectionEnabled;


@end


#endif