// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRDISCOVERYSESSIONCONFIGURATIONPROTOBUF_H
#define _MRDISCOVERYSESSIONCONFIGURATIONPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying>

 {
    int _features;
    NSString *_outputDeviceUID;
    NSString *_routingContextUID;
    unsigned int _targetSessionID;
    BOOL _alwaysAllowUpdates;
    BOOL _enableThrottling;
    BOOL _populatesExternalDevice;
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