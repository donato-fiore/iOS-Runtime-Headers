// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMRECENTITEMSLIST_H
#define IMRECENTITEMSLIST_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMRecentItemsList : NSObject {
    NSObject<OS_dispatch_queue> *_diskWritingQueue;
}




+(id)sharedInstance;
-(NSInteger)cacheSizeForDomain:(id)arg0 ;
-(id)_buildLRUCacheUsingArray:(id)arg0 forDomain:(id)arg1 ;
-(id)_guidForFileURL:(id)arg0 ;
-(id)_recentsCacheForDomain:(id)arg0 ;
-(id)init;
-(void)_addRecentDataPayloadEntry:(id)arg0 toDomain:(id)arg1 ;
-(void)_removeRecentDataPayloadEntry:(id)arg0 forDomain:(id)arg1 ;
-(void)_removeRecentDataPayloadEntryFromDisk:(id)arg0 forDomain:(id)arg1 ;
-(void)_saveRecentDataPayloadEntryToDisk:(id)arg0 forDomain:(id)arg1 ;
-(void)_updateRecentsCache:(id)arg0 forDomain:(id)arg1 ;
-(void)addRecentItemAtFileURL:(id)arg0 GUID:(id)arg1 infoDictionary:(id)arg2 forDomain:(id)arg3 ;
-(void)addRecentItemWithData:(id)arg0 GUID:(id)arg1 infoDictionary:(id)arg2 forDomain:(id)arg3 ;
-(void)dealloc;
-(void)deleteAllRecentItemsForDomain:(id)arg0 ;
-(void)deleteRecentItemWithData:(id)arg0 GUID:(id)arg1 forDomain:(id)arg2 ;
-(void)deleteRecentItemWithFileURL:(id)arg0 GUID:(id)arg1 forDomain:(id)arg2 ;
-(void)deleteRecentsInFirstLaunch;
-(void)dispatchCacheUpdateWithBlock:(id)arg0 ;
-(void)fetchRecentItemsForDomain:(id)arg0 completion:(id)arg1 ;
-(void)fetchRecentStickersWithCompletion:(id)arg0 ;


@end


#endif