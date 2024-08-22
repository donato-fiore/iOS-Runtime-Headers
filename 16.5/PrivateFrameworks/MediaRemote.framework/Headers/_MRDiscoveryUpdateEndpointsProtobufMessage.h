// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRDISCOVERYUPDATEENDPOINTSPROTOBUFMESSAGE_H
#define _MRDISCOVERYUPDATEENDPOINTSPROTOBUFMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRDiscoverySessionConfigurationProtobuf.h"

@interface _MRDiscoveryUpdateEndpointsProtobufMessage : PBCodable <NSCopying>



@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration; // ivar: _configuration
@property (retain, nonatomic) NSMutableArray *endpoints; // ivar: _endpoints
@property (readonly, nonatomic) BOOL hasConfiguration;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endpointsAtIndex:(NSUInteger)arg0 ;
-(void)addEndpoints:(id)arg0 ;
-(void)clearEndpoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif