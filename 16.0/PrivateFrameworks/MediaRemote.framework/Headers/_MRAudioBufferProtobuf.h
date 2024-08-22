// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRAUDIOBUFFERPROTOBUF_H
#define _MRAUDIOBUFFERPROTOBUF_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;


#import "_MRAudioFormatSettingsProtobuf.h"

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *contents; // ivar: _contents
@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *formatSettings; // ivar: _formatSettings
@property (readonly, nonatomic) BOOL hasContents;
@property (readonly, nonatomic) BOOL hasFormatSettings;
@property (nonatomic) BOOL hasMaximumPacketSize;
@property (nonatomic) BOOL hasPacketCapacity;
@property (nonatomic) BOOL hasPacketCount;
@property (nonatomic) NSInteger maximumPacketSize; // ivar: _maximumPacketSize
@property (nonatomic) NSInteger packetCapacity; // ivar: _packetCapacity
@property (nonatomic) NSInteger packetCount; // ivar: _packetCount
@property (retain, nonatomic) NSMutableArray *packetDescriptions; // ivar: _packetDescriptions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)packetDescriptionsAtIndex:(NSUInteger)arg0 ;
-(void)addPacketDescriptions:(id)arg0 ;
-(void)clearPacketDescriptions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif