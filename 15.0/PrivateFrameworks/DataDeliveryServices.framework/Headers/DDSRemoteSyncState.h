// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSREMOTESYNCSTATE_H
#define DDSREMOTESYNCSTATE_H

@class NSString, NSDate;
@protocol DDSBackgroundActivitySchedulerDelegate, DDSRemoteSyncStateDelegate;

#import <Foundation/Foundation.h>

#import "DDSBackgroundActivityScheduler.h"

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate>



@property (nonatomic) NSUInteger attemptCount; // ivar: _attemptCount
@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DDSRemoteSyncStateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DDSBackgroundActivityScheduler *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syncStatus; // ivar: _syncStatus


-(CGFloat)nextUpdateTimeIntervalForAttemptCount:(NSUInteger)arg0 ;
-(CGFloat)timeBetweenSyncs;
-(id)init;
-(void)completedUpdateCycleWithError:(id)arg0 ;
-(void)loadState;
-(void)performScheduledActivityWithIdentifier:(id)arg0 ;
-(void)requestRetry;
-(void)resetState;
-(void)saveState;
-(void)scheduleRetry;


@end


#endif