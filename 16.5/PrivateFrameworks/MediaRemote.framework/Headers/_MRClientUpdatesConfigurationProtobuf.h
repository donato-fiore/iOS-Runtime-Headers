// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRCLIENTUPDATESCONFIGURATIONPROTOBUF_H
#define _MRCLIENTUPDATESCONFIGURATIONPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL artworkUpdates; // ivar: _artworkUpdates
@property (nonatomic) BOOL hasArtworkUpdates;
@property (nonatomic) BOOL hasKeyboardUpdates;
@property (nonatomic) BOOL hasNowPlayingUpdates;
@property (nonatomic) BOOL hasOutputDeviceUpdates;
@property (nonatomic) BOOL hasSystemEndpointUpdates;
@property (nonatomic) BOOL hasVolumeUpdates;
@property (nonatomic) BOOL keyboardUpdates; // ivar: _keyboardUpdates
@property (nonatomic) BOOL nowPlayingUpdates; // ivar: _nowPlayingUpdates
@property (nonatomic) BOOL outputDeviceUpdates; // ivar: _outputDeviceUpdates
@property (retain, nonatomic) NSMutableArray *subscribedPlayerPaths; // ivar: _subscribedPlayerPaths
@property (nonatomic) BOOL systemEndpointUpdates; // ivar: _systemEndpointUpdates
@property (nonatomic) BOOL volumeUpdates; // ivar: _volumeUpdates


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)subscribedPlayerPathsAtIndex:(NSUInteger)arg0 ;
-(void)addSubscribedPlayerPaths:(id)arg0 ;
-(void)clearSubscribedPlayerPaths;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif