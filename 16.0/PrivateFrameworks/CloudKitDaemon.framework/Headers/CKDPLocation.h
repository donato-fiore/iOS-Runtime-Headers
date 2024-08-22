// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPLOCATION_H
#define CKDPLOCATION_H

@class PBCodable, CKDPLocationCoordinate;
@protocol NSCopying;


#import "CKDPLocationBound.h"

@interface CKDPLocation : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPLocationBound *bounds; // ivar: _bounds
@property (retain, nonatomic) CKDPLocationCoordinate *coordinate; // ivar: _coordinate
@property (readonly, nonatomic) BOOL hasBounds;
@property (readonly, nonatomic) BOOL hasCoordinate;


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