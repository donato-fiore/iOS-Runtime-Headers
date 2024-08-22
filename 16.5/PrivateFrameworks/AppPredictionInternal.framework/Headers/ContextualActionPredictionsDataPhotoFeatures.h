// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTEXTUALACTIONPREDICTIONSDATAPHOTOFEATURES_H
#define CONTEXTUALACTIONPREDICTIONSDATAPHOTOFEATURES_H

@class PBCodable;
@protocol NSCopying;



@interface ContextualActionPredictionsDataPhotoFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsPhotoWithPeople;
@property (nonatomic) BOOL hasIsPhotoWithText;
@property (nonatomic) BOOL hasIsRotationCandidate;
@property (nonatomic) BOOL hasIsScreenshot;
@property (nonatomic) BOOL hasIsTrimCandidate;
@property (nonatomic) BOOL isPhotoWithPeople; // ivar: _isPhotoWithPeople
@property (nonatomic) BOOL isPhotoWithText; // ivar: _isPhotoWithText
@property (nonatomic) BOOL isRotationCandidate; // ivar: _isRotationCandidate
@property (nonatomic) BOOL isScreenshot; // ivar: _isScreenshot
@property (nonatomic) BOOL isTrimCandidate; // ivar: _isTrimCandidate


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