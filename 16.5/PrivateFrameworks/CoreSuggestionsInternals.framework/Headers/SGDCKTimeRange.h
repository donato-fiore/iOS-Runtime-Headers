// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDCKTIMERANGE_H
#define SGDCKTIMERANGE_H

@class PBCodable;
@protocol NSCopying;



@interface SGDCKTimeRange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat end; // ivar: _end
@property (nonatomic) NSInteger endUTCOffsetSeconds; // ivar: _endUTCOffsetSeconds
@property (nonatomic) BOOL floating; // ivar: _floating
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasEndUTCOffsetSeconds;
@property (nonatomic) BOOL hasFloating;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) BOOL hasStartUTCOffsetSeconds;
@property (nonatomic) CGFloat start; // ivar: _start
@property (nonatomic) NSInteger startUTCOffsetSeconds; // ivar: _startUTCOffsetSeconds


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