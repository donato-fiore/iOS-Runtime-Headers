// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMOCKIDSDATAGRAMCHANNEL_H
#define VCMOCKIDSDATAGRAMCHANNEL_H

@class IDSDatagramChannel, NSDictionary, NSLock;
@protocol OS_dispatch_queue;


#import "VCMockIDSDataChannelLinkContext.h"

@interface VCMockIDSDatagramChannel : IDSDatagramChannel {
    NSDictionary *_subscribedStreamsByParticipantID;
    int _socket;
    BOOL _isValid;
    VCMockIDSDataChannelLinkContext *_linkContext;
    id *_eventHandler;
    id *_readHandler;
    id *_sharedWriteCompletionHandler;
    id *_readHandlerWithOptions;
    id *_writeDatagramsBlock;
    id *_writeDatagramBlock;
    id *_readyToReadBlock;
    NSLock *_blockSettingLock;
    _VCSingleLinkedList _datagramPackets;
    *__CFAllocator _datagramPacketAllocator;
    NSUInteger _datagramPacketNextSequenceNumber;
    BOOL _usingOptions;
    CGFloat _emulatedRxPLR;
    BOOL _doNotDropNackOrRetransmitted;
    _opaque_pthread_mutex_t _streamSubscriptionLock;
    NSInteger _participantGenerationCounter;
    BOOL _isTestingOneToOneMode;
    unsigned short numPacketSent;
    unsigned short numPacketReceived;
    int _dataPath;
    BOOL _isNackEnabled;
    unsigned char _packetBuffer;
    unsigned short _packetBufferDataSize;
    ? _packetDatagramOptions;
    NSObject<OS_dispatch_queue> *_directPathReadQueue;
}


@property (readonly) BOOL idsUPlusOneMode; // ivar: _idsUPlusOneMode


+(void)extractRTPData:(char *)arg0 ssrc:(*unsigned int)arg1 sequenceNumber:(*unsigned short)arg2 ;
-(?)writeDatagrams:(?)arg0 datagramsSize:(?)arg1 datagramsInfo:(?)arg2 datagramsCount:(?)arg3 optionscompletionHandler;
-(BOOL)createSocket;
-(BOOL)enqueueDatagramPacket:(*void)arg0 datagramSize:(unsigned int)arg1 options:(struct ? *)arg2 error:(*id)arg3 ;
-(BOOL)isControlChannelDatagram:(struct _VCMockIDSDatagramChannelPacket *)arg0 ;
-(BOOL)isMediaPacket:(char *)arg0 length:(NSUInteger)arg1 ;
-(BOOL)isNACKPacket:(char *)arg0 length:(NSUInteger)arg1 ;
-(BOOL)isRTCPPacket:(char *)arg0 length:(NSUInteger)arg1 ;
-(BOOL)processDatagramForDirectIDSDataPath:(*void)arg0 datagramSize:(unsigned int)arg1 datagramOptions:(struct ? *)arg2 error:(*id)arg3 ;
-(BOOL)setupMockIDSDatagramChannelRequiresOptions:(BOOL)arg0 ;
-(BOOL)shouldReadPacket:(struct _VCMockIDSDatagramChannelPacket *)arg0 ;
-(id)initCreateSocketRequiresOptions:(BOOL)arg0 dataPath:(int)arg1 ;
-(id)initRequiresOptions:(BOOL)arg0 ;
-(id)newArrayOfStreamIdsForPacket:(struct _VCMockIDSDatagramChannelPacket *)arg0 ;
-(int)drainUnderlyingFileDescriptor;
-(int)readyToRead;
-(int)underlyingFileDescriptor;
-(struct _VCMockIDSDatagramChannelPacket *)constructPacket:(struct _VCMockIDSDatagramChannelPacket *)arg0 datagram:(*void)arg1 datagramSize:(unsigned int)arg2 datagramOptions:(struct ? *)arg3 ;
-(void)addMediaPacketToBuffer:(char *)arg0 length:(NSUInteger)arg1 datagramOptions:(struct ? )arg2 ;
-(void)cleanup;
-(void)dealloc;
-(void)dequeueDatagramPacket:(id)arg0 ;
-(void)flushDatagramPacketsList;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)handlePacket:(struct _VCMockIDSDatagramChannelPacket *)arg0 packetHandler:(id)arg1 ;
-(void)invalidate;
-(void)osChannelInfoLog;
-(void)printDroppedPacketInfo:(struct _VCMockIDSDatagramChannelPacket *)arg0 ;
-(void)processPacket:(struct _VCMockIDSDatagramChannelPacket *)arg0 packetHandler:(id)arg1 ;
// -(void)processWriteCompletionCallback:(id)arg0 forDatagramWithSize:(unk)arg1 error:(NSUInteger)arg2  ;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)queryStatusWithOptions:(id)arg0 ;
-(void)readDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramOptions:(struct ? *)arg2 ;
-(void)readDatagramWithCompletionHandler:(id)arg0 ;
-(void)readDatagramsWithCompletionHandler:(id)arg0 ;
-(void)reportFirstPacketTimeForMKI:(id)arg0 ;
-(void)requestSessionInfoWithOptions:(id)arg0 ;
-(void)retrieveAndProcesOnePacket:(unsigned int)arg0 seq:(unsigned short)arg1 count:(int)arg2 index:(int)arg3 ;
-(void)retrieveAndProcessMediaPacketsFromBuffer:(struct tagRTCPPACKET *)arg0 packetHandler:(id)arg1 ;
-(void)setChannelPreferences:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setReadHandler:(id)arg0 ;
-(void)setReadHandlerWithOptions:(id)arg0 ;
-(void)setReadyToReadBlock:(id)arg0 ;
-(void)setUPlusOneMode:(BOOL)arg0 isInitiator:(BOOL)arg1 ;
-(void)setWiFiAssist:(BOOL)arg0 ;
-(void)setWriteCompletionHandler:(id)arg0 ;
-(void)setWriteDatagramBlock:(id)arg0 ;
-(void)setWriteDatagramsBlock:(id)arg0 ;
-(void)signalUnderlyingFileDescriptor;
-(void)start;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 flags:(struct ? )arg2 completionHandler:(id)arg3 ;


@end


#endif