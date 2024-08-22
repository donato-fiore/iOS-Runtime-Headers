// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRCLIENTUPDATESCONFIGURATIONPROTOBUF_H
#define _MRCLIENTUPDATESCONFIGURATIONPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying>

 {
    NSMutableArray *_subscribedPlayerPaths;
    BOOL _artworkUpdates;
    BOOL _keyboardUpdates;
    BOOL _nowPlayingUpdates;
    BOOL _outputDeviceUpdates;
    BOOL _systemEndpointUpdates;
    BOOL _volumeUpdates;
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