// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHMONTHLYCHALLENGEAWARDINGSOURCE_H
#define ACHMONTHLYCHALLENGEAWARDINGSOURCE_H

@class NSString, HDProfile;
@protocol HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceStore.h"
#import "ACHEarnedInstanceAwardingEngine.h"
#import "ACHMonthlyChallengeDataSource.h"
#import "ACHAchievementProgressEngine.h"
#import "ACHTemplateStore.h"

@interface ACHMonthlyChallengeAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>



@property (nonatomic) unsigned char creatorDevice; // ivar: _creatorDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ACHMonthlyChallengeDataSource *monthlyDataSource; // ivar: _monthlyDataSource
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider; // ivar: _progressProvider
@property (readonly) Class superclass;
@property (weak, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)providesProgressForTemplate:(id)arg0 ;
-(id)_earnedInstancesForInterval:(id)arg0 ;
-(id)_evaluationEnvironmentForTemplate:(id)arg0 ;
-(id)_monthlyChallengeTemplatesForHistoricalInterval:(id)arg0 ;
-(id)currentGoalQuantityForTemplate:(id)arg0 ;
-(id)currentProgressQuantityForTemplate:(id)arg0 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg0 databaseContext:(id)arg1 ;
-(id)initWithProfile:(id)arg0 awardingEngine:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 monthlyDataSource:(id)arg4 creatorDevice:(unsigned char)arg5 progressProvider:(id)arg6 ;
-(void)_requestIncrementalEvaluation;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateTodayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateYesterdayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)daemonReady:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif