// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRAVENDPOINTDESCRIPTORPROTOBUF_H
#define _MRAVENDPOINTDESCRIPTORPROTOBUF_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "_MRAVOutputDeviceDescriptorProtobuf.h"

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL canModifyGroupMembership; // ivar: _canModifyGroupMembership
@property (nonatomic) int connectionType; // ivar: _connectionType
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader; // ivar: _designatedGroupLeader
@property (nonatomic) BOOL hasCanModifyGroupMembership;
@property (nonatomic) BOOL hasConnectionType;
@property (readonly, nonatomic) BOOL hasDesignatedGroupLeader;
@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (nonatomic) BOOL hasIsLocalEndpoint;
@property (nonatomic) BOOL hasIsProxyGroupPlayer;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier; // ivar: _instanceIdentifier
@property (nonatomic) BOOL isLocalEndpoint; // ivar: _isLocalEndpoint
@property (nonatomic) BOOL isProxyGroupPlayer; // ivar: _isProxyGroupPlayer
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *outputDevices; // ivar: _outputDevices
@property (retain, nonatomic) NSMutableArray *personalOutputDevices; // ivar: _personalOutputDevices
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)connectionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outputDevicesAtIndex:(NSUInteger)arg0 ;
-(id)personalOutputDevicesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsConnectionType:(id)arg0 ;
-(void)addOutputDevices:(id)arg0 ;
-(void)addPersonalOutputDevices:(id)arg0 ;
-(void)clearOutputDevices;
-(void)clearPersonalOutputDevices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif