// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMOCKIDSDATAGRAMCHANNEL_H
#define VCMOCKIDSDATAGRAMCHANNEL_H

@class IDSDatagramChannel, NSDictionary, NSLock;


#import "VCMockIDSDataChannelLinkContext.h"

@interface VCMockIDSDatagramChannel : IDSDatagramChannel {
    NSDictionary *_subscribedStreamsByParticipantID;
    int _socket;
    BOOL _isValid;
    VCMockIDSDataChannelLinkContext *_linkContext;
    id *_eventHandler;
    id *_readHandler;
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
    _opaque_pthread_mutex_t _streamSubscriptionLock;
    NSInteger _participantGenerationCounter;
    BOOL _isTestingOneToOneMode;
    unsigned short numPacketSent;
    unsigned short numPacketReceived;
}




-(?)writeDatagrams:(?)arg0 datagramsSize:(?)arg1 datagramsInfo:(?)arg2 datagramsCount:(?)arg3 optionscompletionHandler;
-(BOOL)createSocket;
-(BOOL)enqueueDatagramPacket:(*void)arg0 datagramSize:(unsigned int)arg1 options:(struct ? *)arg2 error:(*id)arg3 ;
-(BOOL)isControlChannelDatagram:(struct _VCMockIDSDatagramChannelPacket *)arg0 ;
-(BOOL)setupMockIDSDatagramChannelRequiresOptions:(BOOL)arg0 ;
-(BOOL)shouldReadPacket:(struct _VCMockIDSDatagramChannelPacket *)arg0 ;
-(id)initCreateSocketRequiresOptions:(BOOL)arg0 ;
-(id)initRequiresOptions:(BOOL)arg0 ;
-(id)newArrayOfStreamIdsForPacket:(struct _VCMockIDSDatagramChannelPacket *)arg0 ;
-(int)drainUnderlyingFileDescriptor;
-(int)readyToRead;
-(int)underlyingFileDescriptor;
-(void)cleanup;
-(void)dealloc;
-(void)dequeueDatagramPacket:(id)arg0 ;
-(void)flushDatagramPacketsList;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)invalidate;
-(void)osChannelInfoLog;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)queryStatusWithOptions:(id)arg0 ;
-(void)readDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramOptions:(struct ? *)arg2 ;
-(void)readDatagramWithCompletionHandler:(id)arg0 ;
-(void)readDatagramsWithCompletionHandler:(id)arg0 ;
-(void)reportFirstPacketTimeForMKI:(id)arg0 ;
-(void)requestSessionInfoWithOptions:(id)arg0 ;
-(void)setChannelPreferences:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setReadHandler:(id)arg0 ;
-(void)setReadHandlerWithOptions:(id)arg0 ;
-(void)setReadyToReadBlock:(id)arg0 ;
-(void)setUPlusOneMode:(BOOL)arg0 ;
-(void)setWiFiAssist:(BOOL)arg0 ;
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