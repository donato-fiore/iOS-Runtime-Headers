// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRAUDIOBUFFERPROTOBUF_H
#define _MRAUDIOBUFFERPROTOBUF_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;


#import "_MRAudioFormatSettingsProtobuf.h"

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying>

 {
    NSInteger _maximumPacketSize;
    NSInteger _packetCapacity;
    NSInteger _packetCount;
    NSData *_contents;
    _MRAudioFormatSettingsProtobuf *_formatSettings;
    NSMutableArray *_packetDescriptions;
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