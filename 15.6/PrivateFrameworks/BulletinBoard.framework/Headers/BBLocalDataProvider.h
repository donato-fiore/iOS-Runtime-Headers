// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBLOCALDATAPROVIDER_H
#define BBLOCALDATAPROVIDER_H

@protocol OS_dispatch_queue, OS_dispatch_source, BBDataProvider;


#import "BBDataProvider.h"

@interface BBLocalDataProvider : BBDataProvider {
    NSObject<OS_dispatch_queue> *_localQueue;
    NSObject<OS_dispatch_queue> *_remoteQueue;
    NSObject<OS_dispatch_source> *_watchdogTimer;
    BOOL _unresponsive;
    BOOL _invalidated;
}


@property (retain, nonatomic) NSObject<BBDataProvider> *dataProvider; // ivar: _dataProvider


+(id)dataProviderWithDataProvider:(id)arg0 serverQueue:(id)arg1 ;
+(id)dataProviderWithPrincipalClass:(Class)arg0 serverQueue:(id)arg1 initializationCompletion:(id)arg2 ;
-(BOOL)canPerformMigration;
-(BOOL)migrateSectionInfo:(id)arg0 oldSectionInfo:(id)arg1 ;
-(id)_bulletinsWithRequestParameters:(id)arg0 lastCleared:(id)arg1 ;
// -(id)_doSynchronousRemoteRequest:(id)arg0 conditionalOn:(unk)arg1  ;
-(id)_initWithDataProvider:(id)arg0 sectionID:(id)arg1 serverQueue:(id)arg2 initializationCompletion:(id)arg3 ;
-(id)bulletinsWithRequestParameters:(id)arg0 lastCleared:(id)arg1 ;
-(id)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(id)arg1 ;
-(id)initWithDataProvider:(id)arg0 serverQueue:(id)arg1 ;
-(id)initWithPrincipalClass:(Class)arg0 serverQueue:(id)arg1 initializationCompletion:(id)arg2 ;
// -(void)_doAsynchronousRemoteRequest:(id)arg0 conditionalOn:(unk)arg1 completion:(id)arg2  ;
-(void)_ping;
-(void)_watchdogFired;
-(void)bulletinsWithRequestParameters:(id)arg0 lastCleared:(id)arg1 completion:(id)arg2 ;
-(void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(id)arg1 completion:(id)arg2 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg0 completion:(id)arg1 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg0 toDate:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)deliverMessageWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)deliverResponse:(id)arg0 forBulletinRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)invalidate;
-(void)noteSectionInfoDidChange:(id)arg0 ;
-(void)reloadIdentityWithCompletion:(id)arg0 ;
-(void)startWatchdog;
// -(void)updateClearedInfoWithClearedInfo:(id)arg0 handler:(id)arg1 completion:(unk)arg2  ;
// -(void)updateSectionInfoWithSectionInfo:(id)arg0 handler:(id)arg1 completion:(unk)arg2  ;


@end


#endif