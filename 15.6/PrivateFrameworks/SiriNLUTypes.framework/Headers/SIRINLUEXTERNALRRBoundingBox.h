// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALRRBOUNDINGBOX_H
#define SIRINLUEXTERNALRRBOUNDINGBOX_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUEXTERNALRRBoundingBox : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) BOOL hasXCoordinate;
@property (nonatomic) BOOL hasYCoordinate;
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) CGFloat width; // ivar: _width
@property (nonatomic) CGFloat xCoordinate; // ivar: _xCoordinate
@property (nonatomic) CGFloat yCoordinate; // ivar: _yCoordinate


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