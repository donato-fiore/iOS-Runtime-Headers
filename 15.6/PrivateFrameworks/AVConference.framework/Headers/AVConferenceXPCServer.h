// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCONFERENCEXPCSERVER_H
#define AVCONFERENCEXPCSERVER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AVConferenceXPCServer : NSObject {
    NSMutableArray *clientConnections;
    NSObject<OS_dispatch_queue> *incomingMessageQueue;
    NSObject<OS_dispatch_queue> *outgoingMessageQueue;
    NSObject<OS_dispatch_queue> *clientConnectionsQueue;
}


@property (readonly) NSObject<OS_xpc_object> *listener; // ivar: listener
@property (readonly) NSMutableDictionary *registeredBlocks; // ivar: registeredBlocks


+(id)AVConferenceXPCServerSingleton;
-(NSUInteger)retainCount;
-(id)_xpc_get_connection_from_list_for_connection:(id)arg0 ;
-(id)_xpc_get_connection_from_list_for_context:(id)arg0 ;
-(id)_xpc_get_connections_from_list_for_context:(id)arg0 ;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)authorizedTokenData;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)newClientDiedDictionary;
-(id)newNSDictionaryFromNSError:(id)arg0 ;
-(id)newNSDictionaryFromXPCDictionary:(id)arg0 ;
-(id)newNSDictionaryWidthNSDictionary:(id)arg0 ;
-(id)newNSErrorFromNSDictionary:(id)arg0 ;
-(id)newXPCDictionaryFromNSDictionary:(id)arg0 forEvent:(id)arg1 ;
-(id)retain;
-(void)_xpc_add_connection_to_list:(id)arg0 ;
-(void)_xpc_handle_incoming_request:(id)arg0 ;
-(void)_xpc_remove_connection_from_list:(id)arg0 ;
-(void)_xpc_remove_connections_from_list;
-(void)_xpc_start_listening_for_connections;
-(void)appendContextToDictionary:(id)arg0 forConnection:(id)arg1 ;
-(void)appendPIDToDictionary:(id)arg0 pid:(int)arg1 ;
-(void)dealloc;
-(void)deregisterFromService:(char *)arg0 ;
-(void)registerBlockForService:(char *)arg0 block:(id)arg1 ;
// -(void)registerBlockForService:(char *)arg0 block:(id)arg1 queue:(unk)arg2  ;
// -(void)registerBlockForService:(char *)arg0 block:(id)arg1 queue:(unk)arg2 eventLogLevel:(id)arg3  ;
-(void)release;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 ;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 context:(id)arg2 ;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 toAllClientsWithContext:(id)arg2 ;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 xpcArguments:(id)arg2 context:(id)arg3 ;


@end


#endif