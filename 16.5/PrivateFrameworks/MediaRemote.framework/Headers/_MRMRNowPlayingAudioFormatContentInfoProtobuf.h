// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRMRNOWPLAYINGAUDIOFORMATCONTENTINFOPROTOBUF_H
#define _MRMRNOWPLAYINGAUDIOFORMATCONTENTINFOPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRMRNowPlayingAudioFormatContentInfoProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger audioFormat; // ivar: _audioFormat
@property (nonatomic) NSUInteger audioSessionID; // ivar: _audioSessionID
@property (retain, nonatomic) NSString *bestAvailableContent; // ivar: _bestAvailableContent
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSUInteger channelCount; // ivar: _channelCount
@property (nonatomic) BOOL eligibleForSpatialization; // ivar: _eligibleForSpatialization
@property (nonatomic) BOOL hasAudioFormat;
@property (nonatomic) BOOL hasAudioSessionID;
@property (readonly, nonatomic) BOOL hasBestAvailableContent;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasChannelCount;
@property (nonatomic) BOOL hasEligibleForSpatialization;
@property (nonatomic) BOOL hasIntendedSpatialExperience;
@property (nonatomic) BOOL hasResolvedSpatialExperience;
@property (nonatomic) BOOL hasSpatialized;
@property (nonatomic) NSInteger intendedSpatialExperience; // ivar: _intendedSpatialExperience
@property (nonatomic) NSInteger resolvedSpatialExperience; // ivar: _resolvedSpatialExperience
@property (nonatomic) BOOL spatialized; // ivar: _spatialized


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