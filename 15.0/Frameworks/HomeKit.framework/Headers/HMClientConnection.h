// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCLIENTCONNECTION_H
#define HMCLIENTCONNECTION_H

@class NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMXPCClient.h"

@interface HMClientConnection : NSObject <HMFMessageReceiver>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) HMXPCClient *xpcClient; // ivar: _xpcClient


+(BOOL)areAnyAccessoriesConfigured;
+(BOOL)areAnyAppleTVAccessoriesConfigured;
+(BOOL)areAnyHomePodsConfigured;
+(BOOL)areAnySmallHomePodsConfigured;
+(BOOL)areAnySpeakersConfigured;
+(BOOL)areAnyTelevisionAccessoriesConfigured;
+(BOOL)areHomesConfigured;
+(id)sharedInstance;
+(id)siriCurrentHome;
+(id)siriHomeIdentifier;
-(id)init;
-(id)initWithNoValidation;
-(void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id)arg0 ;
// -(void)_invokeCompletionHandler:(id)arg0 withError:(unk)arg1  ;
-(void)_primaryAccountDidChange:(id)arg0 modified:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_primaryAccountWasDeletedWithCompletionHandler:(id)arg0 ;
-(void)_registerToDaemon;
-(void)_reportIntentResultTohandler:(id)arg0 ;
-(void)_reportResultsTohandler:(id)arg0 ;
-(void)_start;
-(void)notifyAccountStatusUpdate:(NSUInteger)arg0 accountIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)requestSiriSyncDataWithValidity:(id)arg0 completion:(id)arg1 ;
-(void)sendIntentRequestCommand:(id)arg0 withPayload:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendSiriCommand:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif