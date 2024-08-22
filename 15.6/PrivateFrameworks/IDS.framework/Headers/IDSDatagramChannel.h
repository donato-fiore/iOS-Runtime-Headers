// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDATAGRAMCHANNEL_H
#define IDSDATAGRAMCHANNEL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_IDSDatagramChannel.h"
#import "IDSDataChannelLinkContext.h"

@interface IDSDatagramChannel : NSObject {
    _IDSDatagramChannel *_internal;
}


@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;


+(id)realTimeContext;
-(?)writeDatagrams:(?)arg0 datagramsSize:(?)arg1 datagramsInfo:(?)arg2 datagramsCount:(?)arg3 optionscompletionHandler;
-(id)cachedMetadata;
-(id)description;
-(id)initWithDestination:(id)arg0 ;
-(id)initWithSocketDescriptor:(int)arg0 ;
-(int)underlyingFileDescriptor;
-(struct ? *)_setWiFiAssist:(BOOL)arg0 ;
-(void)_buildPacketBufferMetaData:(struct ? *)arg0 ;
-(void)_logReceivingStats:(NSUInteger)arg0 ;
-(void)_logSendingStats:(NSUInteger)arg0 ;
-(void)_reportFirstPacketTimeForMKI:(id)arg0 ;
-(void)_writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;
-(void)addNewIDSDataChannelLinkWithAttributes:(char *)arg0 linkAttributesLength:(unsigned short)arg1 ;
-(void)close;
-(void)dealloc;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)generateMetadataWithDatagramInfo:(struct ? )arg0 options:(struct ? *)arg1 currentDatagramCount:(unsigned char)arg2 totalDatagramCount:(unsigned char)arg3 byteBuffer:(struct ? *)arg4 ;
-(void)invalidate;
-(void)osChannelInfoLog;
-(void)processMetadataForDatagram:(char *)arg0 size:(NSUInteger)arg1 datagramInfo:(struct ? *)arg2 options:(struct ? *)arg3 ;
-(void)queryStatusWithOptions:(id)arg0 ;
-(void)readDatagramWithCompletionHandler:(id)arg0 ;
-(void)readDatagramsWithCompletionHandler:(id)arg0 ;
-(void)readyToRead;
-(void)removeIDSDataChannelLinkContext:(char)arg0 linkUUID:(id)arg1 reason:(unsigned char)arg2 ;
-(void)reportFirstPacketTimeForMKI:(id)arg0 ;
-(void)requestSessionInfoWithOptions:(id)arg0 ;
-(void)selectDefaultLink:(char)arg0 ;
-(void)sendEventConnectedWithDummyLinkInfo;
-(void)sendMediaEncryptionInfoWithMKM:(id)arg0 MKS:(id)arg1 MKI:(id)arg2 isLocallyGenerated:(BOOL)arg3 encryptionSequenceNumber:(NSUInteger)arg4 ;
-(void)sendMediaMembershipChangedInfo:(unsigned char)arg0 ;
-(void)sendMetadata;
-(void)setChannelPreferences:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setReadHandler:(id)arg0 ;
-(void)setReadHandlerWithOptions:(id)arg0 ;
-(void)setUPlusOneMode:(BOOL)arg0 isInitiator:(BOOL)arg1 ;
-(void)setWiFiAssist:(BOOL)arg0 ;
-(void)start;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)startMKMRecoveryForParticipantIDs:(id)arg0 ;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 flags:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)writeDatagrams:(**void)arg0 datagramSizes:(*unsigned int)arg1 datagramInfo:(struct ? )arg2 datagramCount:(int)arg3 options:(struct ? *)arg4 completionHandler:(id)arg5 ;


@end


#endif