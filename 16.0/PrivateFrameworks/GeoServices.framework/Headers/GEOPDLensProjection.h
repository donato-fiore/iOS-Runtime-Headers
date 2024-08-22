// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDLENSPROJECTION_H
#define GEOPDLENSPROJECTION_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPDLensProjection : PBCodable <NSCopying>

 {
    CGFloat _cx;
    CGFloat _cy;
    CGFloat _fovH;
    CGFloat _fovS;
    CGFloat _k2;
    CGFloat _k3;
    CGFloat _k4;
    CGFloat _lx;
    CGFloat _ly;
    int _type;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif