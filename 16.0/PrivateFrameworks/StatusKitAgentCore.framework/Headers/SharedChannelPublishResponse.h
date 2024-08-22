// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDCHANNELPUBLISHRESPONSE_H
#define SHAREDCHANNELPUBLISHRESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface SharedChannelPublishResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRetryIntervalSeconds;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int retryIntervalSeconds; // ivar: _retryIntervalSeconds
@property (nonatomic) int status; // ivar: _status


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