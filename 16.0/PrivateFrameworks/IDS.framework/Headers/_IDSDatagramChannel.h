// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IDSDATAGRAMCHANNEL_H
#define _IDSDATAGRAMCHANNEL_H

@class NSMutableDictionary, NSData, NSMutableArray;
@protocol OS_nw_connection, OS_nw_context, OS_dispatch_queue, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "IDSDataChannelLinkContext.h"

@interface _IDSDatagramChannel : NSObject {
    BOOL _verboseFunctionalLogging;
    int _socketDescriptor;
    id *_eventHandler;
    id *_readHandler;
    id *_readHandlerWithOptions;
    id *_writeHandler;
    BOOL _connected;
    os_unfair_lock_s _writeLock;
    os_unfair_lock_s _readLock;
    BOOL _isInvalidated;
    NSInteger _operationMode;
    NSInteger _preferredDataPathType;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_context> *_context;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasMetadata;
    BOOL _sentFirstReadLinkInfo;
    BOOL _receivedPreConnectionData;
    BOOL _waitForPreConnectionDataForConnected;
    BOOL _startCalled;
    BOOL _startAutomatically;
    int _osChannelFD;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    *channel _osChannel;
    *channel_ring_desc _osChannelTXRing;
    *channel_ring_desc _osChannelRXRing;
    unsigned char _nexus_instance;
    IDSDataChannelLinkContext *_cellularLink;
    NSMutableDictionary *_linkContexts;
    char _defaultLinkID;
    NSData *_preConnectionData;
    NSMutableArray *_sendingMetadata;
    BOOL _needsMediaEncryptionInfo;
    NSUInteger _outgoingBytes;
    NSUInteger _incomingBytes;
    NSUInteger _outgoingPackets;
    NSUInteger _incomingPackets;
    CGFloat _lastOutgoingStatReport;
    CGFloat _lastIncomingStatReport;
    NSMutableDictionary *_MKIArrivalTime;
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;
    NSMutableDictionary *_probingDict;
    NSObject<OS_nw_connection>" _directConnectionsByLinkID;
    IDSDataChannelLinkContext" _linkContextsByLinkID;
    NSMutableDictionary *_linkIDToParticipantMap;
    NSMutableDictionary *_localRemoteRelayLinkIDToVirtualLinkIDMap;
}




-(id)init;


@end


#endif