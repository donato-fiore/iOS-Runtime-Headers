// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBVIDEOGROUPSCONFIG_H
#define NTPBVIDEOGROUPSCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBVideoGroupsConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMoreFromPublisherBarEnabled;
@property (nonatomic) BOOL hasMoreFromPublisherBarTime;
@property (nonatomic) BOOL hasMoreVideosGroupFilterOption;
@property (nonatomic) BOOL hasMoreVideosGroupMaxNumberOfVideos;
@property (nonatomic) BOOL hasMoreVideosGroupMinNumberOfVideos;
@property (nonatomic) BOOL hasMoreVideosGroupSortOption;
@property (nonatomic) BOOL hasNowPlayingBarTime;
@property (nonatomic) BOOL hasPlaysMutedByDefault;
@property (nonatomic) BOOL hasUpNextBarTime;
@property (nonatomic) BOOL moreFromPublisherBarEnabled; // ivar: _moreFromPublisherBarEnabled
@property (nonatomic) NSInteger moreFromPublisherBarTime; // ivar: _moreFromPublisherBarTime
@property (nonatomic) int moreVideosGroupFilterOption; // ivar: _moreVideosGroupFilterOption
@property (nonatomic) NSInteger moreVideosGroupMaxNumberOfVideos; // ivar: _moreVideosGroupMaxNumberOfVideos
@property (nonatomic) NSInteger moreVideosGroupMinNumberOfVideos; // ivar: _moreVideosGroupMinNumberOfVideos
@property (nonatomic) int moreVideosGroupSortOption; // ivar: _moreVideosGroupSortOption
@property (nonatomic) NSInteger nowPlayingBarTime; // ivar: _nowPlayingBarTime
@property (nonatomic) BOOL playsMutedByDefault; // ivar: _playsMutedByDefault
@property (nonatomic) NSInteger upNextBarTime; // ivar: _upNextBarTime


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif