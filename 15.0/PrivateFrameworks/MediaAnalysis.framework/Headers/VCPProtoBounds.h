// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPROTOBOUNDS_H
#define VCPPROTOBOUNDS_H

@class PBCodable;
@protocol NSCopying;



@interface VCPProtoBounds : PBCodable <NSCopying>



@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) CGFloat width; // ivar: _width
@property (nonatomic) CGFloat x0; // ivar: _x0
@property (nonatomic) CGFloat y0; // ivar: _y0


+(id)boundsWithCGRect:(struct CGRect )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(struct CGRect )rectValue;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif