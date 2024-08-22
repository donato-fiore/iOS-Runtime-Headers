// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONFERENCEXPCCLIENT_H
#define AVCONFERENCEXPCCLIENT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AVConferenceXPCClient : NSObject {
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
}


@property (readonly) NSObject<OS_xpc_object> *connection; // ivar: connection
@property BOOL connectionPersists; // ivar: connectionPersists
@property (readonly) NSMutableDictionary *registeredBlocks; // ivar: registeredBlocks


+(id)AVConferenceXPCClientSingleton;
-(id)copyConnection;
-(id)createConnectionToServer;
-(id)init;
-(id)newNSDictionaryFromNSDictionary:(id)arg0 ;
-(id)newNSDictionaryFromNSError:(id)arg0 ;
-(id)newNSDictionaryFromXPCDictionary:(id)arg0 ;
-(id)newNSErrorFromNSDictionary:(id)arg0 ;
-(id)newServerDiedDictionary;
-(id)newTimeoutDictionary;
-(id)newXPCDictionaryFromNSDictionary:(id)arg0 error:(*id)arg1 ;
-(id)sendMessageSync:(char *)arg0 ;
-(id)sendMessageSync:(char *)arg0 arguments:(id)arg1 ;
-(id)sendMessageSync:(char *)arg0 arguments:(id)arg1 xpcArguments:(id)arg2 ;
-(void)closeConnectionToServer;
-(void)dealloc;
-(void)deregisterFromService:(char *)arg0 ;
-(void)registerBlockForService:(char *)arg0 block:(id)arg1 ;
// -(void)registerBlockForService:(char *)arg0 block:(id)arg1 queue:(unk)arg2  ;
// -(void)registerBlockForService:(char *)arg0 block:(id)arg1 queue:(unk)arg2 eventLogLevel:(id)arg3  ;
-(void)sendMessageAsync:(char *)arg0 ;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 ;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 reply:(id)arg2 ;
// -(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 reply:(id)arg2 queue:(unk)arg3  ;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 xpcArguments:(id)arg2 reply:(id)arg3 ;
// -(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 xpcArguments:(id)arg2 reply:(id)arg3 queue:(unk)arg4  ;
// -(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 xpcArguments:(id)arg2 reply:(id)arg3 queue:(unk)arg4 replyLogLevel:(id)arg5  ;


@end


#endif