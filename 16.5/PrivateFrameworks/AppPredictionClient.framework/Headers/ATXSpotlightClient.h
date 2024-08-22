// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTCLIENT_H
#define ATXSPOTLIGHTCLIENT_H


#import <Foundation/Foundation.h>


@interface ATXSpotlightClient : NSObject



+(BOOL)_isAutoShortcutEnabledForSpotlight:(id)arg0 ;
+(BOOL)_isValidSuggestion:(id)arg0 forWorldState:(id)arg1 ;
+(BOOL)_shouldDisplayUpcomingMediaForTesting;
+(BOOL)_topic:(id)arg0 isDuplicateComparingTopics:(id)arg1 ;
+(BOOL)isAutoShortcutEnabledForSpotlightForBundleId:(id)arg0 signature:(id)arg1 ;
+(BOOL)isAutoShortcutsEnabledForSpotlightForBundleId:(id)arg0 ;
+(id)_accessoryImageWithContextualAction:(id)arg0 ;
+(id)_descriptionForTopic:(id)arg0 ;
+(id)_fetchRecentSpotlightTopics:(NSInteger)arg0 ;
+(id)_imageWithContextualActionIcon:(id)arg0 ;
+(id)_responseWithSpotlightLayout:(id)arg0 andSpotlightRecentTopics:(id)arg1 ;
+(id)_responseWithUpcomingMedia;
+(id)_resultWithATXAction:(id)arg0 ;
+(id)_resultWithActionSuggestion:(id)arg0 ;
+(id)_resultWithAppClipSuggestion:(id)arg0 ;
+(id)_resultWithShortcutsActionSuggestion:(id)arg0 ;
+(id)_resultWithSuggestion:(id)arg0 ;
+(id)_symbolImageForName:(id)arg0 ;
+(id)_topicWithSuggestion:(id)arg0 layoutUUID:(id)arg1 ;
+(id)detailedRowCardSectionWithTitle:(id)arg0 subtitles:(id)arg1 thumbnail:(id)arg2 trailingImage:(id)arg3 ;
+(id)recentUpcomingMediaActionsWithLimit:(NSUInteger)arg0 ;
+(id)suggestedResultResponseWithLimit:(NSInteger)arg0 ;
+(id)suggestedResultResponseWithLimit:(NSInteger)arg0 andSpotlightRecentTopics:(id)arg1 ;


@end


#endif