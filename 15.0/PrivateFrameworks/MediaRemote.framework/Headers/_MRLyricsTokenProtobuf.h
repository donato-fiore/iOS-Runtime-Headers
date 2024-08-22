// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRLYRICSTOKENPROTOBUF_H
#define _MRLYRICSTOKENPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _MRLyricsTokenProtobuf : PBCodable <NSCopying>

 {
    NSString *_identifier;
    NSData *_userData;
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