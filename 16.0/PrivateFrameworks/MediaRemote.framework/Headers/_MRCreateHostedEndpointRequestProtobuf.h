// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRCREATEHOSTEDENDPOINTREQUESTPROTOBUF_H
#define _MRCREATEHOSTEDENDPOINTREQUESTPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _MRCreateHostedEndpointRequestProtobuf : PBCodable <NSCopying>



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