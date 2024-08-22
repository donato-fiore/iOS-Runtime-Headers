// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCLUSTEREDHEADLINES_H
#define FCCLUSTEREDHEADLINES_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCClusteredHeadlines : NSObject

@property (readonly, copy, nonatomic) NSArray *d_allHeadlines;
@property (copy, nonatomic) NSDictionary *d_headlinesByNonWhitelistedTopicID; // ivar: _d_headlinesByNonWhitelistedTopicID
@property (copy, nonatomic) NSArray *discardedOrphanedHeadlines; // ivar: _discardedOrphanedHeadlines
@property (copy, nonatomic) NSDictionary *headlinesByTopicID; // ivar: _headlinesByTopicID
@property (copy, nonatomic) NSArray *orphanedHeadlines; // ivar: _orphanedHeadlines


-(id)d_JSONRepresentationWithTagController:(id)arg0 subscriptionList:(id)arg1 ;
-(void)d_sanityCheckAgainstInputHeadlines:(id)arg0 ;
-(void)filterClustersToTopicIDs:(id)arg0 ;


@end


#endif