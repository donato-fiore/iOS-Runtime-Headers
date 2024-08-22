// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRGAMECONTROLLERMOTIONPROTOBUF_H
#define _MRGAMECONTROLLERMOTIONPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRGameControllerAccelerationProtobuf.h"

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *attitude; // ivar: _attitude
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *gravity; // ivar: _gravity
@property (readonly, nonatomic) BOOL hasAttitude;
@property (readonly, nonatomic) BOOL hasGravity;
@property (readonly, nonatomic) BOOL hasRotation;
@property (readonly, nonatomic) BOOL hasUserAcceleration;
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *rotation; // ivar: _rotation
@property (retain, nonatomic) _MRGameControllerAccelerationProtobuf *userAcceleration; // ivar: _userAcceleration


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