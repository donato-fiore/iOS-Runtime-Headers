// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPSATELLITEINFO_H
#define CLPSATELLITEINFO_H

@class PBCodable;
@protocol NSCopying;



@interface CLPSatelliteInfo : PBCodable <NSCopying>

 {
    ? _azimuths;
    ? _cnos;
    ? _elevations;
    ? _isUsedInFixes;
    ? _satIds;
}


@property (readonly, nonatomic) *int azimuths;
@property (readonly, nonatomic) NSUInteger azimuthsCount;
@property (readonly, nonatomic) *int cnos;
@property (readonly, nonatomic) NSUInteger cnosCount;
@property (readonly, nonatomic) *int elevations;
@property (readonly, nonatomic) NSUInteger elevationsCount;
@property (readonly, nonatomic) *BOOL isUsedInFixes;
@property (readonly, nonatomic) NSUInteger isUsedInFixesCount;
@property (readonly, nonatomic) *int satIds;
@property (readonly, nonatomic) NSUInteger satIdsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUsedInFixesAtIndex:(NSUInteger)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)azimuthsAtIndex:(NSUInteger)arg0 ;
-(int)cnosAtIndex:(NSUInteger)arg0 ;
-(int)elevationsAtIndex:(NSUInteger)arg0 ;
-(int)satIdsAtIndex:(NSUInteger)arg0 ;
-(void)addAzimuths:(int)arg0 ;
-(void)addCnos:(int)arg0 ;
-(void)addElevations:(int)arg0 ;
-(void)addIsUsedInFixes:(BOOL)arg0 ;
-(void)addSatIds:(int)arg0 ;
-(void)clearAzimuths;
-(void)clearCnos;
-(void)clearElevations;
-(void)clearIsUsedInFixes;
-(void)clearSatIds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif