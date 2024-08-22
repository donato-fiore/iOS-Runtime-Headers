// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHCLIENT_H
#define ACHCLIENT_H

@class NSString, HKPluginProxyProvider;
@protocol _HKXPCExportable, OS_dispatch_queue, ACHServerInterface;

#import <Foundation/Foundation.h>


@interface ACHClient : NSObject <_HKXPCExportable>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *injectedErrorHandler; // ivar: _injectedErrorHandler
@property (retain, nonatomic) HKPluginProxyProvider *pluginProxyProvider; // ivar: _pluginProxyProvider
@property (retain, nonatomic) NSObject<ACHServerInterface> *serverProxy; // ivar: _serverProxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (readonly) Class superclass;


-(id)_clientQueueCompletion:(SEL)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_addPluginProxyErrorHandler:(id)arg0 ;
-(void)_injectProxyProvider:(id)arg0 ;
// -(void)_remoteProxy:(id)arg0 errorHandler:(unk)arg1  ;
-(void)addEarnedInstance:(id)arg0 completion:(id)arg1 ;
-(void)addTemplate:(id)arg0 completion:(id)arg1 ;
-(void)availableMobileAssetsWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;
-(void)fetchAchievementWithTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)fetchActivityChallengeAssetsServerURLWithCompletion:(id)arg0 ;
-(void)fetchAllAchievementsWithCompletion:(id)arg0 ;
-(void)fetchAllEarnedInstancesWithCompletion:(id)arg0 ;
-(void)fetchAllTemplatesWithCompletion:(id)arg0 ;
-(void)fetchEphemeralAchievementWithTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)forceAwardingSchedulerWithCompletion:(id)arg0 ;
-(void)removeAllEarnedInstancesWithCompletion:(id)arg0 ;
-(void)removeAllTemplatesWithCompletion:(id)arg0 ;
-(void)removeEarnedInstance:(id)arg0 completion:(id)arg1 ;
-(void)removeTemplate:(id)arg0 completion:(id)arg1 ;
-(void)runMonthlyChallengesWithCompletion:(id)arg0 ;
-(void)setActivityChallengeAssetsServerURL:(id)arg0 completion:(id)arg1 ;


@end


#endif