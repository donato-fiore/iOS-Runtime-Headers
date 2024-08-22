// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETPKISS_H
#define ETPKISS_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ETPKiss : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *angles; // ivar: _angles
@property (retain, nonatomic) NSData *delays; // ivar: _delays
@property (readonly, nonatomic) BOOL hasAngles;
@property (readonly, nonatomic) BOOL hasDelays;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points; // ivar: _points


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif