// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCLURLDATALOADER_H
#define MCLURLDATALOADER_H

@class NSString, NSURLCache, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSRecursiveLock, NSMutableOrderedSet, NSSet, NSHTTPCookieStorage, NSArray, NSURLSession;
@protocol NSURLSessionDataDelegate, NSURLSessionDownloadDelegate;

#import <Foundation/Foundation.h>


@interface MCLURLDataLoader : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>

 {
    NSString *_cachePath;
    NSURLCache *_cache;
    NSString *_downloadCacheDirectory;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_priorities;
    NSMutableArray *_taskQueue;
    NSRecursiveLock *_taskQueueLock;
    NSMutableDictionary *_activeTasks;
    NSMutableArray *_sessionTasks;
    NSMutableOrderedSet *_duplicateTasks;
    NSMutableOrderedSet *_rewriteRules;
    BOOL _suspended;
    BOOL _resuming;
    NSUInteger _backgroundTaskIdentifier;
}


@property (readonly, nonatomic) NSURLCache *cache;
@property (readonly, nonatomic) NSSet *cacheLocations;
@property (readonly, nonatomic) NSHTTPCookieStorage *cookieStorage; // ivar: _cookieStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSArray *rewriteRules;
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(BOOL)isValidResumeData:(id)arg0 ;
+(BOOL)task:(id)arg0 equalsToTask:(id)arg1 ;
+(id)dateFromRFC1123:(id)arg0 ;
+(id)downloadData;
+(id)duplicateResponse:(id)arg0 withContentLength:(NSInteger)arg1 ;
+(id)fileExtensionForMimeType:(id)arg0 ;
+(id)mimeTypeForFileExtension:(id)arg0 ;
+(id)shared;
+(id)uniqueImageKeyForURL:(id)arg0 ;
+(id)uniqueKeyForURL:(id)arg0 ;
+(void)addSessionConfigurator:(id)arg0 ;
+(void)applyDefaultRequestHeaders:(id)arg0 ;
+(void)removeFilesOlderThan:(id)arg0 inDirectory:(id)arg1 ;
+(void)restart:(id)arg0 ;
-(BOOL)deleteCookie:(id)arg0 inDomain:(id)arg1 secure:(BOOL)arg2 ;
-(NSInteger)priorityForCategory:(id)arg0 ;
-(NSUInteger)connectionsLimitForPriorityOfTask:(id)arg0 ;
-(id)_cachedResponseForRequest:(id)arg0 ;
-(id)allCookies;
-(id)cachableFileAttributes:(id)arg0 ;
-(id)configuredURLRequestForTask:(id)arg0 download:(*BOOL)arg1 resumeData:(*id)arg2 ;
-(id)cookiesForURL:(id)arg0 ;
-(id)defaultSessionConfiguration;
-(id)downloadCachedResponse:(id)arg0 ;
-(id)downloadCachesDirectory;
-(id)downloadImageFromURL:(id)arg0 category:(id)arg1 completionHandler:(id)arg2 ;
-(id)downloadImageWithRequest:(id)arg0 category:(id)arg1 completionHandler:(id)arg2 ;
-(id)downloadRequest:(id)arg0 category:(id)arg1 completionHandler:(id)arg2 ;
-(id)downloadRequest:(id)arg0 toPath:(id)arg1 category:(id)arg2 completionHandler:(id)arg3 ;
-(id)downloadURL:(id)arg0 category:(id)arg1 completionHandler:(id)arg2 ;
-(id)downloadURL:(id)arg0 toPath:(id)arg1 category:(id)arg2 completionHandler:(id)arg3 ;
-(id)duplicateTasksForTask:(id)arg0 ;
-(id)findCookie:(id)arg0 inDomain:(id)arg1 secure:(BOOL)arg2 ;
-(id)findCookie:(id)arg0 inDomain:(id)arg1 secure:(BOOL)arg2 cookies:(id)arg3 ;
-(id)findMatchingCookies:(id)arg0 inDomain:(id)arg1 secure:(BOOL)arg2 ;
-(id)imagesDownloadDirectory;
-(id)init;
-(id)loadRequest:(id)arg0 category:(id)arg1 completionHandler:(id)arg2 ;
// -(id)loadRequest:(id)arg0 category:(id)arg1 completionHandler:(id)arg2 receiveData:(unk)arg3  ;
-(id)loadURL:(id)arg0 category:(id)arg1 completionHandler:(id)arg2 ;
-(id)loaderTaskForSessionTask:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(NSInteger)arg2 expectedTotalBytes:(NSInteger)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
-(void)_removeCachedResponseForRequest:(id)arg0 ;
-(void)_removeCachedResponseForRequest:(id)arg0 force:(BOOL)arg1 ;
-(void)addCacheLocation:(id)arg0 ;
-(void)addRewriteRule:(id)arg0 ;
-(void)applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)applyRewriteRules:(id)arg0 ;
-(void)backgroundClearOldCaches:(id)arg0 ;
-(void)backgroundRemoveCachedResponseForRequest:(id)arg0 ;
-(void)cancelTask:(id)arg0 ;
-(void)cancelTasks:(id)arg0 ;
-(void)clearCache;
-(void)clearOldCaches:(id)arg0 ;
-(void)configureSession;
-(void)configureSession:(id)arg0 ;
-(void)deleteCookiesMatchingPredicate:(id)arg0 ;
-(void)dispose;
-(void)enqueueTask:(id)arg0 reschedule:(BOOL)arg1 ;
-(void)enumerateCookies:(id)arg0 inDomain:(id)arg1 secure:(BOOL)arg2 withBlock:(id)arg3 ;
-(void)enumerateCookies:(id)arg0 secure:(BOOL)arg1 cookies:(id)arg2 withBlock:(id)arg3 ;
-(void)flushCache;
-(void)internalRestart:(id)arg0 ;
-(void)notifyBackgroundStopped;
-(void)notifyEmptyQueue;
-(void)notifyEnqueue;
-(void)operationCancelTask:(id)arg0 ;
-(void)operationReschedule;
-(void)operationRestartSession;
-(void)operationResumeSession;
-(void)operationSuspendSession;
-(void)processURLRequestRewrite:(id)arg0 ;
-(void)removeAllRewriteRules;
-(void)removeCachedResponseForRequest:(id)arg0 ;
-(void)removeRewriteRule:(id)arg0 ;
-(void)removeRewriteRules:(id)arg0 ;
-(void)removeRewriteRulesWithName:(id)arg0 ;
-(void)resume;
-(void)setCategory:(id)arg0 forTask:(id)arg1 ;
-(void)setCategory:(id)arg0 forTasks:(id)arg1 ;
-(void)setCookie:(id)arg0 ;
-(void)setPriority:(NSInteger)arg0 forCategory:(id)arg1 ;
-(void)setupCache:(BOOL)arg0 ;
-(void)storeResumeData:(id)arg0 forTask:(id)arg1 ;
-(void)suspend;
-(void)task:(id)arg0 completedWithError:(id)arg1 ;
-(void)updateDownloadCacheEntry:(id)arg0 ;


@end


#endif