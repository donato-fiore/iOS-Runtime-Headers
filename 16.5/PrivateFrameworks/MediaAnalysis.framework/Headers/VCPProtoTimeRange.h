// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPPROTOTIMERANGE_H
#define VCPPROTOTIMERANGE_H

@class PBCodable;
@protocol NSCopying;


#import "VCPProtoTime.h"

@interface VCPProtoTimeRange : PBCodable <NSCopying>



@property (retain, nonatomic) VCPProtoTime *duration; // ivar: _duration
@property (retain, nonatomic) VCPProtoTime *start; // ivar: _start


+(id)timeRangeWithCMTimeRange:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(struct ? )timeRangeValue;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif