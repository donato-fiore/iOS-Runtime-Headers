// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDAWDPERIODICACTION_H
#define _HDAWDPERIODICACTION_H

@class NSString, HDAssertion, NSDate;
@protocol HDPeriodicActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDPeriodicActivity.h"

@interface _HDAWDPeriodicAction : NSObject <HDPeriodicActivityDelegate>

 {
    NSString *_waitingToRunKey;
    NSString *_lastSubmissionAttemptKey;
    NSString *_intervalCounterKey;
    NSString *_lastProcessedDateKey;
    NSInteger _repeatInterval;
    NSInteger _graceInterval;
    BOOL _requiresClassB;
    NSInteger _intervalMultiple;
    NSInteger _maximumAttemptCount;
    CGFloat _minimumDelayBetweenAttempts;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    id *_block;
    HDPeriodicActivity *_periodicActivity;
    NSInteger _waitingToRun;
    NSDate *_lastSubmissionAttemptDate;
    NSInteger _intervalCounter;
    NSDate *_lastProcessedDate;
    NSString *_taskName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;


@end


#endif