// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPIONOSPHEREDATA_H
#define CLPIONOSPHEREDATA_H

@class PBCodable;
@protocol NSCopying;



@interface CLPIonosphereData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat applicableTimeSec; // ivar: _applicableTimeSec
@property (nonatomic) CGFloat d2vtecDphi2; // ivar: _d2vtecDphi2
@property (nonatomic) CGFloat d2vtecDtheta2; // ivar: _d2vtecDtheta2
@property (nonatomic) CGFloat d2vtecDthetaphi; // ivar: _d2vtecDthetaphi
@property (nonatomic) CGFloat dvtecDphi; // ivar: _dvtecDphi
@property (nonatomic) CGFloat dvtecDtheta; // ivar: _dvtecDtheta
@property (nonatomic) CGFloat estimatorAgeSec; // ivar: _estimatorAgeSec
@property (nonatomic) CGFloat geodeticAltitudeM; // ivar: _geodeticAltitudeM
@property (nonatomic) BOOL hasApplicableTimeSec;
@property (nonatomic) BOOL hasD2vtecDphi2;
@property (nonatomic) BOOL hasD2vtecDtheta2;
@property (nonatomic) BOOL hasD2vtecDthetaphi;
@property (nonatomic) BOOL hasDvtecDphi;
@property (nonatomic) BOOL hasDvtecDtheta;
@property (nonatomic) BOOL hasEstimatorAgeSec;
@property (nonatomic) BOOL hasGeodeticAltitudeM;
@property (nonatomic) BOOL hasHmaxKm;
@property (nonatomic) BOOL hasLatitudeDeg;
@property (nonatomic) BOOL hasLongitudeDeg;
@property (nonatomic) BOOL hasPd2vtecDphi2D2vtecDphi2;
@property (nonatomic) BOOL hasPd2vtecDtheta2D2vtecDtheta2;
@property (nonatomic) BOOL hasPd2vtecDthetadphiD2vtecDthetadphi;
@property (nonatomic) BOOL hasPdvtecDphiDvtecDphi;
@property (nonatomic) BOOL hasPdvtecDthetaDvtecDtheta;
@property (nonatomic) BOOL hasPhmaxHmaxKm2;
@property (nonatomic) BOOL hasPvtec0Vtec0;
@property (nonatomic) BOOL hasVtec0;
@property (nonatomic) CGFloat hmaxKm; // ivar: _hmaxKm
@property (nonatomic) CGFloat latitudeDeg; // ivar: _latitudeDeg
@property (nonatomic) CGFloat longitudeDeg; // ivar: _longitudeDeg
@property (nonatomic) CGFloat pd2vtecDphi2D2vtecDphi2; // ivar: _pd2vtecDphi2D2vtecDphi2
@property (nonatomic) CGFloat pd2vtecDtheta2D2vtecDtheta2; // ivar: _pd2vtecDtheta2D2vtecDtheta2
@property (nonatomic) CGFloat pd2vtecDthetadphiD2vtecDthetadphi; // ivar: _pd2vtecDthetadphiD2vtecDthetadphi
@property (nonatomic) CGFloat pdvtecDphiDvtecDphi; // ivar: _pdvtecDphiDvtecDphi
@property (nonatomic) CGFloat pdvtecDthetaDvtecDtheta; // ivar: _pdvtecDthetaDvtecDtheta
@property (nonatomic) CGFloat phmaxHmaxKm2; // ivar: _phmaxHmaxKm2
@property (nonatomic) CGFloat pvtec0Vtec0; // ivar: _pvtec0Vtec0
@property (nonatomic) CGFloat vtec0; // ivar: _vtec0


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