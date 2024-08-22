// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOTIME_H
#define VCPPROTOTIME_H

@class PBCodable;
@protocol NSCopying;



@interface VCPProtoTime : PBCodable <NSCopying>



@property (nonatomic) NSInteger epoch; // ivar: _epoch
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) int timescale; // ivar: _timescale
@property (nonatomic) NSInteger value; // ivar: _value


+(id)timeWithCMTime:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(struct ? )timeValue;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif