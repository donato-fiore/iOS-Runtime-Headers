// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRDISCOVERYUPDATEOUTPUTDEVICESPROTOBUFMESSAGE_H
#define _MRDISCOVERYUPDATEOUTPUTDEVICESPROTOBUFMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRDiscoverySessionConfigurationProtobuf.h"

@interface _MRDiscoveryUpdateOutputDevicesProtobufMessage : PBCodable <NSCopying>



@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration; // ivar: _configuration
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) NSMutableArray *outputDevices; // ivar: _outputDevices


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outputDevicesAtIndex:(NSUInteger)arg0 ;
-(void)addOutputDevices:(id)arg0 ;
-(void)clearOutputDevices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif