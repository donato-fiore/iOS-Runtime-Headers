// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFORYOUCONFIG_H
#define FCFORYOUCONFIG_H

@class NSArray, NSDate, NTPBForYouConfigRecord, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCInterestToken.h"
#import "FCSpotlightGroupConfig.h"
#import "FCTopStoriesGroupConfig.h"
#import "FCGroupConfig.h"

@interface FCForYouConfig : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *demoGroupConfigs; // ivar: _demoGroupConfigs
@property (readonly, nonatomic) NSArray *editorialArticleListIDs;
@property (retain, nonatomic) NSArray *editorialGroupConfigs; // ivar: _editorialGroupConfigs
@property (readonly, nonatomic) NSArray *editorialSectionTagIDs;
@property (readonly, nonatomic) NSDate *fetchedDate;
@property (retain, nonatomic) NTPBForYouConfigRecord *forYouConfigRecord; // ivar: _forYouConfigRecord
@property (retain, nonatomic) FCInterestToken *interestToken; // ivar: _interestToken
@property (readonly, nonatomic) NSString *moreVideosArticleListID; // ivar: _moreVideosArticleListID
@property (readonly, nonatomic) NSString *spotlightArticleID;
@property (retain, nonatomic) FCSpotlightGroupConfig *spotlightGroupConfig; // ivar: _spotlightGroupConfig
@property (readonly, nonatomic) NSArray *todayFeedTopStoriesArticleIDs;
@property (retain, nonatomic) FCTopStoriesGroupConfig *topStoriesGroupConfig; // ivar: _topStoriesGroupConfig
@property (readonly, nonatomic) NSArray *topVideosArticleIDs; // ivar: _topVideosArticleIDs
@property (readonly, nonatomic) NSString *trendingArticleListID;
@property (retain, nonatomic) FCGroupConfig *trendingGroupConfig; // ivar: _trendingGroupConfig


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRecord:(id)arg0 interestToken:(id)arg1 ;


@end


#endif