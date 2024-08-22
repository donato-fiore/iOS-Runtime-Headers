// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEPBRECORD_H
#define ATXMODEPBRECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXModePBRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTimezone;
@property (readonly, nonatomic) BOOL hasUserID;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int timezone; // ivar: _timezone
@property (retain, nonatomic) NSString *userID; // ivar: _userID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif