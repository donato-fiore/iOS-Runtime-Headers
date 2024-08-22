// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSPBCONTENTFEATURES_H
#define ATXNOTIFICATIONSPBCONTENTFEATURES_H

@class PBCodable;
@protocol NSCopying;



@interface ATXNotificationsPBContentFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxEntityScore;
@property (nonatomic) BOOL hasSumCount;
@property (nonatomic) BOOL hasTitleMatch;
@property (nonatomic) BOOL hasUniqueCount;
@property (nonatomic) float maxEntityScore; // ivar: _maxEntityScore
@property (nonatomic) float sumCount; // ivar: _sumCount
@property (nonatomic) float titleMatch; // ivar: _titleMatch
@property (nonatomic) float uniqueCount; // ivar: _uniqueCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif