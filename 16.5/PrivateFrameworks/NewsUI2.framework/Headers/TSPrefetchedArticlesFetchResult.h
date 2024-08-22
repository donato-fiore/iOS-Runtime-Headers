// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPREFETCHEDARTICLESFETCHRESULT_H
#define TSPREFETCHEDARTICLESFETCHRESULT_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface TSPrefetchedArticlesFetchResult : NSObject {
    ? selectedArticleID;
    ? articleIDs;
    ? prefetchedHeadlines;
}


@property (nonatomic, readonly) NSArray *articleIDs;
@property (nonatomic, readonly) NSDictionary *prefetchedHeadlines;
@property (nonatomic, readonly) NSString *selectedArticleID;


-(id)init;
-(id)initWithSelectedArticleID:(id)arg0 articleIDs:(id)arg1 prefetchedHeadlines:(id)arg2 ;


@end


#endif