// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPM2FEEDBACKATK_H
#define PPM2FEEDBACKATK_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2FeedbackAtK : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (nonatomic) unsigned int bucket; // ivar: _bucket
@property (nonatomic) int domain; // ivar: _domain
@property (nonatomic) unsigned int evaluatedCount; // ivar: _evaluatedCount
@property (nonatomic) int feedbackType; // ivar: _feedbackType
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasEvaluatedCount;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) BOOL hasK;
@property (nonatomic) unsigned int k; // ivar: _k


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(id)feedbackTypeAsString:(int)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(int)StringAsFeedbackType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif