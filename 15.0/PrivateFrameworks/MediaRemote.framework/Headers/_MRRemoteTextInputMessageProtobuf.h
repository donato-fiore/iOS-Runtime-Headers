// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRREMOTETEXTINPUTMESSAGEPROTOBUF_H
#define _MRREMOTETEXTINPUTMESSAGEPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _MRRemoteTextInputMessageProtobuf : PBCodable <NSCopying>

 {
    CGFloat _timestamp;
    NSUInteger _version;
    ? _has;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) BOOL hasData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif