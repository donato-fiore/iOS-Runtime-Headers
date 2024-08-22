// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHWORKOUTAWARDINGSOURCE_H
#define ACHWORKOUTAWARDINGSOURCE_H

@class NSDate, NSString, HDProfile;
@protocol HDHealthDaemonReadyObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceAwardingEngine.h"
#import "ACHAchievementProgressEngine.h"
#import "ACHTemplateStore.h"
#import "ACHWorkoutUtility.h"

@interface ACHWorkoutAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>



@property (nonatomic) unsigned char creatorDevice; // ivar: _creatorDevice
@property (retain, nonatomic) NSDate *currentDateOverride; // ivar: _currentDateOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider; // ivar: _progressProvider
@property (readonly) Class superclass;
@property (weak, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore
@property (readonly, nonatomic) NSString *uniqueName;
@property (retain, nonatomic) NSString *watchCountryCodeOverride; // ivar: _watchCountryCodeOverride
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility; // ivar: _workoutUtility


-(BOOL)_handlesTemplate:(id)arg0 ;
-(BOOL)providesProgressForTemplate:(id)arg0 ;
-(id)_earnedInstancesForWorkouts:(id)arg0 ;
-(id)_progressEnvironment;
-(id)currentDate;
-(id)currentGoalQuantityForTemplate:(id)arg0 ;
-(id)currentProgressQuantityForTemplate:(id)arg0 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg0 databaseContext:(id)arg1 ;
-(id)initWithProfile:(id)arg0 awardingEngine:(id)arg1 templateStore:(id)arg2 creatorDevice:(unsigned char)arg3 progressProvider:(id)arg4 workoutUtility:(id)arg5 ;
-(id)watchCountryCode;
-(void)daemonReady:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif