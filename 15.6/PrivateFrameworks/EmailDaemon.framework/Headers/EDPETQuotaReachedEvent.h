// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPETQUOTAREACHEDEVENT_H
#define EDPETQUOTAREACHEDEVENT_H

@class PBCodable;
@protocol EDPETMessageFrameTypeIntrospectable, NSCopying;



@interface EDPETQuotaReachedEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger droppedEventsCount; // ivar: _droppedEventsCount
@property (nonatomic) BOOL hasDroppedEventsCount;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTimezoneOffset;
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int timezoneOffset; // ivar: _timezoneOffset


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)messageFrameType;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif