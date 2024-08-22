// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDCONTEXT_H
#define FCFEEDCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCFeedContext : NSObject <NSCopying>



@property (copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (nonatomic) BOOL isCoverArticles; // ivar: _isCoverArticles
@property (nonatomic) BOOL isEditorial; // ivar: _isEditorial
@property (nonatomic) BOOL isEditorialGems; // ivar: _isEditorialGems
@property (nonatomic) BOOL isHiddenFeed; // ivar: _isHiddenFeed
@property (nonatomic) BOOL isPaidBundleFeed; // ivar: _isPaidBundleFeed
@property (nonatomic) BOOL isTopStories; // ivar: _isTopStories
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (copy, nonatomic) NSString *topicID; // ivar: _topicID


+(id)feedContextForBreakingNewsChannelID:(id)arg0 ;
+(id)feedContextForChannel:(id)arg0 sectionID:(id)arg1 ;
+(id)feedContextForCoverArticlesFeed;
+(id)feedContextForEditorialChannel:(id)arg0 editorialGemsSectionID:(id)arg1 ;
+(id)feedContextForEditorialChannel:(id)arg0 sectionID:(id)arg1 ;
+(id)feedContextForEditorialTag:(id)arg0 ;
+(id)feedContextForHiddenFeed;
+(id)feedContextForPaidBundleFeed;
+(id)feedContextForTag:(id)arg0 ;
+(id)feedContextForTopStoriesChannel:(id)arg0 sectionID:(id)arg1 ;
+(id)feedContextForTopStoriesTag:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif