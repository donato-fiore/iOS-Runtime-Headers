// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPFILERESOURCECACHE_H
#define TSPFILERESOURCECACHE_H

@class NSOperationQueue, NSURL, NSString;
@protocol TSUResourceCache, TSUResourceFileURLProvider;

#import <Foundation/Foundation.h>


@interface TSPFileResourceCache : NSObject <TSUResourceCache, TSUResourceFileURLProvider>

 {
    NSOperationQueue *_ioOperationQueue;
}


@property (readonly, nonatomic) NSURL *cacheURL; // ivar: _cacheURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cacheDirectoryURLWithSignature:(id)arg0 sharedGroupContainer:(BOOL)arg1 ;
-(BOOL)cachedResourceExistsForInfo:(id)arg0 ;
-(id)fileURLForResourceInfo:(id)arg0 ;
-(id)fileURLInCacheForResourceInfo:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)cacheResourceAtURL:(id)arg0 forInfo:(id)arg1 copy:(BOOL)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)purge;


@end


#endif