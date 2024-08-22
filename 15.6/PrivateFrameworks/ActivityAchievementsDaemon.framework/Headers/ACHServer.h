// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHSERVER_H
#define ACHSERVER_H

@class HDXPCClient, NSString, HDProfile;
@protocol ACHServerInterface, _HKXPCExportable, ACHAwardingScheduler;

#import <Foundation/Foundation.h>

#import "ACHAchievementStore.h"
#import "ACHEarnedInstanceStore.h"
#import "ACHMobileAssetProvider.h"
#import "ACHTemplateSourceScheduler.h"
#import "ACHTemplateStore.h"

@interface ACHServer : NSObject <ACHServerInterface, _HKXPCExportable>



@property (retain, nonatomic) ACHAchievementStore *achievementStore; // ivar: _achievementStore
@property (retain, nonatomic) NSObject<ACHAwardingScheduler> *awardingScheduler; // ivar: _awardingScheduler
@property (retain, nonatomic) HDXPCClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider; // ivar: _mobileAssetProvider
@property (retain, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (retain, nonatomic) ACHTemplateSourceScheduler *templateSourceScheduler; // ivar: _templateSourceScheduler
@property (retain, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore


+(id)serverWithClient:(id)arg0 templateStore:(id)arg1 earnedInstanceStore:(id)arg2 awardingScheduler:(id)arg3 achievementStore:(id)arg4 mobileAssetProvider:(id)arg5 templateSourceScheduler:(id)arg6 error:(*id)arg7 ;
+(id)serverWithTemplateStore:(id)arg0 earnedInstanceStore:(id)arg1 awardingScheduler:(id)arg2 achievementStore:(id)arg3 mobileAssetProvider:(id)arg4 templateSourceScheduler:(id)arg5 ;
-(id)exportedInterface;
-(id)initWithClient:(id)arg0 templateStore:(id)arg1 earnedInstanceStore:(id)arg2 awardingScheduler:(id)arg3 achievementStore:(id)arg4 mobileAssetProvider:(id)arg5 templateSourceScheduler:(id)arg6 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_addEarnedInstance:(id)arg0 completion:(id)arg1 ;
-(void)remote_addTemplate:(id)arg0 completion:(id)arg1 ;
-(void)remote_availableMobileAssetsWithCompletion:(id)arg0 ;
-(void)remote_fetchAchievementWithTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(id)arg0 ;
-(void)remote_fetchAllAchievementsWithCompletion:(id)arg0 ;
-(void)remote_fetchAllEarnedInstancesWithCompletion:(id)arg0 ;
-(void)remote_fetchAllTemplatesWithCompletion:(id)arg0 ;
-(void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)remote_forceAwardingSchedulerWithCompletion:(id)arg0 ;
-(void)remote_removeAllEarnedInstancesWithCompletion:(id)arg0 ;
-(void)remote_removeAllTemplatesWithCompletion:(id)arg0 ;
-(void)remote_removeEarnedInstance:(id)arg0 completion:(id)arg1 ;
-(void)remote_removeTemplate:(id)arg0 completion:(id)arg1 ;
-(void)remote_runMonthlyChallengesWithCompletion:(id)arg0 ;
-(void)remote_setActivityChallengeAssetsServerURL:(id)arg0 completion:(id)arg1 ;


@end


#endif