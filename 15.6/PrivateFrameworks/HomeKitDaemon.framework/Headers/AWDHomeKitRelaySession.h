// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITRELAYSESSION_H
#define AWDHOMEKITRELAYSESSION_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitRelaySession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int actionType; // ivar: _actionType
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int statusCode; // ivar: _statusCode
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsActionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif