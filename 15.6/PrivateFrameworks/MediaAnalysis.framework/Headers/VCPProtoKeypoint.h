// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOKEYPOINT_H
#define VCPPROTOKEYPOINT_H

@class PBCodable;
@protocol NSCopying;



@interface VCPProtoKeypoint : PBCodable <NSCopying>



@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) float x; // ivar: _x
@property (nonatomic) float y; // ivar: _y


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif