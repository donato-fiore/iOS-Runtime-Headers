// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDMAILAUTOFETCHREPORT_H
#define AWDMAILAUTOFETCHREPORT_H

@class PBCodable;
@protocol NSCopying;


#import "AWDMailError.h"

@interface AWDMailAutoFetchReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger bucketedLocalNonDeletedCount; // ivar: _bucketedLocalNonDeletedCount
@property (nonatomic) BOOL didTimeout; // ivar: _didTimeout
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) int emailProvider; // ivar: _emailProvider
@property (nonatomic) NSUInteger fetchSize; // ivar: _fetchSize
@property (nonatomic) BOOL foreground; // ivar: _foreground
@property (nonatomic) BOOL hasBucketedLocalNonDeletedCount;
@property (nonatomic) BOOL hasDidTimeout;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEmailProvider;
@property (nonatomic) BOOL hasFetchSize;
@property (nonatomic) BOOL hasForeground;
@property (readonly, nonatomic) BOOL hasMailError;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) BOOL hasNewMessagesState;
@property (nonatomic) BOOL hasNumMessagesFetched;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalBytesReceived;
@property (nonatomic) BOOL hasTotalBytesSent;
@property (nonatomic) BOOL hasTrigger;
@property (retain, nonatomic) AWDMailError *mailError; // ivar: _mailError
@property (nonatomic) int mailboxType; // ivar: _mailboxType
@property (nonatomic) int newMessagesState; // ivar: _newMessagesState
@property (nonatomic) NSUInteger numMessagesFetched; // ivar: _numMessagesFetched
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) int protocol; // ivar: _protocol
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int totalBytesReceived; // ivar: _totalBytesReceived
@property (nonatomic) int totalBytesSent; // ivar: _totalBytesSent
@property (nonatomic) int trigger; // ivar: _trigger


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emailProviderAsString:(int)arg0 ;
-(id)mailboxTypeAsString:(int)arg0 ;
-(id)newMessagesStateAsString:(int)arg0 ;
-(id)protocolAsString:(int)arg0 ;
-(id)totalBytesReceivedAsString:(int)arg0 ;
-(id)totalBytesSentAsString:(int)arg0 ;
-(id)triggerAsString:(int)arg0 ;
-(int)StringAsEmailProvider:(id)arg0 ;
-(int)StringAsMailboxType:(id)arg0 ;
-(int)StringAsNewMessagesState:(id)arg0 ;
-(int)StringAsProtocol:(id)arg0 ;
-(int)StringAsTotalBytesReceived:(id)arg0 ;
-(int)StringAsTotalBytesSent:(id)arg0 ;
-(int)StringAsTrigger:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif