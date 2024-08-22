// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSONDISKDATACACHE_H
#define WBSONDISKDATACACHE_H

@class NSCache, NSMutableSet, NSMutableDictionary, WBSCoalescedAsynchronousWriter, NSURL, NSString;
@protocol WBSDataCache, OS_dispatch_queue, WBSDataCacheDelegate;

#import <Foundation/Foundation.h>


@interface WBSOnDiskDataCache : NSObject <WBSDataCache>

 {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_entriesForKeyStringsCache;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingEntryKeyStrings;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
}


@property (readonly, nonatomic) NSURL *cacheDirectoryURL; // ivar: _cacheDirectoryURL
@property (weak, nonatomic) NSObject<WBSDataCacheDelegate> *dataCacheDelegate; // ivar: _dataCacheDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInMemoryCacheEnabled; // ivar: _isInMemoryCacheEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTerminating) BOOL terminating; // ivar: _terminating


-(NSInteger)_internalEntryStateForKeyString:(id)arg0 ;
-(NSInteger)entryStateForKeyString:(id)arg0 ;
-(id)_cacheSettingsFileURL;
-(id)_diskAccessQueueName;
-(id)_fileLocationForKeyString:(id)arg0 ;
-(id)_internalQueueName;
-(id)init;
-(id)initWithCacheDirectoryURL:(id)arg0 ;
-(id)requestEntryForKeyString:(id)arg0 ;
-(id)settingForKey:(id)arg0 ;
-(void)_didFailToLoadEntryForKeyString:(id)arg0 error:(id)arg1 ;
-(void)_didLoadEntry:(id)arg0 forKeyString:(id)arg1 ;
-(void)_dispatchDiskAccessBlock:(id)arg0 ;
-(void)_internalQueueDispatchAsync:(id)arg0 ;
-(void)_internalQueueDispatchSync:(id)arg0 ;
-(void)_notifyDidFinishSettingUp;
-(void)getEntryURLForKeyString:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeEntriesForKeyStrings:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeEntriesForKeyStringsNotIncludedIn:(id)arg0 completionHandler:(id)arg1 ;
-(void)reset;
-(void)savePendingChangesBeforeTearDown;
-(void)setEntry:(id)arg0 forKeyString:(id)arg1 completionHandler:(id)arg2 ;
-(void)setSetting:(id)arg0 forKey:(id)arg1 ;
-(void)setUp;


@end


#endif