// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMAILMESSAGELOADINGREPORT_H
#define AWDMAILMESSAGELOADINGREPORT_H

@class PBCodable;
@protocol NSCopying;


#import "AWDMailMessage.h"

@interface AWDMailMessageLoadingReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasTimeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) AWDMailMessage *message; // ivar: _message
@property (nonatomic) NSInteger timeLoadingSpinnerIsVisibleInSeconds; // ivar: _timeLoadingSpinnerIsVisibleInSeconds
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithMailMessage:(id)arg0 loadingSpinnerIsVisibleTimeInSeconds:(NSInteger)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif