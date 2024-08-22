// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVIGATIONGUIDANCESTATE_H
#define GEONAVIGATIONGUIDANCESTATE_H

@class PBCodable;
@protocol NSCopying;



@interface GEONavigationGuidanceState : PBCodable <NSCopying>

 {
    int _guidanceLevelIgnoringTimeCriterion;
    int _guidanceLevel;
    int _navigationState;
    int _navigationType;
    int _trackedTransportType;
    BOOL _shouldSuppressCellularDataAlerts;
    ? _flags;
}


@property (nonatomic) int guidanceLevel;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL hasGuidanceLevel;
@property (nonatomic) BOOL hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL hasNavigationState;
@property (nonatomic) BOOL hasNavigationType;
@property (nonatomic) BOOL hasShouldSuppressCellularDataAlerts;
@property (nonatomic) BOOL hasTrackedTransportType;
@property (nonatomic) int navigationState;
@property (nonatomic) int navigationType;
@property (nonatomic) BOOL shouldSuppressCellularDataAlerts;
@property (nonatomic) int trackedTransportType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)guidanceLevelAsString:(int)arg0 ;
-(id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithGuidanceLevel:(int)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithTransportType:(int)arg0 ;
-(id)jsonRepresentation;
-(id)navigationStateAsString:(int)arg0 ;
-(id)navigationTypeAsString:(int)arg0 ;
-(id)trackedTransportTypeAsString:(int)arg0 ;
-(int)StringAsGuidanceLevel:(id)arg0 ;
-(int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg0 ;
-(int)StringAsNavigationState:(id)arg0 ;
-(int)StringAsNavigationType:(id)arg0 ;
-(int)StringAsTrackedTransportType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif