// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMPBMEDIAPLAYBACKACTION_H
#define HMPBMEDIAPLAYBACKACTION_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface HMPBMediaPlaybackAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *actionUUID; // ivar: _actionUUID
@property (readonly, nonatomic) BOOL hasActionUUID;
@property (nonatomic) BOOL hasMediaPlaybackState;
@property (readonly, nonatomic) BOOL hasPlaybackArchive;
@property (readonly, nonatomic) BOOL hasVolume;
@property (nonatomic) int mediaPlaybackState; // ivar: _mediaPlaybackState
@property (retain, nonatomic) NSMutableArray *mediaProfiles; // ivar: _mediaProfiles
@property (retain, nonatomic) NSData *playbackArchive; // ivar: _playbackArchive
@property (retain, nonatomic) NSData *volume; // ivar: _volume


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mediaProfilesAtIndex:(NSUInteger)arg0 ;
-(void)addMediaProfiles:(id)arg0 ;
-(void)clearMediaProfiles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif