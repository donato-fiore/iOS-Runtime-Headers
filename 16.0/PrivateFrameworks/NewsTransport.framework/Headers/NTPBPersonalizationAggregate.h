// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPERSONALIZATIONAGGREGATE_H
#define NTPBPERSONALIZATIONAGGREGATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBPersonalizationAggregate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat clicks; // ivar: _clicks
@property (nonatomic) NSUInteger eventCount; // ivar: _eventCount
@property (retain, nonatomic) NSString *featureKey; // ivar: _featureKey
@property (nonatomic) BOOL hasClicks;
@property (nonatomic) BOOL hasEventCount;
@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CGFloat impressions; // ivar: _impressions
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif