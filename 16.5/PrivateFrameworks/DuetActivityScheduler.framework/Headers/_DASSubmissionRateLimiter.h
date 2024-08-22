// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DASSUBMISSIONRATELIMITER_H
#define _DASSUBMISSIONRATELIMITER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface _DASSubmissionRateLimiter : NSObject

@property (retain, nonatomic) NSMutableDictionary *activityGroupQueue; // ivar: _activityGroupQueue
@property (retain, nonatomic) NSMutableDictionary *activityGroups; // ivar: _activityGroups
@property (nonatomic) int dastoolToken; // ivar: _dastoolToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delayedSubmissionQueue; // ivar: _delayedSubmissionQueue
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSMutableDictionary *penaltyBox; // ivar: _penaltyBox
@property (retain, nonatomic) NSMutableDictionary *submittedActivities; // ivar: _submittedActivities


+(id)groupNameForActivity:(id)arg0 ;
+(id)pluginGroupNameForGroupName:(id)arg0 ;
-(BOOL)shouldDelayGroupSubmissionOfActivity:(id)arg0 ;
-(BOOL)shouldDelaySubmissionOfActivity:(id)arg0 ;
-(BOOL)shouldQueueActivity:(id)arg0 ;
-(NSUInteger)capacityForGroupName:(id)arg0 ;
-(id)init;
-(void)activityCanceled:(id)arg0 withScheduler:(id)arg1 ;
-(void)activityCompleted:(id)arg0 withScheduler:(id)arg1 ;
-(void)addToPenaltyBox:(id)arg0 atDate:(id)arg1 ;
-(void)admitNextActivityAfterCompletionOf:(id)arg0 withScheduler:(id)arg1 ;
-(void)createActivityGroup:(id)arg0 ;
-(void)dealloc;
-(void)handleCanceledActivity:(id)arg0 ;
-(void)handleCanceledActivity:(id)arg0 withGroupName:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeFromPenaltyBox:(id)arg0 ;
-(void)submitActivities:(id)arg0 withScheduler:(id)arg1 ;
-(void)submitActivity:(id)arg0 inGroup:(id)arg1 withScheduler:(id)arg2 ;
-(void)submitActivity:(id)arg0 withScheduler:(id)arg1 ;
-(void)updateCapacity:(NSUInteger)arg0 forGroupName:(id)arg1 ;


@end


#endif