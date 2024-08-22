// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBVIDEOPLAYERCONFIG_H
#define NTPBVIDEOPLAYERCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBVideoPlayerConfig : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *discoverMoreVideosSubtitle; // ivar: _discoverMoreVideosSubtitle
@property (retain, nonatomic) NSString *discoverMoreVideosTitle; // ivar: _discoverMoreVideosTitle
@property (retain, nonatomic) NSString *discoverMoreVideosUrl; // ivar: _discoverMoreVideosUrl
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosSubtitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosTitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosUrl;


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