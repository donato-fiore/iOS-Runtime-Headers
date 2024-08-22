// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETPTAP_H
#define ETPTAP_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ETPTap : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *colors; // ivar: _colors
@property (readonly, nonatomic) BOOL hasColors;
@property (readonly, nonatomic) BOOL hasPoints;
@property (readonly, nonatomic) BOOL hasTimeDeltas;
@property (retain, nonatomic) NSData *points; // ivar: _points
@property (retain, nonatomic) NSData *timeDeltas; // ivar: _timeDeltas


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