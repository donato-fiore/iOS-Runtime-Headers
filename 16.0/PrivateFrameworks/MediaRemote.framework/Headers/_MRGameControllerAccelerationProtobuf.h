// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRGAMECONTROLLERACCELERATIONPROTOBUF_H
#define _MRGAMECONTROLLERACCELERATIONPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) BOOL hasData;
@property (nonatomic) BOOL hasW;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) float w; // ivar: _w
@property (nonatomic) float x; // ivar: _x
@property (nonatomic) float y; // ivar: _y
@property (nonatomic) float z; // ivar: _z


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