// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTDAILYUSESUMMARY_H
#define GEOLOGMSGEVENTDAILYUSESUMMARY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying>

 {
    CGFloat _firstEventDate;
    NSMutableArray *_useEvents;
    ? _flags;
}


@property (nonatomic) CGFloat firstEventDate;
@property (nonatomic) BOOL hasFirstEventDate;
@property (retain, nonatomic) NSMutableArray *useEvents;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)useEventsAtIndex:(NSUInteger)arg0 ;
-(void)addUseEvents:(id)arg0 ;
-(void)clearUseEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif