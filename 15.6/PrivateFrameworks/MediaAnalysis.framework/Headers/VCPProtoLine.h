// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOLINE_H
#define VCPPROTOLINE_H

@class PBCodable;
@protocol NSCopying;


#import "VCPProtoPoint.h"

@interface VCPProtoLine : PBCodable <NSCopying>



@property (retain, nonatomic) VCPProtoPoint *end; // ivar: _end
@property (retain, nonatomic) VCPProtoPoint *start; // ivar: _start


+(id)lineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
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