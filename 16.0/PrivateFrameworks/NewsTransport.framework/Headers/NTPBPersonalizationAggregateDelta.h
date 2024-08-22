// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPERSONALIZATIONAGGREGATEDELTA_H
#define NTPBPERSONALIZATIONAGGREGATEDELTA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying>

 {
    ? _events;
    ? _has;
}


@property (nonatomic) CGFloat defaultClicks; // ivar: _defaultClicks
@property (nonatomic) CGFloat defaultImpressions; // ivar: _defaultImpressions
@property (readonly, nonatomic) *unsigned int events;
@property (readonly, nonatomic) NSUInteger eventsCount;
@property (retain, nonatomic) NSString *featureKey; // ivar: _featureKey
@property (nonatomic) CGFloat groupBias; // ivar: _groupBias
@property (nonatomic) BOOL hasDefaultClicks;
@property (nonatomic) BOOL hasDefaultImpressions;
@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (nonatomic) BOOL hasGroupBias;
@property (nonatomic) BOOL hasImpressionBias;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CGFloat impressionBias; // ivar: _impressionBias
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)eventsAtIndex:(NSUInteger)arg0 ;
-(void)addEvents:(unsigned int)arg0 ;
-(void)clearEvents;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif