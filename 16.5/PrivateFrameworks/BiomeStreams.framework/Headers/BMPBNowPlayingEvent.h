// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBNOWPLAYINGEVENT_H
#define BMPBNOWPLAYINGEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBNowPlayingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) unsigned int elapsed; // ivar: _elapsed
@property (retain, nonatomic) NSString *genre; // ivar: _genre
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasAlbum;
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasElapsed;
@property (readonly, nonatomic) BOOL hasGenre;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (readonly, nonatomic) BOOL hasITunesAlbumIdentifier;
@property (readonly, nonatomic) BOOL hasITunesArtistIdentifier;
@property (readonly, nonatomic) BOOL hasITunesStoreIdentifier;
@property (readonly, nonatomic) BOOL hasITunesSubscriptionIdentifier;
@property (nonatomic) BOOL hasIsAirPlayVideo;
@property (nonatomic) BOOL hasIsRemoteControl;
@property (nonatomic) BOOL hasItemMediaSubtype;
@property (nonatomic) BOOL hasItemMediaType;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasPlaybackState;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *iTunesAlbumIdentifier; // ivar: _iTunesAlbumIdentifier
@property (retain, nonatomic) NSString *iTunesArtistIdentifier; // ivar: _iTunesArtistIdentifier
@property (retain, nonatomic) NSString *iTunesStoreIdentifier; // ivar: _iTunesStoreIdentifier
@property (retain, nonatomic) NSString *iTunesSubscriptionIdentifier; // ivar: _iTunesSubscriptionIdentifier
@property (nonatomic) BOOL isAirPlayVideo; // ivar: _isAirPlayVideo
@property (nonatomic) BOOL isRemoteControl; // ivar: _isRemoteControl
@property (nonatomic) int itemMediaSubtype; // ivar: _itemMediaSubtype
@property (nonatomic) int itemMediaType; // ivar: _itemMediaType
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSMutableArray *outputDevices; // ivar: _outputDevices
@property (nonatomic) int playbackState; // ivar: _playbackState
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)itemMediaSubtypeAsString:(int)arg0 ;
-(id)itemMediaTypeAsString:(int)arg0 ;
-(id)outputDevicesAtIndex:(NSUInteger)arg0 ;
-(id)playbackStateAsString:(int)arg0 ;
-(int)StringAsItemMediaSubtype:(id)arg0 ;
-(int)StringAsItemMediaType:(id)arg0 ;
-(int)StringAsPlaybackState:(id)arg0 ;
-(void)addOutputDevices:(id)arg0 ;
-(void)clearOutputDevices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif