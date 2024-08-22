// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBREMOTEDATAPROVIDER_H
#define BBREMOTEDATAPROVIDER_H

@class NSString;
@protocol BBRemoteDataProviderServerProxy, OS_dispatch_queue, BBRemoteDataProviderClientProxy, BBRemoteDataProviderDelegate;


#import "BBDataProvider.h"

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy>

 {
    NSString *_sectionID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id<BBRemoteDataProviderClientProxy> *_clientProxy;
    BOOL _connected;
    BOOL _serverIsReady;
    NSObject<OS_dispatch_queue> *_serverControlQueue;
    id<BBRemoteDataProviderDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformMigration;
-(BOOL)checkResponds:(BOOL)arg0 forSelector:(SEL)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg0 oldSectionInfo:(id)arg1 ;
-(id)debugDescriptionWithChildren:(NSUInteger)arg0 ;
-(id)initWithSectionID:(id)arg0 delegate:(id)arg1 ;
-(id)sectionIdentifier;
-(void)_logDoesNotRespond:(SEL)arg0 ;
-(void)_sendClientRequest:(id)arg0 ;
-(void)addBulletin:(id)arg0 forDestinations:(NSUInteger)arg1 ;
-(void)bulletinsWithRequestParameters:(id)arg0 lastCleared:(id)arg1 completion:(id)arg2 ;
-(void)calloutToServer:(id)arg0 ;
-(void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(id)arg1 completion:(id)arg2 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg0 completion:(id)arg1 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg0 toDate:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3 ;
-(void)dataProviderDidLoad;
-(void)dealloc;
-(void)deliverMessageWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)deliverResponse:(id)arg0 forBulletinRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)getClearedInfoWithCompletion:(id)arg0 ;
-(void)getSectionInfoWithCompletion:(id)arg0 ;
-(void)invalidateBulletins;
-(void)modifyBulletin:(id)arg0 ;
-(void)noteSectionInfoDidChange:(id)arg0 ;
-(void)reloadDefaultSectionInfo:(id)arg0 ;
-(void)reloadIdentityWithCompletion:(id)arg0 ;
-(void)reloadSectionParameters:(id)arg0 ;
-(void)setClearedInfo:(id)arg0 ;
-(void)setClientProxy:(id)arg0 completion:(id)arg1 ;
-(void)setSectionInfo:(id)arg0 ;
-(void)setServerIsReady:(BOOL)arg0 ;
-(void)startWatchdog;
// -(void)updateClearedInfoWithClearedInfo:(id)arg0 handler:(id)arg1 completion:(unk)arg2  ;
// -(void)updateSectionInfoWithSectionInfo:(id)arg0 handler:(id)arg1 completion:(unk)arg2  ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg0 ;
-(void)withdrawBulletinsWithRecordID:(id)arg0 ;


@end


#endif