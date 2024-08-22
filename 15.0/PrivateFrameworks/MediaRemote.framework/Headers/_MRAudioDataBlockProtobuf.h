// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRAUDIODATABLOCKPROTOBUF_H
#define _MRAUDIODATABLOCKPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRAudioBufferProtobuf.h"
#import "_MRAudioTimeProtobuf.h"

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying>

 {
    CGFloat _gain;
    _MRAudioBufferProtobuf *_buffer;
    _MRAudioTimeProtobuf *_time;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif