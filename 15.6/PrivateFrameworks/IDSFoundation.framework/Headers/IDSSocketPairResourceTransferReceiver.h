// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSOCKETPAIRRESOURCETRANSFERRECEIVER_H
#define IDSSOCKETPAIRRESOURCETRANSFERRECEIVER_H

@class NSString, NSDictionary, NSData, NSDate;
@protocol IDSSocketPairMessage;

#import <Foundation/Foundation.h>


@interface IDSSocketPairResourceTransferReceiver : NSObject <IDSSocketPairMessage>

 {
    NSString *_resourcePath;
    NSDictionary *_metadata;
    int _fileDescriptor;
    NSUInteger _totalBytesExpected;
    BOOL _done;
    BOOL _isResuming;
    BOOL _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (retain, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, nonatomic) NSString *messageUUID; // ivar: _messageUUID
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSUInteger totalBytesReceived; // ivar: _totalBytesReceived
@property (readonly, nonatomic) BOOL wantsAppAck;


+(id)incomingFilePath;
+(id)incomingFilePathForMessageUUID:(id)arg0 ;
+(id)modernIncomingFilePath;
-(BOOL)appendMessage:(id)arg0 receiverError:(*unsigned char)arg1 ;
-(BOOL)writeResourceData:(id)arg0 ;
-(BOOL)writeResourceData:(id)arg0 resourceByteOffset:(NSUInteger)arg1 ;
-(id)finalizedMessageDictionaryIfDone;
-(id)initWithMessage:(id)arg0 resumeResourceTransfers:(BOOL)arg1 receiverError:(*unsigned char)arg2 ;
-(void)abortTransfer;
-(void)dealloc;


@end


#endif