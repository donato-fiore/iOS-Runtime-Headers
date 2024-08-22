// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICSPOTLIGHTRECENT_H
#define ATXHEURISTICSPOTLIGHTRECENT_H

@class NSString;
@protocol ATXContextHeuristicProtocol;

#import <Foundation/Foundation.h>


@interface ATXHeuristicSpotlightRecent : NSObject <ATXContextHeuristicProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fetchRecentSpotlightResults:(NSInteger)arg0 ;
-(id)_recentSpotlightSearchTopicsWithLimit:(NSInteger)arg0 ;
-(id)_spotlightActionsForTopics:(id)arg0 ;
-(id)heuristicResultWithEnvironment:(id)arg0 ;
-(id)permanentRefreshTriggers;


@end


#endif