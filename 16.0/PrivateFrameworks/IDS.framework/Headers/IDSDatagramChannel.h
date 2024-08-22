// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSDATAGRAMCHANNEL_H
#define IDSDATAGRAMCHANNEL_H

@class NSArray;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "_IDSDatagramChannel.h"
#import "IDSDataChannelLinkContext.h"

@interface IDSDatagramChannel : NSObject {
    _IDSDatagramChannel *_internal;
    NSObject<OS_dispatch_source> *_statsTimer;
}


@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;


-(?)_writeToNWConnectionArrayOfDatagrams:(?)arg0 datagramSizes:(?)arg1 datagramInfo:(?)arg2 datagramOptions:(?)arg3 datagramCountcompletionHandler;
-(?)_writeToOSChannelDatagrams:(?)arg0 datagramSizes:(?)arg1 datagramInfo:(?)arg2 datagramOptions:(?)arg3 datagramCountcompletionHandler;
-(?)_writeToSocket:(?)arg0 datagrams:(?)arg1 datagramSizes:(?)arg2 datagramInfo:(?)arg3 datagramOptions:(?)arg4 datagramCountcompletionHandler;
-(?)writeArrayOfDatagrams:(?)arg0 datagramSizes:(?)arg1 datagramInfo:(?)arg2 datagramOptions:(?)arg3 datagramCountcompletionHandler;
-(?)writeDatagrams:(?)arg0 datagramsSize:(?)arg1 datagramsInfo:(?)arg2 datagramsCount:(?)arg3 optionscompletionHandler;
-(BOOL)isDaemonConnection:(id)arg0 ;
// -(BOOL)processDatagram:(char *)arg0 datagramSize:(NSUInteger)arg1 readHandler:(id)arg2 readHandlerWithOptions:(unk)arg3  ;
-(NSInteger)_translateParticipantIDForOutgoingPacket:(NSUInteger)arg0 forLinkID:(char)arg1 ;
-(NSUInteger)_translateParticipantIDForIncomingPacket:(NSInteger)arg0 forLinkID:(char)arg1 ;
-(id)_directConnectionForLinkID:(char)arg0 ;
-(id)_directOrDaemonConnectionForLinkID:(char)arg0 ;
-(id)_extractparticipantIDToHashedIDMappingFromData:(id)arg0 ;
-(id)_linkContextForLinkID:(char)arg0 ;
-(id)cachedMetadata;
-(id)connectionForLinkID:(char)arg0 ;
-(id)createIfNecessaryDirectConnectionForLinkID:(char)arg0 linkContext:(id)arg1 ;
-(id)description;
-(id)getContext;
-(id)getDispatchDataForPacketBuffer:(struct ? *)arg0 ;
-(id)getIDSDataChannelsQueue;
-(id)getNwProtocolMetaDataForTrafficClass:(unsigned short)arg0 ;
-(id)getQueue;
-(id)initWithDestination:(id)arg0 options:(id)arg1 ;
-(id)initWithSocketDescriptor:(int)arg0 ;
-(int)underlyingFileDescriptor;
-(struct ? *)_makeDirectPacketBufferFromDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 currentDatagramCount:(unsigned char)arg2 totalDatagramCount:(unsigned char)arg3 datagramInfo:(struct ? )arg4 datagramOptions:(struct ? *)arg5 linkContext:(id)arg6 ;
-(struct ? *)_makePacketBufferFromDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 currentDatagramCount:(unsigned char)arg2 totalDatagramCount:(unsigned char)arg3 datagramInfo:(struct ? )arg4 datagramOptions:(struct ? *)arg5 ;
-(struct ? *)_setWiFiAssist:(BOOL)arg0 ;
-(void)_buildPacketBufferMetaData:(struct ? *)arg0 ;
-(void)_dumpLinkContextConnectionsInfo;
-(void)_logReceivingStats:(NSUInteger)arg0 ;
-(void)_logSendingStats:(NSUInteger)arg0 ;
-(void)_processIncomingDatagram:(char *)arg0 datagramSize:(unsigned int)arg1 linkID:(char)arg2 linkContext:(id)arg3 ;
-(void)_readFromDirectConnection:(id)arg0 linkID:(char)arg1 linkContext:(id)arg2 ;
-(void)_removeDirectConnection:(id)arg0 ;
-(void)_reportDictionary:(id)arg0 forKey:(unsigned char)arg1 ;
-(void)_reportFirstIncomingPacketTimeForMKI:(id)arg0 time:(id)arg1 ;
-(void)_reportFirstOutgoingPacketTimeForMKI:(id)arg0 time:(id)arg1 ;
-(void)_reportMKIArrival:(id)arg0 time:(id)arg1 isLocallyGenerated:(BOOL)arg2 ;
-(void)_sendSequenceNumberMetadataToDaemon:(NSUInteger)arg0 ;
-(void)_sendStatsRequestViaDaemon;
-(void)_setDirectConnection:(id)arg0 forLinkID:(char)arg1 ;
-(void)_setLinkContext:(id)arg0 forLinkID:(char)arg1 ;
-(void)_startStatsTimer;
-(void)_stopStatsTimer;
-(void)_writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;
-(void)_writeToDirectConnection:(id)arg0 datagram:(*void)arg1 datagramSize:(unsigned int)arg2 currentDatagramCount:(unsigned char)arg3 totalDatagramCount:(unsigned char)arg4 datagramInfo:(struct ? )arg5 datagramOptions:(struct ? *)arg6 completionHandler:(id)arg7 ;
-(void)_writeToNWConnection:(id)arg0 datagram:(*void)arg1 datagramSize:(unsigned int)arg2 currentDatagramCount:(unsigned char)arg3 totalDatagramCount:(unsigned char)arg4 datagramInfo:(struct ? )arg5 datagramOptions:(struct ? *)arg6 completionHandler:(id)arg7 ;
-(void)addDirectConnectionForLinkID:(char)arg0 linkContext:(id)arg1 ;
-(void)addNewIDSDataChannelLinkWithAttributes:(char *)arg0 linkAttributesLength:(unsigned short)arg1 ;
-(void)close;
-(void)dealloc;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)generateMetadataWithDatagramInfo:(struct ? )arg0 options:(struct ? *)arg1 currentDatagramCount:(unsigned char)arg2 totalDatagramCount:(unsigned char)arg3 byteBuffer:(struct ? *)arg4 ;
-(void)handleIncomingDatagram:(char *)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 datagramOptions:(struct ? *)arg3 ;
-(void)invalidate;
-(void)invalidateDirectConnections;
-(void)osChannelInfoLog;
-(void)processMetadataForDatagram:(char *)arg0 size:(NSUInteger)arg1 datagramInfo:(struct ? *)arg2 options:(struct ? *)arg3 ;
-(void)queryStatusWithOptions:(id)arg0 ;
-(void)readDatagramWithCompletionHandler:(id)arg0 ;
-(void)readDatagramsWithCompletionHandler:(id)arg0 ;
// -(void)readFromNWConnection:(id)arg0 maximumDatagrams:(unsigned int)arg1 readHandler:(id)arg2 readHandlerWithOptions:(unk)arg3 completionHandler:(id)arg4  ;
// -(void)readFromOSChannel:(struct channel *)arg0 ring:(struct channel_ring_desc *)arg1 maximumDatagrams:(unsigned int)arg2 readHandler:(id)arg3 readHandlerWithOptions:(unk)arg4  ;
-(void)readyToRead;
-(void)removeDirectConnectionForLinkID:(char)arg0 ;
-(void)removeIDSDataChannelLinkContext:(char)arg0 linkUUID:(id)arg1 reason:(unsigned char)arg2 ;
-(void)reportFirstIncomingPacketTimeForMKI:(id)arg0 ;
-(void)reportFirstOutgoingPacketTimeForMKI:(id)arg0 ;
-(void)reportMKIArrival:(id)arg0 isLocallyGenerated:(BOOL)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg0 ;
-(void)selectDefaultLink:(char)arg0 ;
-(void)sendEventConnectedWithDummyLinkInfo;
-(void)sendMediaEncryptionInfoWithMKM:(id)arg0 MKS:(id)arg1 MKI:(id)arg2 isLocallyGenerated:(BOOL)arg3 encryptionSequenceNumber:(NSUInteger)arg4 ;
-(void)sendMediaMembershipChangedInfo:(unsigned char)arg0 ;
-(void)sendMetadata;
-(void)setChannelPreferences:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setHasMetadata:(BOOL)arg0 ;
-(void)setLinkIDToParticipantMap:(id)arg0 ;
-(void)setPreferredDataPathType:(NSInteger)arg0 ;
-(void)setReadHandler:(id)arg0 ;
-(void)setReadHandlerWithOptions:(id)arg0 ;
-(void)setUPlusOneMode:(BOOL)arg0 isInitiator:(BOOL)arg1 ;
-(void)setWiFiAssist:(BOOL)arg0 ;
-(void)setWriteCompletionHandler:(id)arg0 ;
-(void)start;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)startInternal;
-(void)startMKMRecoveryForParticipantIDs:(id)arg0 ;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 flags:(struct ? )arg2 completionHandler:(id)arg3 ;


@end


#endif