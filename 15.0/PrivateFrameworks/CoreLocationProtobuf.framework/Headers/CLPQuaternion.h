// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPQUATERNION_H
#define CLPQUATERNION_H

@class PBCodable;
@protocol NSCopying;



@interface CLPQuaternion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasW;
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