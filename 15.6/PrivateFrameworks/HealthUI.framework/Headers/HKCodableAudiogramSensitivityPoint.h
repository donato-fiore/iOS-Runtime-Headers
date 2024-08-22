// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEAUDIOGRAMSENSITIVITYPOINT_H
#define HKCODABLEAUDIOGRAMSENSITIVITYPOINT_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableAudiogramSensitivityPoint : PBCodable <NSCopying>



@property (retain, nonatomic) HKCodableQuantity *frequency; // ivar: _frequency
@property (readonly, nonatomic) BOOL hasFrequency;
@property (readonly, nonatomic) BOOL hasLeftEarSensitivity;
@property (readonly, nonatomic) BOOL hasRightEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *leftEarSensitivity; // ivar: _leftEarSensitivity
@property (retain, nonatomic) HKCodableQuantity *rightEarSensitivity; // ivar: _rightEarSensitivity


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