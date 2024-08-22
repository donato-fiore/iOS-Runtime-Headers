// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRGAMECONTROLLERDIGITIZERPROTOBUF_H
#define _MRGAMECONTROLLERDIGITIZERPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTouchDown;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL touchDown; // ivar: _touchDown
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif