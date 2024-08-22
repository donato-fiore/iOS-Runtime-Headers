// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITUPDATEEVENTTRIGGER_H
#define AWDHOMEKITUPDATEEVENTTRIGGER_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitUpdateEventTrigger : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRequestOrigin;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) int requestOrigin; // ivar: _requestOrigin
@property (nonatomic) unsigned int resultErrorCode; // ivar: _resultErrorCode
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int updateType; // ivar: _updateType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requestOriginAsString:(int)arg0 ;
-(id)updateTypeAsString:(int)arg0 ;
-(int)StringAsRequestOrigin:(id)arg0 ;
-(int)StringAsUpdateType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif