// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPDISTRIBUTEDMESSAGINGCENTER_H
#define CPDISTRIBUTEDMESSAGINGCENTER_H

@class NSString, NSLock, NSOperationQueue, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CPDistributedMessagingCallout.h"

@interface CPDistributedMessagingCenter : NSObject {
    NSString *_centerName;
    NSLock *_lock;
    unsigned int _sendPort;
    NSOperationQueue *_asyncQueue;
    *__CFRunLoopSource _serverSource;
    NSString *_requiredEntitlement;
    NSMutableDictionary *_callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout *_currentCallout;
    unsigned int _replyPort;
    BOOL _portPassing;
    BOOL _delayedReply;
    BOOL _requireLookupByPID;
    int _targetPID;
}




+(id)_centerNamed:(id)arg0 requireLookupByPID:(BOOL)arg1 ;
+(id)centerNamed:(id)arg0 ;
+(id)pidRestrictedCenterNamed:(id)arg0 ;
-(BOOL)_isTaskEntitled:(struct ? *)arg0 ;
-(BOOL)_sendMessage:(id)arg0 userInfo:(id)arg1 receiveReply:(*id)arg2 error:(*id)arg3 toTarget:(id)arg4 selector:(SEL)arg5 context:(*void)arg6 ;
-(BOOL)_sendMessage:(id)arg0 userInfo:(id)arg1 receiveReply:(*id)arg2 error:(*id)arg3 toTarget:(id)arg4 selector:(SEL)arg5 context:(*void)arg6 nonBlocking:(BOOL)arg7 ;
-(BOOL)_sendMessage:(id)arg0 userInfoData:(id)arg1 oolKey:(id)arg2 oolData:(id)arg3 makeServer:(BOOL)arg4 receiveReply:(*id)arg5 nonBlocking:(BOOL)arg6 error:(*id)arg7 ;
-(BOOL)doesServerExist;
-(BOOL)sendMessageName:(id)arg0 userInfo:(id)arg1 ;
-(BOOL)sendNonBlockingMessageName:(id)arg0 userInfo:(id)arg1 ;
-(id)_initAnonymousServer;
-(id)_initClientWithPort:(unsigned int)arg0 ;
-(id)_initWithServerName:(id)arg0 ;
-(id)_initWithServerName:(id)arg0 requireLookupByPID:(BOOL)arg1 ;
-(id)_requiredEntitlement;
-(id)delayReply;
-(id)name;
-(id)sendMessageAndReceiveReplyName:(id)arg0 userInfo:(id)arg1 ;
-(id)sendMessageAndReceiveReplyName:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(unsigned int)_sendPort;
-(unsigned int)_serverPort;
-(void)_dispatchMessageNamed:(id)arg0 userInfo:(id)arg1 reply:(*id)arg2 auditToken:(struct ? *)arg3 ;
-(void)_sendReplyMessage:(id)arg0 portPassing:(BOOL)arg1 onMachPort:(unsigned int)arg2 ;
-(void)_setSendPort:(unsigned int)arg0 ;
-(void)_setupInvalidationSource;
-(void)dealloc;
-(void)registerForMessageName:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;
-(void)runServerOnCurrentThread;
-(void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg0 ;
-(void)sendDelayedReply:(id)arg0 dictionary:(id)arg1 ;
-(void)sendMessageAndReceiveReplyName:(id)arg0 userInfo:(id)arg1 toTarget:(id)arg2 selector:(SEL)arg3 context:(*void)arg4 ;
-(void)setTargetPID:(int)arg0 ;
-(void)stopServer;
-(void)unregisterForMessageName:(id)arg0 ;


@end


#endif