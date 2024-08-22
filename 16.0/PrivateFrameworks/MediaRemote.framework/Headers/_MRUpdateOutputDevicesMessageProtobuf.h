// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRUPDATEOUTPUTDEVICESMESSAGEPROTOBUF_H
#define _MRUPDATEOUTPUTDEVICESMESSAGEPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *clusterAwareOutputDevices; // ivar: _clusterAwareOutputDevices
@property (retain, nonatomic) NSString *endpointUID; // ivar: _endpointUID
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSMutableArray *outputDevices; // ivar: _outputDevices


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clusterAwareOutputDevicesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outputDevicesAtIndex:(NSUInteger)arg0 ;
-(void)addClusterAwareOutputDevices:(id)arg0 ;
-(void)addOutputDevices:(id)arg0 ;
-(void)clearClusterAwareOutputDevices;
-(void)clearOutputDevices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif