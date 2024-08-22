// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRDISCOVERYUPDATEOUTPUTDEVICESPROTOBUFMESSAGE_H
#define _MRDISCOVERYUPDATEOUTPUTDEVICESPROTOBUFMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRDiscoverySessionConfigurationProtobuf.h"

@interface _MRDiscoveryUpdateOutputDevicesProtobufMessage : PBCodable <NSCopying>

 {
    _MRDiscoverySessionConfigurationProtobuf *_configuration;
    NSMutableArray *_outputDevices;
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