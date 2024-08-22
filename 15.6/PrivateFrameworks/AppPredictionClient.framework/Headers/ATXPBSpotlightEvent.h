// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBSPOTLIGHTEVENT_H
#define ATXPBSPOTLIGHTEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXPBSpotlightEventMetadata.h"

@interface ATXPBSpotlightEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionBlendingCacheId; // ivar: _actionBlendingCacheId
@property (retain, nonatomic) NSString *actionConsumerSubType; // ivar: _actionConsumerSubType
@property (retain, nonatomic) NSMutableArray *actionSuggestionIds; // ivar: _actionSuggestionIds
@property (retain, nonatomic) NSString *appBlendingCacheId; // ivar: _appBlendingCacheId
@property (retain, nonatomic) NSString *appConsumerSubType; // ivar: _appConsumerSubType
@property (retain, nonatomic) NSMutableArray *appSuggestionIds; // ivar: _appSuggestionIds
@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasActionBlendingCacheId;
@property (readonly, nonatomic) BOOL hasActionConsumerSubType;
@property (readonly, nonatomic) BOOL hasAppBlendingCacheId;
@property (readonly, nonatomic) BOOL hasAppConsumerSubType;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) ATXPBSpotlightEventMetadata *metadata; // ivar: _metadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionSuggestionIdsAtIndex:(NSUInteger)arg0 ;
-(id)appSuggestionIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)addActionSuggestionIds:(id)arg0 ;
-(void)addAppSuggestionIds:(id)arg0 ;
-(void)clearActionSuggestionIds;
-(void)clearAppSuggestionIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif