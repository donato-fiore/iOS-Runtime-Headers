// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIMETRICSSUBMODELSTATS_H
#define SGMIMETRICSSUBMODELSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsSubmodelStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int ageOfTheSubmodelInDays; // ivar: _ageOfTheSubmodelInDays
@property (nonatomic) BOOL hasAgeOfTheSubmodelInDays;
@property (nonatomic) BOOL hasNbExtremelyDiscriminantTokensForIgnorability;
@property (nonatomic) BOOL hasNbExtremelyDiscriminantTokensForSaliency;
@property (nonatomic) BOOL hasNbHighlyDiscriminantTokensForIgnorability;
@property (nonatomic) BOOL hasNbHighlyDiscriminantTokensForSaliency;
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForIgnorability; // ivar: _nbExtremelyDiscriminantTokensForIgnorability
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForSaliency; // ivar: _nbExtremelyDiscriminantTokensForSaliency
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForIgnorability; // ivar: _nbHighlyDiscriminantTokensForIgnorability
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForSaliency; // ivar: _nbHighlyDiscriminantTokensForSaliency


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