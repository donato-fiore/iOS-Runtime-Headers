// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBERMEVENT_H
#define ATXPBERMEVENT_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface ATXPBERMEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *clientModelIds; // ivar: _clientModelIds
@property (nonatomic) CGFloat dateEngaged; // ivar: _dateEngaged
@property (nonatomic) NSUInteger engagementType; // ivar: _engagementType
@property (nonatomic) CGFloat eventDate; // ivar: _eventDate
@property (nonatomic) int eventType; // ivar: _eventType
@property (retain, nonatomic) NSData *executable; // ivar: _executable
@property (nonatomic) int executableType; // ivar: _executableType
@property (nonatomic) BOOL hasDateEngaged;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasExecutable;
@property (nonatomic) BOOL hasExecutableType;


+(Class)clientModelIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientModelIdAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)executableTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(int)StringAsExecutableType:(id)arg0 ;
-(void)addClientModelId:(id)arg0 ;
-(void)clearClientModelIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif