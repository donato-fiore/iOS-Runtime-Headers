// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDITEMHEADLINESOPERATIONPROPERTIES_H
#define FCFEEDITEMHEADLINESOPERATIONPROPERTIES_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface FCFeedItemHeadlinesOperationProperties : NSObject

@property (copy, nonatomic) NSMapTable *feedItemScoreProfiles; // ivar: _feedItemScoreProfiles
@property (retain, nonatomic) NSMapTable *resultHeadlinesByFeedItem; // ivar: _resultHeadlinesByFeedItem


-(void)dealloc;


@end


#endif