// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRAVMODIFYOUTPUTCONTEXTREQUESTPROTOBUF_H
#define _MRAVMODIFYOUTPUTCONTEXTREQUESTPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying>

 {
    NSMutableArray *_addingOutputDeviceUIDs;
    NSMutableArray *_clusterAwareAddingOutputDeviceUIDs;
    NSMutableArray *_clusterAwareRemovingOutputDeviceUIDs;
    NSMutableArray *_clusterAwareSettingOutputDeviceUIDs;
    int _outputContextType;
    NSMutableArray *_removingOutputDeviceUIDs;
    NSMutableArray *_settingOutputDeviceUIDs;
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