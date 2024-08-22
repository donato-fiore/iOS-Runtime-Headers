// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRERRORPROTOBUF_H
#define _MRERRORPROTOBUF_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface _MRErrorProtobuf : PBCodable <NSCopying>

 {
    int _code;
    NSString *_domain;
    NSString *_localizedDescription;
    NSString *_localizedFailureReason;
    NSMutableArray *_underlyingErrors;
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