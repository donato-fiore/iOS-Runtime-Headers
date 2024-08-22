// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTRESOURCECACHE_H
#define TSPDOCUMENTRESOURCECACHE_H

@class NSURL, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceCache : NSObject {
    NSURL *_cacheURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_entries;
}


@property (nonatomic) NSInteger maxCacheSizeInBytes; // ivar: _maxCacheSizeInBytes


+(id)defaultCacheURL;
+(id)sharedCache;
-(BOOL)beginDocumentResourceAccessForDigestString:(id)arg0 ;
-(BOOL)cacheDocumentResourceDigestString:(id)arg0 extension:(id)arg1 sourceURL:(id)arg2 fileSize:(NSInteger)arg3 wasDownloaded:(BOOL)arg4 ;
-(id)URLForDocumentResourceDigestString:(id)arg0 ;
-(id)entryForDigestString:(id)arg0 ;
-(id)init;
-(id)initWithCacheURL:(id)arg0 ;
-(void)clearCache;
-(void)endDocumentResourceAccessForDigestString:(id)arg0 ;
-(void)enumerateEntriesFromCacheURLWithHandler:(id)arg0 ;
-(void)reloadEntries;
-(void)shrinkCache;
-(void)shrinkCacheWithMaxCacheSizeInBytes:(NSInteger)arg0 ;


@end


#endif