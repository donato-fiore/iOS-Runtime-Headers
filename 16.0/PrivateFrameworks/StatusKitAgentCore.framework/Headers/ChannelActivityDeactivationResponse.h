// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHANNELACTIVITYDEACTIVATIONRESPONSE_H
#define CHANNELACTIVITYDEACTIVATIONRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ChannelActivityDeactivationResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasServerTimestampSeconds;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) NSUInteger serverTimestampSeconds; // ivar: _serverTimestampSeconds
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif