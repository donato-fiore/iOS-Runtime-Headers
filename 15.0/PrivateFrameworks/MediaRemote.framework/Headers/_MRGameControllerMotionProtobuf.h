// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRGAMECONTROLLERMOTIONPROTOBUF_H
#define _MRGAMECONTROLLERMOTIONPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRGameControllerAccelerationProtobuf.h"

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying>

 {
    _MRGameControllerAccelerationProtobuf *_attitude;
    _MRGameControllerAccelerationProtobuf *_gravity;
    _MRGameControllerAccelerationProtobuf *_rotation;
    _MRGameControllerAccelerationProtobuf *_userAcceleration;
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