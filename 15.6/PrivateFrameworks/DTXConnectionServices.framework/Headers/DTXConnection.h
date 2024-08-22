// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXCONNECTION_H
#define DTXCONNECTION_H

@class NSSet, NSMutableDictionary, NSMutableArray, NSDictionary, NSString;
@protocol DTXConnectionRemoteReceiveQueueCalls, DTXMessenger, OS_dispatch_queue, OS_dispatch_semaphore, DTXBlockCompressor;

#import <Foundation/Foundation.h>

#import "DTXTransport.h"
#import "DTXResourceTracker.h"
#import "DTXMessageParser.h"
#import "DTXMessageTransmitter.h"
#import "DTXChannel.h"

@interface DTXConnection : NSObject <DTXConnectionRemoteReceiveQueueCalls, DTXMessenger>

 {
    NSObject<OS_dispatch_queue> *_outgoing_message_queue;
    NSObject<OS_dispatch_queue> *_outgoing_control_queue;
    DTXTransport *_controlTransport;
    NSSet *_permittedBlockCompressors;
    NSObject<OS_dispatch_queue> *_receive_queue;
    NSObject<OS_dispatch_queue> *_handler_queue;
    unsigned int _nextChannelCode;
    NSMutableDictionary *_channelsByCode;
    NSMutableDictionary *_unconfiguredChannelsByCode;
    NSMutableDictionary *_handlersByIdentifier;
    NSMutableArray *_protocolHandlers;
    NSMutableDictionary *_localCapabilityVersions;
    NSMutableDictionary *_localCapabilityClasses;
    NSDictionary *_remoteCapabilityVersions;
    NSMutableArray *_capabilityOverrideBlocks;
    DTXResourceTracker *_resourceTracker;
    DTXResourceTracker *_incomingResourceTracker;
    NSObject<OS_dispatch_semaphore> *_firstMessageSem;
    DTXMessageParser *_incomingParser;
    DTXMessageTransmitter *_outgoingTransmitter;
    DTXChannel *_defaultChannel;
    id *_channelHandler;
    NSUInteger _logMessageCallstackSizeThreshold;
    int _remoteCompressionCapabilityVersion;
    int _newChannelCompressionHint;
    int _compressionTypeForUnspecified;
    NSUInteger _compressionMinSizeThreshold;
    id<DTXBlockCompressor> *_compressor;
}


@property (readonly, nonatomic) int atomicConnectionNumber; // ivar: _connectionIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) DTXChannel *defaultChannel;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger maximumEnqueueSize;
@property (nonatomic) BOOL remoteTracer; // ivar: _remoteTracer
@property (readonly) Class superclass;
@property (nonatomic) BOOL tracer; // ivar: _tracer


+(id)connectionToAddress:(id)arg0 ;
+(void)initialize;
+(void)observeDecompressionExceptionLogging:(id)arg0 ;
+(void)registerTransport:(Class)arg0 forScheme:(id)arg1 ;
// -(BOOL)_addHandler:(id)arg0 forMessage:(unk)arg1 channel:(unsigned int)arg2  ;
-(BOOL)publishCapability:(id)arg0 withVersion:(int)arg1 forClass:(Class)arg2 error:(*id)arg3 ;
-(BOOL)sendMessage:(id)arg0 fromChannel:(id)arg1 sendMode:(int)arg2 syncWithReply:(BOOL)arg3 replyHandler:(id)arg4 ;
-(BOOL)sendMessageAsync:(id)arg0 replyHandler:(id)arg1 ;
-(CGFloat)preflightSynchronouslyWithTimeout:(CGFloat)arg0 ;
-(id)_makeProxyChannelWithRemoteInterface:(id)arg0 remoteInterfaceName:(id)arg1 exportedInterface:(id)arg2 exportedInterfaceName:(id)arg3 ;
-(id)_sendHeartbeatAsyncWithTimeout:(CGFloat)arg0 ;
-(id)_testing_remoteCapabilityVersions;
-(id)initWithTransport:(id)arg0 ;
-(id)localCapabilities;
-(id)makeChannelWithIdentifier:(id)arg0 ;
-(id)makeProxyChannelWithRemoteInterface:(id)arg0 exportedInterface:(id)arg1 ;
-(id)makeProxyChannelWithRemoteInterface:(id)arg0 remoteInterfaceName:(id)arg1 exportedInterface:(id)arg2 exportedInterfaceName:(id)arg3 ;
-(id)publishedAddresses;
-(id)remoteCapabilityVersions;
-(int)remoteCapabilityVersion:(id)arg0 ;
-(void)_cancelInternal:(id)arg0 ;
-(void)_channelCanceled:(unsigned int)arg0 ;
-(void)_handleMessageParseException:(id)arg0 forChannelCode:(unsigned int)arg1 messageID:(unsigned int)arg2 fragmentCount:(unsigned int)arg3 withPayloadBytes:(*void)arg4 ofLength:(NSUInteger)arg5 ;
-(void)_handleMissingRemoteCapabilities;
-(void)_handleProxyRequestForInterface:(id)arg0 interfaceName:(id)arg1 peerInterface:(id)arg2 peerInterfaceName:(id)arg3 handler:(id)arg4 ;
-(void)_notifyCompressionHint:(unsigned int)arg0 forChannelCode:(unsigned int)arg1 ;
-(void)_notifyOfPublishedCapabilities:(id)arg0 ;
-(void)_receiveQueueSetCompressionHint:(unsigned int)arg0 onChannel:(id)arg1 ;
-(void)_requestChannelWithCode:(unsigned int)arg0 identifier:(id)arg1 ;
-(void)_routeMessage:(id)arg0 ;
-(void)_scheduleMessage:(id)arg0 toChannel:(id)arg1 ;
-(void)_setupWireProtocols;
-(void)_unregisterChannel:(id)arg0 ;
-(void)cancel;
-(void)cancelWithSerializedTransport:(id)arg0 ;
-(void)dealloc;
-(void)handleProxyRequestForInterface:(id)arg0 interfaceName:(id)arg1 peerInterface:(id)arg2 peerInterfaceName:(id)arg3 handler:(id)arg4 ;
-(void)handleProxyRequestForInterface:(id)arg0 peerInterface:(id)arg1 handler:(id)arg2 ;
-(void)overridePermittedBlockCompressors:(id)arg0 ;
-(void)publishCapability:(id)arg0 withVersion:(int)arg1 forClass:(Class)arg2 ;
-(void)publishServicesInImagePath:(id)arg0 ;
-(void)registerCapabilityOverrideBlock:(id)arg0 ;
-(void)registerDisconnectHandler:(id)arg0 ;
-(void)replaceCompressorForCompression:(id)arg0 ;
-(void)replaceCompressorForDecompression:(id)arg0 ;
-(void)resume;
-(void)sendControlAsync:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendControlSync:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendMessageSync:(id)arg0 replyHandler:(id)arg1 ;
-(void)setChannelHandler:(id)arg0 ;
-(void)setCompressionHint:(int)arg0 forChannel:(id)arg1 ;
-(void)setDispatchTarget:(id)arg0 ;
-(void)setMessageHandler:(id)arg0 ;
-(void)suspend;


@end


#endif