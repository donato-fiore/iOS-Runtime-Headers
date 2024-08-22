// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONVIOINERTIALCOVARIANCEINFO_H
#define CLPLOGENTRYVISIONVIOINERTIALCOVARIANCEINFO_H

@class PBCodable;
@protocol NSCopying;



@interface CLPLOGENTRYVISIONVIOInertialCovarianceInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int accelBiasCovOffset; // ivar: _accelBiasCovOffset
@property (nonatomic) unsigned int accelBiasDof; // ivar: _accelBiasDof
@property (nonatomic) unsigned int covarianceSize; // ivar: _covarianceSize
@property (nonatomic) NSUInteger covarianceSizeInBytes; // ivar: _covarianceSizeInBytes
@property (nonatomic) unsigned int gyroBiasCovOffset; // ivar: _gyroBiasCovOffset
@property (nonatomic) unsigned int gyroBiasDof; // ivar: _gyroBiasDof
@property (nonatomic) BOOL hasAccelBiasCovOffset;
@property (nonatomic) BOOL hasAccelBiasDof;
@property (nonatomic) BOOL hasCovarianceSize;
@property (nonatomic) BOOL hasCovarianceSizeInBytes;
@property (nonatomic) BOOL hasGyroBiasCovOffset;
@property (nonatomic) BOOL hasGyroBiasDof;
@property (nonatomic) BOOL hasOrientationCovOffset;
@property (nonatomic) BOOL hasOrientationDof;
@property (nonatomic) BOOL hasPositionCovOffset;
@property (nonatomic) BOOL hasPositionDof;
@property (nonatomic) BOOL hasVelocityCovOffset;
@property (nonatomic) BOOL hasVelocityDof;
@property (nonatomic) unsigned int orientationCovOffset; // ivar: _orientationCovOffset
@property (nonatomic) unsigned int orientationDof; // ivar: _orientationDof
@property (nonatomic) unsigned int positionCovOffset; // ivar: _positionCovOffset
@property (nonatomic) unsigned int positionDof; // ivar: _positionDof
@property (nonatomic) unsigned int velocityCovOffset; // ivar: _velocityCovOffset
@property (nonatomic) unsigned int velocityDof; // ivar: _velocityDof


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