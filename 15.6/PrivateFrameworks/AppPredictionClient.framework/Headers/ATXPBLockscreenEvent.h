// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBLOCKSCREENEVENT_H
#define ATXPBLOCKSCREENEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ATXPBLockscreenEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *blendingCacheId; // ivar: _blendingCacheId
@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasEventType;
@property (retain, nonatomic) NSMutableArray *suggestionIds; // ivar: _suggestionIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)suggestionIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)addSuggestionIds:(id)arg0 ;
-(void)clearSuggestionIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif