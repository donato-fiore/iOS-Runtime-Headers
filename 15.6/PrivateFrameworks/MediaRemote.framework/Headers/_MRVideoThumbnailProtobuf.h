// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRVIDEOTHUMBNAILPROTOBUF_H
#define _MRVIDEOTHUMBNAILPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _MRVideoThumbnailProtobuf : PBCodable <NSCopying>

 {
    CGFloat _time;
    NSData *_imageData;
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