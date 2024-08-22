// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRSETISMUTEDMESSAGEPROTOBUF_H
#define _MRSETISMUTEDMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRSetIsMutedMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsMuted;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (nonatomic) BOOL isMuted; // ivar: _isMuted
@property (retain, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID


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