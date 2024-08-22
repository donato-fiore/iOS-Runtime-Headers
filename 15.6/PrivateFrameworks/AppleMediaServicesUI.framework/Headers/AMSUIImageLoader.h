// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIIMAGELOADER_H
#define AMSUIIMAGELOADER_H

@class NSCache, AMSURLSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSUIAssetQueue.h"

@interface AMSUIImageLoader : NSObject

@property (retain, nonatomic) AMSUIAssetQueue *fetchQueue; // ivar: _fetchQueue
@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) AMSURLSession *urlSession; // ivar: _urlSession
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)defaultLoader;
-(BOOL)_isURLBundleResource:(id)arg0 ;
-(BOOL)_isURLEngagementContent:(id)arg0 ;
-(BOOL)_isURLSystemImage:(id)arg0 ;
-(id)_fetchImageFromCacheWithURL:(id)arg0 ;
-(id)_fetchImageWithURL:(id)arg0 searchBundles:(id)arg1 atPriority:(NSInteger)arg2 ;
-(id)_makeOperationForImageWithURL:(id)arg0 searchBundles:(id)arg1 error:(*id)arg2 ;
-(id)_performLowLatencyOperation:(id)arg0 ;
-(id)fetchImageWithURL:(id)arg0 ;
-(id)fetchImageWithURL:(id)arg0 searchBundles:(id)arg1 ;
-(id)init;
-(void)_cacheImage:(id)arg0 withURL:(id)arg1 ;


@end


#endif