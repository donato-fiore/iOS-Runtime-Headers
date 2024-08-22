// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUERYCONTROLSERVER_H
#define HDQUERYCONTROLSERVER_H

@class NSMutableDictionary, NSString;
@protocol HDQueryServerDelegate, HDTaskServerEndpointDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDHealthStoreServer.h"
#import "HDHealthStoreClient.h"
#import "HDProfile.h"

@interface HDQueryControlServer : NSObject <HDQueryServerDelegate, HDTaskServerEndpointDelegate>

 {
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryServerEndpointsByUUID;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    os_unfair_lock_s _lock;
    HDHealthStoreServer *_server;
    HDHealthStoreClient *_client;
    HDProfile *_profile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasActiveQueries;
-(id)createQueryServerEndpointForIdentifier:(id)arg0 queryUUID:(id)arg1 configuration:(id)arg2 forceReactivation:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithParentServer:(id)arg0 connectionQueue:(id)arg1 ;
-(void)invalidate;
-(void)queryServer:(id)arg0 requestsAuthorizationWithContext:(id)arg1 completion:(id)arg2 ;
-(void)queryServer:(id)arg0 shouldStartWithCompletion:(id)arg1 ;
-(void)queryServerDidFinish:(id)arg0 ;
-(void)taskServerDidFailToInitializeForUUID:(id)arg0 ;
-(void)taskServerDidFinishInitialization:(id)arg0 ;
-(void)taskServerDidInvalidate:(id)arg0 ;


@end


#endif