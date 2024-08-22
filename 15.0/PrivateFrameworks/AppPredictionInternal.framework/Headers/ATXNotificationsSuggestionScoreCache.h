// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSSUGGESTIONSCORECACHE_H
#define ATXNOTIFICATIONSSUGGESTIONSCORECACHE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ATXNotificationsSuggestionScoreCache : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(id)initWithScore:(CGFloat)arg0 ;


@end


#endif