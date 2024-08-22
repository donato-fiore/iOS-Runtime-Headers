// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELPBANCHORMETADATA_H
#define ATXANCHORMODELPBANCHORMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXAnchorModelPBAnchorMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *anchorEventIdentifier; // ivar: _anchorEventIdentifier
@property (nonatomic) int anchorEventType; // ivar: _anchorEventType
@property (nonatomic) int anchorType; // ivar: _anchorType
@property (nonatomic) unsigned int dayOfMonth; // ivar: _dayOfMonth
@property (nonatomic) int dayOfWeek; // ivar: _dayOfWeek
@property (readonly, nonatomic) BOOL hasAnchorEventIdentifier;
@property (nonatomic) BOOL hasAnchorEventType;
@property (nonatomic) BOOL hasAnchorType;
@property (nonatomic) BOOL hasDayOfMonth;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasHourOfDay;
@property (readonly, nonatomic) BOOL hasLocationIdentifier;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) unsigned int hourOfDay; // ivar: _hourOfDay
@property (retain, nonatomic) NSString *locationIdentifier; // ivar: _locationIdentifier
@property (nonatomic) int locationType; // ivar: _locationType
@property (nonatomic) unsigned int month; // ivar: _month


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)anchorEventTypeAsString:(int)arg0 ;
-(id)anchorTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dayOfWeekAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationTypeAsString:(int)arg0 ;
-(int)StringAsAnchorEventType:(id)arg0 ;
-(int)StringAsAnchorType:(id)arg0 ;
-(int)StringAsDayOfWeek:(id)arg0 ;
-(int)StringAsLocationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif