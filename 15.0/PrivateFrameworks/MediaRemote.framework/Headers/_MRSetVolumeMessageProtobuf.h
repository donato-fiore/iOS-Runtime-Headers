// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRSETVOLUMEMESSAGEPROTOBUF_H
#define _MRSETVOLUMEMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRSetVolumeMessageProtobuf : PBCodable <NSCopying>

 {
    NSString *_outputDeviceUID;
    float _volume;
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