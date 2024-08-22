// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRAVMODIFYOUTPUTCONTEXTREQUESTPROTOBUF_H
#define _MRAVMODIFYOUTPUTCONTEXTREQUESTPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *addingOutputDeviceUIDs; // ivar: _addingOutputDeviceUIDs
@property (retain, nonatomic) NSMutableArray *clusterAwareAddingOutputDeviceUIDs; // ivar: _clusterAwareAddingOutputDeviceUIDs
@property (retain, nonatomic) NSMutableArray *clusterAwareRemovingOutputDeviceUIDs; // ivar: _clusterAwareRemovingOutputDeviceUIDs
@property (retain, nonatomic) NSMutableArray *clusterAwareSettingOutputDeviceUIDs; // ivar: _clusterAwareSettingOutputDeviceUIDs
@property (nonatomic) BOOL hasOutputContextType;
@property (nonatomic) int outputContextType; // ivar: _outputContextType
@property (retain, nonatomic) NSMutableArray *removingOutputDeviceUIDs; // ivar: _removingOutputDeviceUIDs
@property (retain, nonatomic) NSMutableArray *settingOutputDeviceUIDs; // ivar: _settingOutputDeviceUIDs


+(Class)addingOutputDeviceUIDType;
+(Class)clusterAwareAddingOutputDeviceUIDType;
+(Class)clusterAwareRemovingOutputDeviceUIDType;
+(Class)clusterAwareSettingOutputDeviceUIDType;
+(Class)removingOutputDeviceUIDType;
+(Class)settingOutputDeviceUIDType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addingOutputDeviceUIDAtIndex:(NSUInteger)arg0 ;
-(id)clusterAwareAddingOutputDeviceUIDAtIndex:(NSUInteger)arg0 ;
-(id)clusterAwareRemovingOutputDeviceUIDAtIndex:(NSUInteger)arg0 ;
-(id)clusterAwareSettingOutputDeviceUIDAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outputContextTypeAsString:(int)arg0 ;
-(id)removingOutputDeviceUIDAtIndex:(NSUInteger)arg0 ;
-(id)settingOutputDeviceUIDAtIndex:(NSUInteger)arg0 ;
-(int)StringAsOutputContextType:(id)arg0 ;
-(void)addAddingOutputDeviceUID:(id)arg0 ;
-(void)addClusterAwareAddingOutputDeviceUID:(id)arg0 ;
-(void)addClusterAwareRemovingOutputDeviceUID:(id)arg0 ;
-(void)addClusterAwareSettingOutputDeviceUID:(id)arg0 ;
-(void)addRemovingOutputDeviceUID:(id)arg0 ;
-(void)addSettingOutputDeviceUID:(id)arg0 ;
-(void)clearAddingOutputDeviceUIDs;
-(void)clearClusterAwareAddingOutputDeviceUIDs;
-(void)clearClusterAwareRemovingOutputDeviceUIDs;
-(void)clearClusterAwareSettingOutputDeviceUIDs;
-(void)clearRemovingOutputDeviceUIDs;
-(void)clearSettingOutputDeviceUIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif