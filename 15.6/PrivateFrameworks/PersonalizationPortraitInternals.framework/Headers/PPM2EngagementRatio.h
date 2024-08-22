// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPM2ENGAGEMENTRATIO_H
#define PPM2ENGAGEMENTRATIO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2EngagementRatio : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (nonatomic) int domain; // ivar: _domain
@property (nonatomic) unsigned int engagedCount; // ivar: _engagedCount
@property (nonatomic) unsigned int evaluatedCount; // ivar: _evaluatedCount
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasEngagedCount;
@property (nonatomic) BOOL hasEvaluatedCount;
@property (nonatomic) BOOL hasK;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (nonatomic) BOOL hasOfferedCount;
@property (nonatomic) BOOL hasRejectedCount;
@property (nonatomic) unsigned int k; // ivar: _k
@property (retain, nonatomic) NSString *mappingId; // ivar: _mappingId
@property (nonatomic) unsigned int offeredCount; // ivar: _offeredCount
@property (nonatomic) unsigned int rejectedCount; // ivar: _rejectedCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif