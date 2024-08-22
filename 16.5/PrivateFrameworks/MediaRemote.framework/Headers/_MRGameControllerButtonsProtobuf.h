// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRGAMECONTROLLERBUTTONSPROTOBUF_H
#define _MRGAMECONTROLLERBUTTONSPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float a; // ivar: _a
@property (nonatomic) float b; // ivar: _b
@property (nonatomic) float dPadX; // ivar: _dPadX
@property (nonatomic) float dPadY; // ivar: _dPadY
@property (nonatomic) BOOL hasA;
@property (nonatomic) BOOL hasB;
@property (nonatomic) BOOL hasDPadX;
@property (nonatomic) BOOL hasDPadY;
@property (nonatomic) BOOL hasLeftShoulder;
@property (nonatomic) BOOL hasLeftThumbstickX;
@property (nonatomic) BOOL hasLeftThumbstickY;
@property (nonatomic) BOOL hasLeftTrigger;
@property (nonatomic) BOOL hasPause;
@property (nonatomic) BOOL hasRightShoulder;
@property (nonatomic) BOOL hasRightThumbstickX;
@property (nonatomic) BOOL hasRightThumbstickY;
@property (nonatomic) BOOL hasRightTrigger;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) float leftShoulder; // ivar: _leftShoulder
@property (nonatomic) float leftThumbstickX; // ivar: _leftThumbstickX
@property (nonatomic) float leftThumbstickY; // ivar: _leftThumbstickY
@property (nonatomic) float leftTrigger; // ivar: _leftTrigger
@property (nonatomic) float pause; // ivar: _pause
@property (nonatomic) float rightShoulder; // ivar: _rightShoulder
@property (nonatomic) float rightThumbstickX; // ivar: _rightThumbstickX
@property (nonatomic) float rightThumbstickY; // ivar: _rightThumbstickY
@property (nonatomic) float rightTrigger; // ivar: _rightTrigger
@property (nonatomic) float x; // ivar: _x
@property (nonatomic) float y; // ivar: _y


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif