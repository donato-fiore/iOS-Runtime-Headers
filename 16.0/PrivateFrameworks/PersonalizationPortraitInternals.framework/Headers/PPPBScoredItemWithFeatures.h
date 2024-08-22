// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPBSCOREDITEMWITHFEATURES_H
#define PPPBSCOREDITEMWITHFEATURES_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *features; // ivar: _features
@property (retain, nonatomic) NSMutableArray *feedbackItems; // ivar: _feedbackItems
@property (readonly, nonatomic) BOOL hasNamedEntity;
@property (readonly, nonatomic) BOOL hasNamedEntityWithFeedback;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasTopicId;
@property (retain, nonatomic) NSString *namedEntity; // ivar: _namedEntity
@property (retain, nonatomic) NSString *namedEntityWithFeedback; // ivar: _namedEntityWithFeedback
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) NSUInteger topicId; // ivar: _topicId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)featuresAtIndex:(NSUInteger)arg0 ;
-(id)feedbackItemsAtIndex:(NSUInteger)arg0 ;
-(void)addFeatures:(id)arg0 ;
-(void)addFeedbackItems:(id)arg0 ;
-(void)clearFeatures;
-(void)clearFeedbackItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif