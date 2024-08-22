// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIAPPCLIPAVAILABILITYMANAGER_H
#define SEARCHUIAPPCLIPAVAILABILITYMANAGER_H

@class NSCache, NSString;
@protocol SearchUIBatchedCachePrewarmer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SearchUIAppClipAvailabilityManager : NSObject <SearchUIBatchedCachePrewarmer>



@property (retain) NSCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSCache *possiblyAvailableCache; // ivar: _possiblyAvailableCache
@property (retain) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)batchingItemsForRowModel:(id)arg0 ;
-(id)cachedAvailabilityForCommand:(id)arg0 ;
-(id)init;
-(void)checkIfClipsAreValid:(id)arg0 completion:(id)arg1 ;
-(void)prewarmCacheForBatchedItems:(id)arg0 ;
-(void)requestAvailabilityForCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif