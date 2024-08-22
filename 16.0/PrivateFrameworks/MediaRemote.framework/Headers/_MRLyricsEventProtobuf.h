// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRLYRICSEVENTPROTOBUF_H
#define _MRLYRICSEVENTPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRLyricsTokenProtobuf.h"

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasToken;
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token; // ivar: _token


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