// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHAWDSUBMISSIONMANAGER_H
#define ACHAWDSUBMISSIONMANAGER_H

@class NSString, HDProfile, HDPeriodicActivity, NSMutableDictionary;
@protocol HDPeriodicActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceStore.h"

@interface ACHAWDSubmissionManager : NSObject <HDPeriodicActivityDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) HDPeriodicActivity *scheduler; // ivar: _scheduler
@property (retain, nonatomic) NSMutableDictionary *serverConnectionsByComponentId; // ivar: _serverConnectionsByComponentId
@property (readonly) Class superclass;


-(BOOL)_computeAndSubmitAchievementCountMetric;
-(BOOL)_submitMetric:(id)arg0 container:(id)arg1 connection:(id)arg2 ;
-(id)_formatMetricTypeToString:(unsigned int)arg0 ;
-(id)_serverConnectionForComponentId:(unsigned int)arg0 ;
-(id)initWithProfile:(id)arg0 earnedInstanceStore:(id)arg1 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;


@end


#endif