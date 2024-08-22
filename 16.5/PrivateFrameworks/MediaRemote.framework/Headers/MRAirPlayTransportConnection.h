// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAIRPLAYTRANSPORTCONNECTION_H
#define MRAIRPLAYTRANSPORTCONNECTION_H

@class APReceiverMediaRemoteCommunicationChannel, NSDate, NSString, AVOutputContextCommunicationChannel, AVOutputDeviceCommunicationChannel;
@protocol AVOutputDeviceCommunicationChannelDelegate;


#import "MRExternalDeviceTransportConnection.h"
#import "MROSTransaction.h"

@interface MRAirPlayTransportConnection : MRExternalDeviceTransportConnection <AVOutputDeviceCommunicationChannelDelegate>



@property (readonly, nonatomic) APReceiverMediaRemoteCommunicationChannel *apCommunicationChannel; // ivar: _apCommunicationChannel
@property (nonatomic) BOOL channelClosed; // ivar: _channelClosed
@property (retain, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *effectiveChannel;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *mostRecentMessageReceivedDate; // ivar: _mostRecentMessageReceivedDate
@property (retain, nonatomic) NSDate *mostRecentMessageSentDate; // ivar: _mostRecentMessageSentDate
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *outputContextCommunicationChannel; // ivar: _outputContextCommunicationChannel
@property (readonly, nonatomic) AVOutputDeviceCommunicationChannel *outputDeviceCommunicationChannel; // ivar: _outputDeviceCommunicationChannel
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger totalBytesReceivedCount; // ivar: _totalBytesReceivedCount
@property (nonatomic) NSUInteger totalBytesSentCount; // ivar: _totalBytesSentCount
@property (nonatomic) NSUInteger totalMessagesReceivedCount; // ivar: _totalMessagesReceivedCount
@property (nonatomic) NSUInteger totalMessagesSentCount; // ivar: _totalMessagesSentCount
@property (retain, nonatomic) MROSTransaction *transaction; // ivar: _transaction


-(BOOL)isValid;
-(NSUInteger)_sendTransportData:(id)arg0 ;
-(NSUInteger)sendTransportData:(id)arg0 options:(id)arg1 ;
-(id)_init;
-(id)initWithAPCommunicationChannel:(id)arg0 ;
-(id)initWithOutputContextCommunicationChannel:(id)arg0 outputContext:(id)arg1 ;
-(id)initWithOutputDeviceCommunicationChannel:(id)arg0 ;
-(void)closeWithError:(id)arg0 ;
-(void)communicationChannel:(id)arg0 didReceiveData:(id)arg1 ;
-(void)communicationChannelDidClose:(id)arg0 ;
-(void)ingestData:(id)arg0 ;


@end


#endif