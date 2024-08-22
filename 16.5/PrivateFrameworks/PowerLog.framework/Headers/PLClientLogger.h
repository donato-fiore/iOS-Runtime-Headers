// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLIENTLOGGER_H
#define PLCLIENTLOGGER_H

@class NSMutableArray, NSSet, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PLClientLogger : NSObject

@property (retain) NSObject<OS_dispatch_queue> *adaptivePermissionWorkQueue; // ivar: _adaptivePermissionWorkQueue
@property BOOL batchDropMessages; // ivar: _batchDropMessages
@property (retain) NSObject<OS_dispatch_queue> *batchFlushQueue; // ivar: _batchFlushQueue
@property int batchedDropMessageCount; // ivar: _batchedDropMessageCount
@property (retain) NSMutableArray *batchedTaskCache; // ivar: _batchedTaskCache
@property BOOL batchedTimerInFlight; // ivar: _batchedTimerInFlight
@property (readonly) NSSet *batchingClientAllowlist; // ivar: _batchingClientAllowlist
@property BOOL clientDebug; // ivar: _clientDebug
@property (retain) NSMutableDictionary *eventFilterSaved; // ivar: _eventFilterSaved
@property BOOL forceBatching; // ivar: _forceBatching
@property (retain) NSMutableDictionary *pendingTaskCache; // ivar: _pendingTaskCache
@property (retain) NSMutableDictionary *permissionCache; // ivar: _permissionCache
@property (retain) NSString *processName; // ivar: _processName
@property BOOL talkToPowerlogHelper; // ivar: _talkToPowerlogHelper
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnectionHelper; // ivar: _xpcConnectionHelper
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionHelperQueue; // ivar: _xpcConnectionHelperQueue
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue; // ivar: _xpcConnectionQueue


+(BOOL)isMessageOnDeviceDisabled;
+(id)sharedInstance;
-(id)buildMessageForClientID:(short)arg0 withKey:(id)arg1 withPayload:(id)arg2 ;
-(id)getWorkQueueForClientID:(short)arg0 ;
-(id)init;
-(id)pendingTasksForType:(id)arg0 forClientID:(short)arg1 forKey:(id)arg2 ;
-(id)queryForClientID:(short)arg0 withKey:(id)arg1 withPayload:(id)arg2 ;
-(id)xpcConnectionWithClientID:(short)arg0 withKey:(id)arg1 withPayload:(id)arg2 ;
-(id)xpcSendMessageWithReply:(id)arg0 withClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(int)batchSizeForClientID:(short)arg0 ;
-(int)shouldLogNowForClientID:(short)arg0 withKey:(id)arg1 withPayload:(id)arg2 withFilterInterval:(CGFloat)arg3 ;
-(short)blockedPermissionForClientID:(short)arg0 withKey:(id)arg1 withType:(id)arg2 withTimeout:(NSUInteger)arg3 ;
-(short)cachedPermissionForClientID:(short)arg0 withKey:(id)arg1 withType:(id)arg2 ;
-(void)addToBatchedTaskCacheForType:(id)arg0 forClientID:(short)arg1 forKey:(id)arg2 withPayload:(id)arg3 ;
-(void)addToPendingTaskCacheForType:(id)arg0 forClientID:(short)arg1 forKey:(id)arg2 withPayload:(id)arg3 ;
-(void)batchTasksCacheFlush;
-(void)logForClientID:(short)arg0 withKey:(id)arg1 withPayload:(id)arg2 ;
-(void)logLaterForClientID:(short)arg0 withKey:(id)arg1 withFilterInterval:(CGFloat)arg2 ;
-(void)logStateCaches;
-(void)logWithCurrentDateForClientID:(short)arg0 withKey:(id)arg1 withPayload:(id)arg2 ;
-(void)permissionForClientID:(short)arg0 withKey:(id)arg1 withType:(id)arg2 completion:(id)arg3 ;
-(void)powerlogStateChanged;
-(void)setCachePermission:(short)arg0 ForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 ;
-(void)xpcSendMessage:(id)arg0 withClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3 ;
-(void)xpcSendMessageWithRateLimitingforClient:(short)arg0 withKey:(id)arg1 withPayload:(id)arg2 ;


@end


#endif