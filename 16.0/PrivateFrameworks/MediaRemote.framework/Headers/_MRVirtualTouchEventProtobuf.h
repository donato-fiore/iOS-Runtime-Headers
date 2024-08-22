// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRVIRTUALTOUCHEVENTPROTOBUF_H
#define _MRVIRTUALTOUCHEVENTPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int finger; // ivar: _finger
@property (nonatomic) BOOL hasFinger;
@property (nonatomic) BOOL hasPhase;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) int phase; // ivar: _phase
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)phaseAsString:(int)arg0 ;
-(int)StringAsPhase:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif