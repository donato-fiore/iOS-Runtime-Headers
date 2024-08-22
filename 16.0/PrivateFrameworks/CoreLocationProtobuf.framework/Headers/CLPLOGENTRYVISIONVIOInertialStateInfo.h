// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPLOGENTRYVISIONVIOINERTIALSTATEINFO_H
#define CLPLOGENTRYVISIONVIOINERTIALSTATEINFO_H

@class PBCodable;
@protocol NSCopying;



@interface CLPLOGENTRYVISIONVIOInertialStateInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int accelBiasLength; // ivar: _accelBiasLength
@property (nonatomic) unsigned int accelBiasOffset; // ivar: _accelBiasOffset
@property (nonatomic) unsigned int gyroBiasLength; // ivar: _gyroBiasLength
@property (nonatomic) unsigned int gyroBiasOffset; // ivar: _gyroBiasOffset
@property (nonatomic) BOOL hasAccelBiasLength;
@property (nonatomic) BOOL hasAccelBiasOffset;
@property (nonatomic) BOOL hasGyroBiasLength;
@property (nonatomic) BOOL hasGyroBiasOffset;
@property (nonatomic) BOOL hasOrientationLength;
@property (nonatomic) BOOL hasOrientationOffset;
@property (nonatomic) BOOL hasPositionLength;
@property (nonatomic) BOOL hasPositionOffset;
@property (nonatomic) BOOL hasStateLength;
@property (nonatomic) BOOL hasStateLengthInBytes;
@property (nonatomic) BOOL hasVelocityLength;
@property (nonatomic) BOOL hasVelocityOffset;
@property (nonatomic) unsigned int orientationLength; // ivar: _orientationLength
@property (nonatomic) unsigned int orientationOffset; // ivar: _orientationOffset
@property (nonatomic) unsigned int positionLength; // ivar: _positionLength
@property (nonatomic) unsigned int positionOffset; // ivar: _positionOffset
@property (nonatomic) unsigned int stateLength; // ivar: _stateLength
@property (nonatomic) NSUInteger stateLengthInBytes; // ivar: _stateLengthInBytes
@property (nonatomic) unsigned int velocityLength; // ivar: _velocityLength
@property (nonatomic) unsigned int velocityOffset; // ivar: _velocityOffset


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