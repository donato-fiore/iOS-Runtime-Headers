// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBDATAPROVIDERPROXY_H
#define BBDATAPROVIDERPROXY_H

@class NSString;
@protocol BBRemoteDataProviderClientProxy, BBRemoteDataProvider, OS_dispatch_queue, BBRemoteDataProviderServerProxy;

#import <Foundation/Foundation.h>

#import "BBDataProviderIdentity.h"

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy>

 {
    id<BBRemoteDataProvider> *_dataProvider;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    BOOL _dataProviderDidLoad;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id<BBRemoteDataProviderServerProxy> *_serverProxy;
    BOOL _connected;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) BBDataProviderIdentity *identity; // ivar: _identity
@property (readonly) Class superclass;


-(id)initWithDataProvider:(id)arg0 clientReplyQueue:(id)arg1 ;
-(void)_makeClientRequest:(id)arg0 ;
-(void)_makeServerRequest:(id)arg0 ;
-(void)addBulletin:(id)arg0 forDestinations:(NSUInteger)arg1 ;
-(void)addBulletin:(id)arg0 interrupt:(BOOL)arg1 ;
-(void)bulletinsWithRequestParameters:(id)arg0 lastCleared:(id)arg1 completion:(id)arg2 ;
-(void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(id)arg1 completion:(id)arg2 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg0 completion:(id)arg1 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg0 toDate:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3 ;
-(void)dataProviderDidLoad;
-(void)dealloc;
-(void)deliverBulletinActionResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)deliverMessageWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)invalidateBulletins;
-(void)modifyBulletin:(id)arg0 ;
-(void)noteSectionInfoDidChange:(id)arg0 ;
-(void)reloadDefaultSectionInfo;
-(void)reloadSectionParameters;
-(void)setServerProxy:(id)arg0 ;
-(void)updateClearedInfoWithHandler:(id)arg0 ;
-(void)updateIdentity:(id)arg0 ;
-(void)updateSectionInfoWithHandler:(id)arg0 ;
// -(void)updateSectionInfoWithHandler:(id)arg0 completion:(unk)arg1  ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg0 ;
-(void)withdrawBulletinsWithRecordID:(id)arg0 ;


@end


#endif