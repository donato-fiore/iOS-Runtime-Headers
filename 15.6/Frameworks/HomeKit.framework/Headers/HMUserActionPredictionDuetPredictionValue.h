// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERACTIONPREDICTIONDUETPREDICTIONVALUE_H
#define HMUSERACTIONPREDICTIONDUETPREDICTIONVALUE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMUserActionPredictionDuetPredictionValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasHomeIdentifier;
@property (nonatomic) BOOL hasPredictionType;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasTargetAccessoryServiceIdentifier;
@property (readonly, nonatomic) BOOL hasTargetIdentifier;
@property (retain, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (nonatomic) int predictionType; // ivar: _predictionType
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *targetAccessoryServiceIdentifier; // ivar: _targetAccessoryServiceIdentifier
@property (retain, nonatomic) NSString *targetIdentifier; // ivar: _targetIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)predictionTypeAsString:(int)arg0 ;
-(int)StringAsPredictionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif