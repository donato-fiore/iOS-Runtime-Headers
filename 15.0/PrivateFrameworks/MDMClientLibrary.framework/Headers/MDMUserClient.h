// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDMUSERCLIENT_H
#define MDMUSERCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDMUserClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue; // ivar: _xpcConnectionSyncQueue


+(id)sharedClient;
-(id)init;
-(id)pushToken;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg0 ;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)dealloc;
-(void)getAssertionDescriptionsWithCompletion:(id)arg0 ;
-(void)processUserRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(void)simulatePushWithCompletion:(id)arg0 ;


@end


#endif