// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCESLINVENTORY_H
#define FCESLINVENTORY_H

@class NSArray, NSString, NTPBFeedItemInventory;
@protocol FCESLInventoryType;

#import <Foundation/Foundation.h>

#import "FCCloudContext.h"
#import "FCAsyncSerialQueue.h"
#import "FCOnce.h"

@interface FCESLInventory : NSObject <FCESLInventoryType>



@property (readonly, nonatomic) NSArray *allFeedItems;
@property (readonly, nonatomic) NSString *cacheDataPath; // ivar: _cacheDataPath
@property (readonly, nonatomic) FCCloudContext *context; // ivar: _context
@property (readonly, nonatomic) FCAsyncSerialQueue *feedItemsRefreshSerialQueue; // ivar: _feedItemsRefreshSerialQueue
@property (retain) NTPBFeedItemInventory *latestInventory; // ivar: _latestInventory
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce; // ivar: _loadFromCacheOnce


-(BOOL)_isRefreshNeeded;
-(id)_loadInventoryFromCache;
-(id)_promiseConfiguration;
-(id)_promiseEvergreenFeedItemsWithConfiguration:(id)arg0 ;
-(id)_promiseFeedItemsWithIssues:(id)arg0 configuration:(id)arg1 ;
-(id)_promiseIssueFeedItemsWithConfiguration:(id)arg0 ;
-(id)_promiseIssuesWithConfiguration:(id)arg0 ;
-(id)_refreshIfNeeded;
-(id)allFeedItemScoreProfilesForConfigurationSet:(NSInteger)arg0 ;
-(id)allFeedItemsWithTopic:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 cacheDirectory:(id)arg1 ;
-(void)_prepareForUse;
-(void)populateScoreProfilesForFeedItems:(id)arg0 ;
-(void)populateScoreProfilesForFeedItems:(id)arg0 configurationSet:(NSInteger)arg1 ;


@end


#endif