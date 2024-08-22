// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDMAILMESSAGEDISPLAYERRORREPORT_H
#define AWDMAILMESSAGEDISPLAYERRORREPORT_H

@class PBCodable;
@protocol NSCopying;


#import "AWDMailMessage.h"

@interface AWDMailMessageDisplayErrorReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLoadingError;
@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasMimeError;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int loadingError; // ivar: _loadingError
@property (retain, nonatomic) AWDMailMessage *message; // ivar: _message
@property (nonatomic) int mimeError; // ivar: _mimeError
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)loadingErrorAsString:(int)arg0 ;
-(id)mimeErrorAsString:(int)arg0 ;
-(int)StringAsLoadingError:(id)arg0 ;
-(int)StringAsMimeError:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif