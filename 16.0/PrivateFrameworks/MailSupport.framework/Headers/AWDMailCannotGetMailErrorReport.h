// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMAILCANNOTGETMAILERRORREPORT_H
#define AWDMAILCANNOTGETMAILERRORREPORT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "AWDMailError.h"

@interface AWDMailCannotGetMailErrorReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasHostname;
@property (readonly, nonatomic) BOOL hasMailError;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) BOOL hasServerInfo;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *hostname; // ivar: _hostname
@property (retain, nonatomic) AWDMailError *mailError; // ivar: _mailError
@property (nonatomic) int protocol; // ivar: _protocol
@property (nonatomic) int provider; // ivar: _provider
@property (retain, nonatomic) NSString *serverInfo; // ivar: _serverInfo
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)protocolAsString:(int)arg0 ;
-(id)providerAsString:(int)arg0 ;
-(int)StringAsProtocol:(id)arg0 ;
-(int)StringAsProvider:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif