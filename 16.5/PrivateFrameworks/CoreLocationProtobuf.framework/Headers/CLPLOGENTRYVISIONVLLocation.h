// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONVLLOCATION_H
#define CLPLOGENTRYVISIONVLLOCATION_H

@class PBCodable;
@protocol NSCopying;


#import "CLPLOGENTRYVISIONSimdDoubleM.h"

@interface CLPLOGENTRYVISIONVLLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *coordinate; // ivar: _coordinate
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy


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