// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTEXTUALACTIONPREDICTIONSDATACONTEXTFEATURES_H
#define CONTEXTUALACTIONPREDICTIONSDATACONTEXTFEATURES_H

@class PBCodable;
@protocol NSCopying;



@interface ContextualActionPredictionsDataContextFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int dayOfWeek; // ivar: _dayOfWeek
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay; // ivar: _hourOfDay


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