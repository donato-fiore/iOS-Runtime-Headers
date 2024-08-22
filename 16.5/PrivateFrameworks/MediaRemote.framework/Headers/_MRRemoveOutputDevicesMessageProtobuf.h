// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRREMOVEOUTPUTDEVICESMESSAGEPROTOBUF_H
#define _MRREMOVEOUTPUTDEVICESMESSAGEPROTOBUF_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface _MRRemoveOutputDevicesMessageProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *endpointUID; // ivar: _endpointUID
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSMutableArray *outputDeviceUIDs; // ivar: _outputDeviceUIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outputDeviceUIDsAtIndex:(NSUInteger)arg0 ;
-(void)addOutputDeviceUIDs:(id)arg0 ;
-(void)clearOutputDeviceUIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif