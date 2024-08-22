// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCVIDEOGROUPSCONFIG_H
#define FCVIDEOGROUPSCONFIG_H

@class NSDictionary, NTPBVideoGroupsConfig;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FCVideoGroupsConfig : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *configDictionary; // ivar: _configDictionary
@property (readonly, nonatomic) BOOL moreFromPublisherBarEnabled;
@property (readonly, nonatomic) NSInteger moreFromPublisherBarTime;
@property (nonatomic) NSUInteger moreVideosGroupFilterOption; // ivar: _moreVideosGroupFilterOption
@property (readonly, nonatomic) NSInteger moreVideosGroupMaxNumberOfVideos;
@property (readonly, nonatomic) NSInteger moreVideosGroupMinNumberOfVideos;
@property (nonatomic) NSUInteger moreVideosGroupSortOption; // ivar: _moreVideosGroupSortOption
@property (readonly, nonatomic) NSInteger nowPlayingBarTime;
@property (copy, nonatomic) NTPBVideoGroupsConfig *pbVideoGroupsConfig; // ivar: _pbVideoGroupsConfig
@property (readonly, nonatomic) BOOL playsMutedByDefault;
@property (readonly, nonatomic) NSInteger upNextBarTime;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithVideoGroupsConfig:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif