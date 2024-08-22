// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRNOWPLAYINGAPPLICATIONSTATEPROTOBUF_H
#define _NMRNOWPLAYINGAPPLICATIONSTATEPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *companionBundleIdentifier; // ivar: _companionBundleIdentifier
@property (readonly, nonatomic) BOOL hasCompanionBundleIdentifier;
@property (readonly, nonatomic) BOOL hasIconDigest;
@property (readonly, nonatomic) BOOL hasLocalizedDisplayName;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) BOOL hasProcessID;
@property (readonly, nonatomic) BOOL hasWatchBundleIdentifier;
@property (retain, nonatomic) NSData *iconDigest; // ivar: _iconDigest
@property (retain, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (nonatomic) unsigned int playbackState; // ivar: _playbackState
@property (nonatomic) int processID; // ivar: _processID
@property (retain, nonatomic) NSString *watchBundleIdentifier; // ivar: _watchBundleIdentifier


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