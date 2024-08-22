// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRAVOUTPUTDEVICESOURCEINFOPROTOBUF_H
#define _MRAVOUTPUTDEVICESOURCEINFOPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMultipleBuiltInDevices;
@property (readonly, nonatomic) BOOL hasRoutingContextUID;
@property (nonatomic) BOOL multipleBuiltInDevices; // ivar: _multipleBuiltInDevices
@property (retain, nonatomic) NSString *routingContextUID; // ivar: _routingContextUID


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