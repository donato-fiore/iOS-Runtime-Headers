// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRGAMECONTROLLERBUTTONSPROTOBUF_H
#define _MRGAMECONTROLLERBUTTONSPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying>

 {
    float _a;
    float _b;
    float _dPadX;
    float _dPadY;
    float _leftShoulder;
    float _leftThumbstickX;
    float _leftThumbstickY;
    float _leftTrigger;
    float _pause;
    float _rightShoulder;
    float _rightThumbstickX;
    float _rightThumbstickY;
    float _rightTrigger;
    float _x;
    float _y;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif