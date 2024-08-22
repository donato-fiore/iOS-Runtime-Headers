// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADCLIENTSETTINGSRESPONSE_H
#define ADCLIENTSETTINGSRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ADClientSettingsResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL hasExpirationDate;
@property (retain, nonatomic) NSMutableArray *searchAdsSettingsParams; // ivar: _searchAdsSettingsParams
@property (retain, nonatomic) NSMutableArray *searchLandingAdsSettingsParams; // ivar: _searchLandingAdsSettingsParams


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)searchAdsSettingsParamsAtIndex:(NSUInteger)arg0 ;
-(id)searchLandingAdsSettingsParamsAtIndex:(NSUInteger)arg0 ;
-(void)addSearchAdsSettingsParams:(id)arg0 ;
-(void)addSearchLandingAdsSettingsParams:(id)arg0 ;
-(void)clearSearchAdsSettingsParams;
-(void)clearSearchLandingAdsSettingsParams;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif